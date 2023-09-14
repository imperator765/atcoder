N = int(input())
s = []
for i in range(N+1):
    for j in range(1,11):
        if j == 10:
          s.append("-")
          break
        if N % j == 0:
            if i % (N/j) == 0:
                s.append(str(j))
                break
b="".join(s)
print(b)