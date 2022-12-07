import turtle as t
t.setup(600,480)
t.screensize(600,480)
t.title("Mouse Click Game")
t.ht()
t.ht()
t.penup()
t.seth(0)
def lines():
    t.pensize(3)
    for i in range(2):
        t.goto(-100 + i * 200, -240)
        t.pendown()
        t.togo(-100 + i * 200, 240)
        t.penup()
    t.pensize(1)
colors = ["red", "blue", "magenta"]
def clickdraw(x,y):
    t.goto(x,y)
    t.pendown()
    t.begin_fill()
    if x < -100:
        t.color(colors[0])
        t.circle(10, steps = 4)
    if -100 < x < 100:
        t.color(colors[1])
        t.circle(10)
    if x > 100:
        t.color(colors[2])
        t.circle(10, steps = 3)
    t.end_fill()
    t.penup()
#
lines()
t.onscreenclick(clickdraw)
t.mainloop()