test_cases = raw_input() #Default input type is string
test_cases = int(test_cases)
while test_cases:
	arg1,arg2  = raw_input().split()
	arg1 = int(arg1)
	arg2 = int(arg2)
	print arg1 + arg2
	test_cases = test_cases - 1