t=int(input())
while t:
    n=int(input())
    flag=False
    count=0
    a=list(map(int,input().split()))
    for i in range(1,n):
        if i in a:
            flag=True
            break
   
    if flag or n==1:
        print("NO")

    else:
        print("YES")

        


