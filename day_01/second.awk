START {
	num_inc = 0
}

NR == 1 {
	threeback = $1
}
NR == 2 {
	twoback = $1
}
NR == 3 {
	oneback = $1
}

NR > 3  {
	previous = threeback + twoback + oneback;
	this = twoback + oneback + $1;
	diff = this - previous;
	if ( diff > 0) num_inc++;
	threeback = twoback;
	twoback = oneback;
	oneback = $1;
}

END {
	print num_inc;
}
