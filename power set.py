# python3 program for power set

import math;

def printPowerSet(set,set_size):
	

	pow_set_size = (int) (math.pow(2, set_size));
	counter = 0;
	j = 0;

	for counter in range(0, pow_set_size):
		for j in range(0, set_size):
			
			# Check if jth bit in the
			# counter is set If set then
			# print jth element from set
			if((counter & (1 << j)) > 0):
				print(set[j], end = "");
		print("");

set = ['a', 'b', 'c'];
printPowerSet(set, 3);

