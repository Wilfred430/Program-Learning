table = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}

# 羅馬數字轉阿拉伯數字
def roman_int(n):
    roman = [i for i in n]
    r = roman[::-1]
    output = table[r[0]]
    for i in range(1, len(r)):
        if table[r[i]] < table[r[i-1]]:
            output = output - table[r[i]]
        else:
            output = output + table[r[i]]
    return output

while True:
    try:
        C1 = 0
        C2 = 0
        val = input().split(' ')
        
        if val[0] == '#':
            break
        
        C1 = roman_int(val[0])
        C2 = roman_int(val[1])

        Gap = abs(C1 - C2)
        if C1 == C2:
            print("ZERO")
            continue
        
        while Gap > 0:
            if Gap >= 1000:
                print("M", end="")
                Gap -= 1000
            elif Gap >= 900:
                print("CM", end="")
                Gap -= 900
            elif Gap >= 500:
                print("D", end="")
                Gap -= 500
            elif Gap >= 400:
                print("CD", end="")
                Gap -= 400
            elif Gap >= 100:
                print("C", end="")
                Gap -= 100
            elif Gap >= 90:
                print("XC", end="")
                Gap -= 90
            elif Gap >= 50:
                print("L", end="")
                Gap -= 50
            elif Gap >= 40:
                print("XL", end="")
                Gap -= 40
            elif Gap >= 10:
                print("X", end="")
                Gap -= 10
            elif Gap >= 9:
                print("IX", end="")
                Gap -= 9
            elif Gap >= 5:
                print("V", end="")
                Gap -= 5
            elif Gap >= 4:
                print("IV", end="")
                Gap -= 4
            elif Gap >= 1:
                print("I", end="")
                Gap -= 1
        
        print()  # To ensure we print a newline at the end of each iteration
    
    except EOFError:
        break
