x = int(input())
ans = 0
for i in range(1, x + 1):
    ans = ans + 1/(i*(i+1))
print(ans)
