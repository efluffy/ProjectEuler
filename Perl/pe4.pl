for($i = 100; $i <= 999; $i++)
{
	for($j = 100; $j <= 999; $j++)
	{
		$test = $i * $j;
		if($test == scalar reverse $test)
		{
			if($test > $palin)
			{
				$palin = $test;
			}
		}
	}
}
print $palin;