// Input Space
datatype InputSpace = InputSpace(n: int)

// State Space
datatype StateSpace = StateSpace(n: int, a: int)

// rho function
function method rho(tup:InputSpace): StateSpace
{
	StateSpace(tup.n, 0)
}

// view function h
function method pi(trip:StateSpace): int
{
	(trip.a)
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
method TransitionSystem(input: StateSpace) returns (output:StateSpace)
// pre conditions
requires input.n >= 0
requires input.a == 0
// post conditions
ensures output.n == input.n
ensures output.a == fibo(output.n)
decreases input.n
{
	var n := input.n;
	var a := input.a;

	if(n == 0)
	{
		a := 0;
	}
	else if(n == 1)
	{
		a := 1;
	}
	else{
		var fibo1 := StateSpace(n - 1, 0);
		fibo1 := TransitionSystem(fibo1);
		var fibo2 := StateSpace(n - 2, 0);
		fibo2 := TransitionSystem(fibo2);
		a := fibo1.a + fibo2.a;
	}
	output := StateSpace(n, a);
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