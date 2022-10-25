s=int(input("Input waktu dalam detik : "))
d=s//(24*3600)
s=s%(24*3600)
h=s//3600
s%=3600
m=s//60
s%=60
sec=s
print("%d hari %d:%d:%d" % (d,h,m,sec))