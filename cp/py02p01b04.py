a,b,c = map(int, input().split(" "))

if a+b>c and b+c>a and c+a>b:
    if (a == b and a == c):
    	print(1)
    elif (a == b or b == c or a == c):
    	print(2)
    elif (a*a == b*b + c*c or b*b == a*a + c*c or c*c == a*a + b*b):
    	print(3)
    else :
    	print(4)
else:
    print("INVALID")