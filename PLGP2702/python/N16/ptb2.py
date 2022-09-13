import math

a, b, c = map(float, input().split())
delta = float(b*b-a*c*4)
if a != 0:
    if delta < 0:
        print("phuong trinh vo nghiem")
    elif delta == 0:
        x1 = -b/(2*a)
        print("phuong trinh co nghiem kep: %.4f" % x1)
    else:
        x1 = (-b+math.sqrt(delta))/(2*a)
        x2 = (-b-math.sqrt(delta))/(2*a)
        print('%.4f' % x1)
        print('%.4f' % x2)