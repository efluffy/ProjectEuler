for $n (2..100)
{
	for $m (1..100)
	{
		$f = ($n * $n) - ($m * $m);
		$s = 2 * $m * $n;
		$t = ($n * $n) + ($m * $m);
		if($f + $s + $t == 1000)
		{
			print $f*$s*$t . "\n";
		}
	}
}