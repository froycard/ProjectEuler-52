i=100000
while(True):
    i+=1
    tmp=sorted(str(i))
    if tmp != sorted(str(2*i)): continue
    if tmp != sorted(str(3*i)): continue
    if tmp != sorted(str(4*i)): continue
    if tmp != sorted(str(5*i)): continue
    if tmp != sorted(str(6*i)): continue
    print("Sol.: ",i)
    break;
