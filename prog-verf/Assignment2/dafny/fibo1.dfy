// Input Space
datatype InputSpace = InputSpace(n: int)

// State Space
datatype StateSpace = StateSpace(n: int, a: int, b: int)

// rho function
function method rho(tup:InputSpace): StateSpace
{
	StateSpace(tup.n, 0, 0)
}

// view function h
function method pi(trip:StateSpace): int
{
	(trip.b)
}

// test function
function fibo(n: int): int
requires n >= 0
decreases n
{
	if n == 0 then 0 
	else if n == 1 then 1 
	else fibo(n - 1) + fibo(n - 2)
}

// Transition System
method TransitionSystem(initState: StateSpace) returns (terminalState:StateSpace)
// pre conditions
requires initState.n >= 0
requires initState.a == 0
requires initState.b == 0
// post conditions
ensures terminalState.n == initState.n
ensures terminalState.a == terminalState.n
ensures terminalState.b == fibo(terminalState.n)
{
	var n := initState.n;
	var a := initState.a;
	var b := initState.b;

	var nxt: int := 1;
	while a < n
		// loop invariance
		invariant 0 <= a <= n
		invariant b == fibo(a)
		invariant nxt == fibo(a + 1)
		decreases n - a
	{
		var cur := nxt;
		nxt := nxt + b;
		b := cur;
		a := a + 1;
	}
	terminalState := StateSpace(n, a, b);
}

method Main()
{
	var input := InputSpace(3);
	var initState := rho(input);
	var terminalState := TransitionSystem(initState);
	var output := pi(terminalState);
	print output, "\n";
}