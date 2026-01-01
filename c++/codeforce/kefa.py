from sympy import true


n=int(input())
a=list(map(int,input().split()))
# print(type(a))
b=list()
c=0
for i in range(len(a)):
    if(i!=len(a) and a[i]<a[i+1] and c==0 ):
        b.append(a[i])
        c=1
    if(a[i]<a[i+1]):
        c=0
print(b)
print(len(b))
    