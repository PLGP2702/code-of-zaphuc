def fullstrip(s):
    s = s.strip()
    while s:
        s = s.replace(" "," ")
    return s
print(fullstrip("Ha noi  thu do cua Viet  Nam"))
        