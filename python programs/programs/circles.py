import turtle as t
t.fillcolor("red")
def draw(rad):
    
    t.circle(rad)
    t.up()
    t.setpos(0,-rad)
    t.down()
    
for i in range(5):
    draw(20+20*i)
