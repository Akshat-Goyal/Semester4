// Input Space
datatype InputSpace = InputSpace(arr: array?<int>)

// State Space
datatype StateSpace = StateSpace(arr: array?<int>, a: int, b: int)

// rho function
function method rho(tup:InputSpace): StateSpace
requires tup.arr != null
{
	StateSpace(tup.arr, 0, tup.arr.Length)
}

// view function h
function method pi(trip:StateSpace): array?<int>
{
	(trip.arr)
}

function count(k: int, a: array?<int>, i: int): int
requires a != null
requires 0 <= i <= a.Length
reads a
decreases a.Length - i
{
	if i == a.Length then 0 
	else if k == a[i] then 1 + count(k, a, i + 1) 
	else count(k, a, i + 1) 
}

predicate perm(a: array?<int>, b: array?<int>)
requires a != null
requires b != null
reads a
reads b
requires a.Length == b.Length
{
	forall k :: count(k, a, 0) == count(k, b, 0)
}

// Transition System
method TransitionSystem(initState: StateSpace) returns (terminalState:StateSpace)
// pre conditions
requires initState.arr != null
modifies initState.arr
requires initState.a == 0
requires initState.b == initState.arr.Length
requires initState.a + initState.b == initState.arr.Length
// post conditions
ensures terminalState.arr != null
ensures terminalState.arr.Length == initState.arr.Length
ensures terminalState.a == terminalState.arr.Length
ensures terminalState.b == 0
ensures terminalState.a + terminalState.b == terminalState.arr.Length
ensures perm(terminalState.arr, initState.arr)
ensures forall k :: 0 <= terminalState.arr.Length - terminalState.a <= k < terminalState.arr.Length - 1 ==> terminalState.arr[k] <= terminalState.arr[k + 1]
{
	var arr := initState.arr;
	var n := initState.arr.Length;
	var a := initState.a;
	var b := initState.b;

	while a < n 
	// loop invariance
	invariant 0 <= a <= n 
	invariant a + b == n
	invariant perm(arr, old(arr))
	invariant forall k :: 0 <= n - a <= k < n - 1 ==> arr[k] <= arr[k + 1]
	invariant forall l, r :: 0 <= l < n - a <= r < n ==> arr[l] <= arr[r]
	decreases n - a
	{
		b := 0;
		while b < n - a - 1
		// loop invariance
		invariant 0 <= b <= n - a - 1
		invariant perm(arr, old(arr))
		invariant forall k :: 0 <= n - a <= k < n - 1 ==> arr[k] <= arr[k + 1]
		invariant forall l, r :: 0 <= l < n - a <= r < n ==> arr[l] <= arr[r]
		invariant forall k :: 0 <= k <= b ==> arr[k] <= arr[b]
		decreases n - a - b 
		{
			if(arr[b] > arr[b + 1])
			{
				var tmp := arr[b + 1];
				arr[b + 1] := arr[b];
				arr[b] := tmp;
			}
			b := b + 1;
		}
		a := a + 1;
	}
	terminalState := StateSpace(arr, a, b);
}

method Main()
{
	var n: int := 4;
	var arr := new int[n];
	arr[0] := 2;
	arr[1] := 3;
	arr[2] := 4;
	arr[3] := 1;

	var input := InputSpace(arr);
	var initState := rho(input);
	var terminalState := TransitionSystem(initState);
	var output := pi(terminalState);
	
	n := output.Length;
	assert perm(output, arr);
	assert forall k :: 0 <= k < n - 1 ==> output[k] <= output[k + 1];
	var i: int := 0;
	while i < n
	decreases n - i
	{
		print output[i], " ";
		i := i + 1;
	}
	print "\n";
}