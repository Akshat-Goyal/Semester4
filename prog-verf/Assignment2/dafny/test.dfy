method Abs ( x : int ) returns ( y: int )
ensures y >= 0
ensures ( x < 0 && y == -1 * x ) || ( y == x )
{
y := x ;
if ( y < 0) { y := y * -1; }
}