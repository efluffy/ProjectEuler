sub isPrime
{
	$n = shift;
	for $p (2..($n - 1))
	{
		if($n % $p == 0)
		{
			return 0;
		}
	}
	return 1;
}

loop:
$i++;
if(isPrime($i)) 
{
	push(@primes, $i);
}
$ele = @primes;
if($ele <= 10001)
{
	goto loop;
}
print @primes[-1];