a,b,c,d = map(float , input().split())
dtb = (a+b+c*2+d*3)/7
if (dtb >= 8):
	print("GIOI")
elif (dtb >= 6.5):
	print("KHA")
elif (dtb >=5):
	print("TRUNG BINH")
else :
	print("YEU")