n=int(input("enter the number :"))
s=n
sum=2
for i in range(n):
    sum+=s
    s=s*10+s
print("sum of series is:",sum)
for i in range(6):
    for j in range(i):
        print("*",end=" ")
    print("\n")
for i in range(6):
    for j in range(5-i+1):
        print("*",end=" ")
    print("\n")
