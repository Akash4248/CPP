#fibonacci series
n=int(input("enter the range:"))
l=[0,1]
for i in range(n):
    l.append(l[i]+l[i+1])
s=[l[i]/l[i-1] for i in range(2,len(l))]
print("series is:",s)
#to find factorial of a given number
n=int(input("enter the number:"))
s=n
for i in range(n):
    fact=s*i
print("factorial of ",n,"is",fact)
