i = input
for _ in range(int(i())):
    print(*[x.title() for x in i().split() if x != '']) 