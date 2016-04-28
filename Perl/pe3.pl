$num = 600851475143;

$max = int(sqrt($num));

for ($i = 3; $i <= $max; $i += 2)
{
	if($num % $i == 0)
	{
		push(@factors, $i);
	}
}

foreach $factor (@factors)
{
	for $p (2..($factor - 1))
	{
		if($factor % $p == 0)
		{
			splice(@factors, $c);
		}
	}
	$c++;
}
print $factors[-1];
		