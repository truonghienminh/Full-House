mod = int(1e9) + 7

def fast_pow(a, b):
    if b == 1:
        return a
    x = fast_pow(a, b // 2) ** 2 % mod
    if b & 1:
        return x * a % mod
    return x % mod

a, b = map(int, input().split())
print(fast_pow(a, b))