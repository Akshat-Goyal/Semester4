// Input Space
datatype InputSpace = InputSpace(arr: array<int>)

// State Space
datatype StateSpace = StateSpace(arr: array<int>, i: int, j: int)

// rho function
function method rho(tup: InputSpace): StateSpace
{
	StateSpace(tup.arr, 1, 0)
}

// view function h
function method pi(trip: StateSpace): array<int>
{
	(trip.arr)
}

predicate sorted(a:array<int>, min:int, max:int)
requires 0<= min <= max <= a.Length;
reads a;
{
  forall j, k :: min <= j < k < max ==> a[j] <= a[k]
}

predicate sortedSeq(a:seq<int>)
{
  forall j, k :: 0 <= j < k < |a| ==> a[j] <= a[k]
}

lemma sortedSeqSubsequenceSorted(a:seq<int>, min:int, max:int)
requires 0<= min <= max <= |a|
requires sortedSeq(a)
ensures sortedSeq(a[min .. max])
{ }

method swap(a: array<int>, i:int, j:int)
modifies a;
requires 0 <= i < j < a.Length
requires i + 1 == j
ensures a[..i] == old(a[..i])
ensures a[j+1..] == old(a[j+1..])
ensures a[j] == old(a[i])
ensures a[i] == old(a[j])
ensures multiset(a[..]) == multiset(old(a[..]))
{
   var tmp := a[i];
   a[i] := a[j];
   a[j] := tmp;  
} 

// Transition System
method TransitionSystem(initState: StateSpace) returns (terminalState: StateSpace)
modifies initState.arr;
// pre conditions
requires initState.arr.Length > 0;
requires initState.i == 1
requires initState.j == 0
// post conditions
ensures sorted(terminalState.arr, 0, terminalState.arr.Length);
ensures multiset(terminalState.arr[..]) == multiset(initState.arr[..]); 
{
	var arr := initState.arr;
	var i := initState.i;
	var j := initState.j;

	while(i < arr.Length)
	// loop invariance
	invariant 0 <= i <= arr.Length
	invariant j == i - 1
	invariant sorted(arr, 0, i) 
	invariant multiset(old(arr[..])) == multiset(arr[..])
	decreases arr.Length - i
  	{
		var key := arr[i];

		ghost var arr' := arr[..];
		assert sortedSeq(arr'[0..i]);
		while(j >= 0 && key < arr[j])
		// loop invariance
		invariant -1 <= j <= i - 1
		invariant arr[0 .. j+1] == arr'[0 .. j+1]
		invariant sorted(arr, 0, j+1);
		invariant arr[j+1] == key == arr'[i];
		invariant arr[j+2 .. i+1] == arr'[j+1 .. i]
		invariant sorted(arr, j+2, i+1); 
		invariant multiset(old(arr[..])) == multiset(arr[..])
		invariant forall k :: j+1 < k <= i ==> key < arr[k]  
		decreases j                                   
		{
			ghost var arr'' := arr[..];
			swap(arr, j, j+1);
			assert arr[0..j] == arr''[0..j];
			assert arr[0..j] == arr'[0..j];
			assert arr[j] == arr''[j+1] == arr'[i] == key;
			assert arr[j+2..] == arr''[j+2..];
			assert arr[j+2..i+1] == arr''[j+2..i+1] == arr'[j+1..i];

			j := j - 1;

			sortedSeqSubsequenceSorted(arr'[0..i], j+1, i);
			assert sortedSeq(arr'[j+1..i]);
			assert arr[j+2 .. i+1] == arr'[j+1 .. i];
			assert sortedSeq(arr[j+2..i+1]);
		}
		i := i + 1;
		j := i - 1; 
  	}
  	terminalState := StateSpace(arr, i, j);
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
	assert multiset(arr[..]) == multiset(output[..]);
	assert sorted(output, 0, output.Length);
	var i: int := 0;
	while i < n
	decreases n - i
	{
		print output[i], " ";
		i := i + 1;
	}
	print "\n";
}