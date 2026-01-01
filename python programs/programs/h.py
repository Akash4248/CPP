if __name__ == '__main__':
    N = int(input())
    l=[]
    temp=[]
    while(N>0):
        c=input()
        s=c.split()
        
        for i in range(len(s)):
            if(s[i]=='insert'):
                k=int(s[i+1])
                m=int(s[i+2])
                l.insert(k,m)
            elif(s[i]=='append'):
                
                l.append(int(s[i+1]))
            elif(s[i]=='remove'):
                
                l.remove(int(s[i+1]))
            elif(s[i]=='print'):
                print(l)
            elif(s[i]=='sort'):
                l.sort()
            elif(s[i]=='pop'):
                l.pop(len(l)-1)
            elif(s[i]=='reverse'):
                l.sort(reverse="True")
        N-=1
