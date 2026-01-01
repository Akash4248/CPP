n,k=map(int,input().split())
while k:
    a=n%10
    if(a>0):
        n=n-1
    else:
        n=n/10
    k=k-1
n=int(n)
print(n)