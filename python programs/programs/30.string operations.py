#crreate astring made of first,middle and last character
n=input("enter a string:")
l=len(n)
p=int(l/2)
s=n[0]+n[p]+n[l-1]
print(s)
#create a string made of the middle three characters
c=n[p-1:p+2]
print(c)
#append new string in the middle of a given string
s1,s2=input("enter two strings:").split()
mi=int(len(s1)/2)
x=s1[:mi:]
x=x+s2
x=x+s1[mi:]
print("result string is :",x)
#create a new string made of the first ,middle and last characters of each input string
s1,s2=input("enter two strings:").split()
f1=s1[0]
f2=s2[0]
mi1=int(len(s1)/2)
mi2=int(len(s2)/2)
m1=s1[mi1]
m2=s2[mi2]
l1=s1[len(s1)-1]
l2=s2[len(s2)-1]
r=f1+f2+m1+m2+l1+l2
print("result string is:",r)
##create a mixed string using the following rules
#given two strings s1 and s2 write a program to create a
#new string s3 made of the first char of s1 then the lst
#char of s2 next the second char of s1 and second last
#char of s2 and so on any leftover chars go at the end of the result
s1,s2=input("enter two strings:").split()
s3=s1[0]
for i in range(1,len(s1)):
    s3+=(s1[i]+s2[-i])
print(s3)
