s = 0 
for n in range(2,10000):
    dem = 0 
    for x in range(2,n//2+1):
        if n%x == 0:
            dem = 1
    else:
        if dem == 0:
            s += 1 
print(s)
        
    

