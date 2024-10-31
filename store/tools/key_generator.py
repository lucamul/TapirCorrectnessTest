import random
import sys

for i in range(int(sys.argv[1])):
    # Generate a random 64-bit integer
    rkey = random.randint(0, 2**24 - 1)
    print(rkey)