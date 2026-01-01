#create a file and addinig data to it
data = ''' line1 line2 line3 hi i am akash and now i am testing this python programme and jeevan
is talking to someone and also i am learining this language and c language and i am learning
english .'''
file=open('myfile.txt','w')
file.write(data)
file. close()
file=open('myfile.txt','r')
d=file.read()
file.close()
print("content is:",d)
#input any 3 string from  one input funtion
#s,s1,s2=input("enter the string :").split()
#print("entered string are :",s,s1,s2)
#format variables using string .format() method
n,c,v=map(int,input("enter 3 numbers:").split())
print(f" i have {n} dollars so i can buy {c} football for {v} dollars.")
#check the file emprty or not
file=open('myfile.txt','r')
print(file)
if (file==0):
    print("file is empty")
