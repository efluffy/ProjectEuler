for $i (1..100)
{
	$sumSq += $i*$i;
}

for $i (1..100)
{
	$sqSum += $i;
}
$sqSum = $sqSum * $sqSum;

$diff = $sqSum - $sumSq;

print $diff;