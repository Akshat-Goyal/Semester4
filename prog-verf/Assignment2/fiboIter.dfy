// Input Space
datatype InputSpace = InputSpace(n: int)

// State Space
datatype StateSpace = StateSpace(n: int, a: int, b: int, c: int)

// rho function
function method rho(tup:InputSpace): StateSpace
{
	StateSpace(tup.n, 0, 0, 1)
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
requires initState.c == 1
// post conditions
ensures terminalState.n == initState.n
ensures terminalState.a == terminalState.n
ensures terminalState.b == fibo(terminalState.n)
ensures terminalState.c == fibo(terminalState.n + 1)
{
	var n := initState.n;
	var a := initState.a;
	var b := initState.b;
	var c := initState.c;

	while a < n
		// loop invariance
		invariant 0 <= a <= n
		invariant b == fibo(a)
		invariant c == fibo(a + 1)
		decreases n - a
	{
		var cur := c;
		c := b + c;
		b := cur;
		a := a + 1;
	}
	terminalState := StateSpace(n, a, b, c);
}

method Main()
{
	var input := InputSpace(4);
	var initState := rho(input);
	var terminalState := TransitionSystem(initState);
	var output := pi(terminalState);
	assert output == 3;
	print output, "\n";
}