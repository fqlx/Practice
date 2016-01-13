n = int(raw_input())
for i in range(n):
	(a, b, N) = map(int, raw_input().split(' '))
	sum = a
	sum_arr = []
	for j in range(N):
		sum += 2**j * b
		sum_arr.append(sum)
	print ' '.join(map(str, sum_arr))