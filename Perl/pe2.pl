$x = 0;
$y = 1;
foo:
while(1)
{
	$fibb = $x + $y;
	if($fibb > 4000000)
	{
		last foo;
	}
	elsif($fibb % 2 == 0)
	{
		$sum += $fibb;
	}
	$x = $y;
	$y = $fibb;
}
print $sum;
	
	