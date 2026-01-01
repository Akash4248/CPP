#first 10000 rate=0
#next 10000 rate=10 the remaining rate=20
n=int(input("enter the taxable income:"))
t=0
if (n<=10000):
    print("tax =",t)
elif(n<=20000):
    t=10000*(10/100)
    print("tax =",t)
elif(n>20000):
    t=10000*(10/100)+(n-20000)*(20/100)
    print("tax =",t)
