@primes = (2..2000000);

for($i = 0; $i < 2000000; $i++)
{
	$primes[i] = 1;
}

for($i = 2; $i * $i <= 2000000; $i++)
{
	if($primes[$i])
	{
		for($j = $i; $j * $i < 2000000; $j++)
		{
			$primes[$i * $j] = 0;
		}
	}
}
for($i = 2; $i < 2000000; $i++)
{
	if($primes[$i])
	{
		push @p, $i;
		$sum += $i;
	}
}

print $p[0];
print "\n";
print $p[-1];
print "\n";
print $sum;
