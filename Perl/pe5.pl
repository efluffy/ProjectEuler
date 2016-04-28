START:
$j++;
for $i (1..20)
{
	if($j % $i != 0)
	{
		goto START;
	}
}

print $j;
