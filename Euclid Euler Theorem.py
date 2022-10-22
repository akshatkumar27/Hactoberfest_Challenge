# Python3 code to verify Euclid Euler Theorem
#define show(x) cout << #x << " = " << x << "\n";
def isprime(n):
	i = 2

	# check whether a number is prime or not
	while(i * i <= n):
		if (n % i == 0):
			return False;
		i += 1
	return False;

def isperfect(n): # perfect numbers

	# check is n is perfect sum of divisors
	# except the number itself = number
	s = -n;
	i =1
	while(i * i <= n):

		# is i is a divisor of n
		if (n % i == 0):
			factor1 = i
			factor2 = n // i;
			s += factor1 + factor2;

			# here i*i == n
			if (factor1 == factor2):
				s -= i;
		i += 1
	return (n == s);

# Driver code
if __name__=='__main__':

	# storing powers of 2 to access in O(1) time
	power2 = [1<<i for i in range(61)]

	# generation of first few numbers
	# satisfying Euclid Euler's theorem
	print("Generating first few numbers satisfying Euclid Euler's theorem");
	for i in range(2, 26):
		no = (power2[i] - 1) * (power2[i - 1]);
		if (isperfect(no) and (no % 2 == 0)):
			print("(2^{} - 1) * (2^({} - 1)) = {}".format(i, i, no))
	
