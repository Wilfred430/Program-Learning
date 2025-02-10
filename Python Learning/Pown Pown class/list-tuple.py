#有序可變動的列表List
grades = [12,3,6,99,8,7]
print(grades)
print(grades[3])

grades[0] = 11 #change value
print(grades)
print(grades[1:4]) #print 1~3

print("Eliminate elements")
grades[1:3] = [] #eliminate 1~2 elements
print(grades)

print("Something like push_back")
grades = grades + [12,9]
print(grades)

print(len(grades)) #data length

print("Nest List")
data = [[1,2,3],[4,5],[6]]
print(data[2][0])

print("Funny change")
data[0][0:1] = [0,1]
print(data[0])
#有序不可動的列表tuple
Data = (1,2,3,4,5)
Data[0] = 5 #ERROR!!
print(Data)