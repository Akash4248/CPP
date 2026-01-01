t=int(input())
for i in range(t):
    n,m=map(int,input().split())
    x=input()
    s=input()
    mi=-1
    count=0
    while 1:
        x=x+x
        
        if s in x:
            mi=count+1
            break
        elif(count==20):
            break
        count+=1
    print(mi)

        
