#集合的運算
s1 = {1,2,3,4,5}
print(10 in s1)
print(10 not in s1)
print(1 in s1)
print()

print("Intersection")
s2 = {2,3,5,6,7}
s3 = s1 & s2
print(s3)
print()

print("Union")
s3 = s1 | s2
print(s3)
print()

print("Relative complement")
s3 = s1 - s2
print(s3)
print()

print("Disjoint Set(反交集)")
s3 = s1 ^ s2
print(s3)
print()

s = set("Hello") #divide every characteristic into element
print(s)

#字典的運算
dic = {"apple":"蘋果","bug":"蟲"}
print(dic)
print(dic["apple"])
print("apple" in dic)
print("blue" in dic)
print()

del dic["apple"] #刪除apple鍵值對(key-value pair)
print(dic)
print()

print("Forge dictionary from list")
dic = {x:x*2 for x in [1,2,3,4,5]}
print(dic)