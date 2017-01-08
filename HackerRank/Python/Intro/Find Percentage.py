import fileinput

lines = fileinput.input()

grades = dict()

N = int(lines[0])
for i in range(1, N+1):
    line = lines[i].split(" ")
    name = line.pop(0)
    grades[name] = grades.get(i, []) + list(map(float, line))

marks = grades[lines[N+1]]

print("{0:.2f}".format(sum(marks)/len(marks)))