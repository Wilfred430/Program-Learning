dic = {"A":int(1),"B":int(10),"C":int(19),"D":int(28),"E":int(37),"F":int(46),"G":int(55),"H":int(64),"I":int(39),"J":int(73),"K":int(82),"L":int(2),"M":int(11),"N":int(20),"O":int(48),"P":int(29),"Q":int(38),"R":int(47),"S":int(56),"T":int(65),"U":int(74),"V":int(83),"W":int(21),"X":int(3),"Y":int(12),"Z":int(30)}

while True:
    try:
        S = input()
        sum =  dic[S[0]]
        for i in range(1,9):
            sum += int(S[i]) * int(9-int(i))
        sum += int(S[9])
        if sum % 10 == 0:
            print("real")
        else:
            print("fake")
    except EOFError:
        break
    

    