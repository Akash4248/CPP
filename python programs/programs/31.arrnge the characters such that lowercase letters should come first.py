#given string coontains a combination of the lower case letters .write a program to attange the characters of a string so that all loweercase letters should come first
s1=input("enter a string:")
upper=''
lower=''
for i in range(len(s1)):
    if s1[i].isupper():
        upper=upper+s1[i]
    else:
        lower+=s1[i]
result=lower+upper
print(str(result))
#count all letters ,digits and special symbols from a given string
s1=input("enter a string :")
char=0
digits=0
symbol=0
for i in range(len(s1)):
    if s1[i].isalpha():
        char+=1
    elif s1[i].isdigit():
        digits+=1
    else:
        symbol+=1
print("characters:",char,'\ndigits:',digits,'\nsymbol:',symbol)
