START {
	num_inc = 0
}

NR == 1 {
	before = $1
}

NR > 1  {
	diff = $1 - before;
	before = $1;
	if ( diff > 0) num_inc++;
}

END {
	print num_inc;
}
