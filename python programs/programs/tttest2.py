import turtle as t
from random import random
t.title('Object-oriented turtle demo')
t.bgcolor("orange")
for i in range(5):
    t.fd(50); t.lt(80)

for i in range(8):
    t.undo()
for i in range(1,200):
    angle=360.0/i
    steps=i/2
    t.right(angle)
    t.fd(steps)

t.mainloop()
