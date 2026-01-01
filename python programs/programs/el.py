#from email.mime import image
from tkinter import *
from tkinter import PhotoImage
import re
from tkinter.messagebox import showinfo
root=Tk()
def p():
    user_input=entry.get()
    regex = re.compile('[@_!#$%^&*()<>?/\|}{~:]')
    if (regex.search(user_input) != None)or(re.findall(r'\d+',user_input)):
        showinfo("ERROR!!!!", f"String should not carry special characters and numbers!.")
    else:
        length=len(user_input.split())
        result_label.config(text=f"Number of words: {length}", fg="orange")
    #search the word:

def q():
    user_input = entry.get()
    search_data = s.get()
    regex = re.compile('[@_!#$%^&*()<>?/\|}{~:]')
    if (regex.search(user_input) != None) or (re.findall(r'\d+', user_input)):
        showinfo("ERROR!!!!", f"String should not carry special characters and numbers!.")
    #search_data=s.get()
    elif (regex.search(search_data) != None)or(re.findall(r'\d+',search_data)):
        showinfo("ERROR!!!!", f"String should not carry special characters and numbers!.")
    elif result!=-1:
        search_result_label.config(text=f"word '{search_data}' found in string",fg="white")
    else:
        search_result_label.config(text=f"word '{search_data}' is not found in string",fg="red")
#for frequency of word
def r():
    user_input = entry.get()
    regex = re.compile('[@_!#$%^&*()<>?/\|}{~:]')
    # Pass the string in search
    # method of regex object.
    if (regex.search(user_input) != None)or(re.findall(r'\d+', user_input)):
        showinfo("ERROR!!!!", f"String should not carry special characters and numbers!.")
    else:
        newwindow=Toplevel(root)
        newwindow.title("frequency of words")
        newwindow.geometry("456x657")
        result_label_freq = Label(newwindow, text="", bg="light grey", font=("Arial", 20, "bold"))
        result_label_freq.grid(column=5, row=0)
        user_input =entry.get()
        words=user_input.split()
        fr={}
        for i in words:
            if i in fr:
                fr[i]=fr[i]+1
            else:
                fr[i]=1
            result_label_freq.config(text="frequency of words:", fg="green", font=("Arial"))
        for char,freq in fr.items():
            result_label_freq.config(text=result_label_freq.cget("text")+f"\n'{char}': {freq}")

def open_second_window():

    second_window = Toplevel(root)
    second_window.title("ENTERED STRING IS....")
    second_window.geometry("500x600")
    t=entry.get()
    label = Label(second_window, text=t,fg="blue",font=("Arial",32,"bold"))
    label.pack(pady=20)

#



root.configure(bg="light grey")
root.title("COUNTING NUMBER OF WORDS, AND FRIQUENCY OF WORDS APPEARING,AND SEARCH FOR THE SPECIFIC WORDS")
root.geometry("1677x976")
problem_label=Label(root,text="COUNTING NUMBER OF WORDS, AND FRIQUENCY OF WORDS APPEARING,AND SEARCH FOR THE SPECIFIC WORDS",font=("Arial",15,"bold")).grid(row=0,column=1)

label=Label(root,text="ENTER A STRING:",fg="black", font=("Algerian", 18),bg="orange").grid(row=1,column=0)

entry=(Entry(root,width=40,bg="white",font=("Arial",20,"bold")))
entry.grid(row=1,column=1,pady=10)



search_label=Label(root,text="ENTER A SUB STRING  TO SEARCH: ", font=("Copperplate Gothic Bold", 12),fg="red",bg='blue').grid(row=2,column=0)

s=(Entry(root,width=25,font=("Arial",20,"bold"),bg="white"))
s.grid(row=2,column=1,pady=10,padx=10)

numberbutton=Button(root,text=" check  how many words are there",font=("chiller",20,"bold"),command=p,bg="white").grid(row=3,column=1,pady=15)

searchbutton=Button(root,text="click here to search the words",font=("Snap ITC",20,"bold"),command=q,bg="yellow").grid(row=4,column=1,pady=5)

freqchbutton=Button(root,text="click here to check frequency of words",font=("chiller",20,"bold"),command=r,bg="yellow").grid(row=5,column=1,pady=5)

button=Button(root,text="display",command=open_second_window,font=("Arial",22,"bold")).grid(row=6,column=1,pady=5)

exitbutton=Button(root,text="exit",font=("Arial",20,"bold"),command=quit).grid(row=7,column=1,pady=5)

#name=Label(text="Akash",font=("Wide Latin",34)).grid(row=4,column=19,padx=1)

#name1=Label(text="Jeevan",font=("Wide Latin",34)).grid(row=3,column=19,padx=5)

result_label=Label(root,text="",bg="light grey",font=("Arial",20,"bold"))
result_label.grid(row=8,column=1,pady=5)

search_result_label=Label(root,text="",bg="light grey",font=("Arial",20,"bold"))
search_result_label.grid(row=9,column=1,pady=5)
# logo=PhotoImage(file="C:\\Users\Abhi S M\\akash\i.png")
# logo_label = Label(root, image=logo, bg="light grey").grid(row=3)



root.mainloop()