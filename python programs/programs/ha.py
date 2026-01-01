import turtle as t
##turtle.forward(110)
##turtle.left(110)
##
##turtle.right(90)
##
t.color("blue")
t.forward(100)
t.color("red")
t.right(90)
t.backward(100)
t.color("green")
t.right(90)
t.forward(100)
t.color("black")
t.left(90)
t.forward(100)
t.left(90)
n=0
x=25
while n>0:
   t.circle(x,extent=180,steps=None)
   t.left(180)
   t.circle(x,extent=180,steps=None)
   t.left(90)
   t.circle(x,extent=180,steps=None)
   t.left(180)
   t.circle(x,extent=180,steps=None)
   t.left(90)
   t.circle(x,extent=180,steps=None)
   t.left(180)
   t.circle(x,extent=180,steps=None)
   t.left(90)
   t.circle(x,extent=180,steps=None)
   t.left(180)
   t.circle(x,extent=180,steps=None)
   t.left(90)
   x-=2
   n-=1
t.circle(80)
t.circle(80,steps=4)
t.up()
t.fillcolor("red")












   
