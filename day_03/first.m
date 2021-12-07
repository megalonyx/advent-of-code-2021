# reading in (this is quite hard because the file format is not directly
# supported by Octave)
fid = fopen("first.data", "r")
a = textscan(fid, "%c")
b = a{1,1}
b(numel(b)) = []	# remove extraneous element at end
ncols = 12
nrows = numel(b) / ncols
c = cell2mat(b)
d = reshape(c, ncols, nrows)
e = d'
getbin = @(x) x - 48;   # ascii code "0": 48; "1": 49
f = getbin(e)

# first part:
gamma_vector = sum(f) > nrows/2   # just add the 1s
epsilon_vector = sum(f) < nrows/2
binary_converter = pow2(ncols-1:-1:0)
gamma = sum(gamma_vector .* binary_converter)
epsilon = sum(epsilon_vector .* binary_converter)
result = gamma * epsilon


