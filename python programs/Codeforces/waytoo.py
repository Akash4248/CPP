n=int(input())
for i in range(n):
    s=input()
    l=len(s)
    if(l>10):
        b=l-2
        a=s[0]+str(b)+s[l-1]
        print(a)
    else:
        print(s)

