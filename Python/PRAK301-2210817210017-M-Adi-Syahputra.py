n1,n2,n3=(input()).split()

n1=int(n1)
n2=int(n2)
n3=int(n3)

if (n1>n2&n2>n3):print("{0} {1} {2}".format(n3,n2,n1))
elif (n1>n3&n3>n2):print("{0} {1} {2}".format(n2,n3,n1))
elif (n2>n1&n1>n3):print("{0} {1} {2}".format(n3,n1,n2))
elif (n2>n3&n3>n1):print("{0} {1} {2}".format(n1,n3,n2))
elif (n3>n1&n1>n2):print("{0} {1} {2}".format(n2,n1,n3))
else : print("{0} {1} {2}".format(n3,n2,n1))
