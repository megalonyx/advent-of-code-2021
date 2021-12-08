echo off all
diary off
# reading in (this is quite hard because the file format is not directly
# supported by Octave)
fid = fopen("first.data", "r");
a = textscan(fid, "%c");
b = a{1,1};
b(numel(b)) = [];	# remove extraneous element at end
ncols = 12;
nrows = numel(b) / ncols;
c = cell2mat(b);
d = reshape(c, ncols, nrows);
e = d';
getbin = @(x) x - 48;   # ascii code "0": 48; "1": 49
f = getbin(e);

# second part:
binary_converter = pow2(ncols-1:-1:0);

g = f;
flag = 0;
for c = 1:ncols;
    this_col = sum(g(:, c));
    most_common = this_col >= rows(g)/2;
    for r = rows(g):-1:1;
	if(g(r,c) != most_common);
	    g(r,:) = [];
	endif;
	if (rows(g) == 1);
	    flag = 1;
	    break;;
	endif;
    endfor;
    if (flag == 1);
        break;;
    endif;
endfor;
g;
oxygen = sum(g .* binary_converter);


g = f;
flag = 0;
for c = 1:ncols;
    this_col = sum(g(:, c));
    least_common = this_col < rows(g)/2;
    for r = rows(g):-1:1;
	if(g(r,c) != least_common);
	    g(r,:) = [];
	endif;
	rows(g);
	if (rows(g) == 1);
	    flag = 1;
	    break;;
	endif;
    endfor;
    if (flag == 1);
	break;;
    endif;
endfor;
g;
co2 = sum(g .* binary_converter);
;
result = oxygen * co2

#gamma_vector = sum(f) > nrows/2;   # just add the 1s
#epsilon_vector = sum(f) < nrows/2;
#gamma = sum(gamma_vector .* binary_converter);
#epsilon = sum(epsilon_vector .* binary_converter);
#result = gamma * epsilon;


