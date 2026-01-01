import turtle as t
col=input("Enter the colour of star:")
t.fillcolor(col)
t.begin_fill()
for i in range(5):
    t.right(144)
    t.forward(100)
t.end_fill()
