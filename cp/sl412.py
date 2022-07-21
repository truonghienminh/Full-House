import math
n = int(input())
MOD =  1000000007
ans = ((1+math.sqrt(5))**n - (1-math.sqrt(5))**n)/(2**n*math.sqrt(5))
print(ans)