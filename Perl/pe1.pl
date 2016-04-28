$sum = 0;
for $i (1..999)
{
	if($i%3==0)
	{
		$sum += $i;
	}
	elsif($i%5==0)
	{
		$sum += $i;
	}
}
print $sum;