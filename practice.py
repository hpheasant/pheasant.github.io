food = {}
food['fries']= 'starch'
food['yucca']= 'starch'
food['broccoli']= 'vegetable'
food['carrot']= 'vegetable'
food['blueberry']= 'fruit'
print(food)

#put dictionary in ascending order. First convert to list
list = list(food.items())
list.sort()
print(list)

#turn list back into dictionary
dict=dict(food)

#put dict in descending order
list.sort(reverse=True)
print(list)

dic1={1:10, 2:20}
dic2={3:30, 4:40}
dic3={5:50,6:60}
dic4 = {}
for loop in (dic1, dic2, dic3):
	dic4.update(loop)
	print(dic4)
#iterate over dictionaries using for loops 
for loop, loops in food.items():
	print(loop, ":", loops)

number = {}
for loop in range(1,6):
	number[loop]=loop**2
	print(number)

d1 = {}
d1['a']=100
d1['b']=200

d2 = {}
d2['c']=300
d2['d']=400
print(d2)

d3 = d1.copy()
d3.update(d2)
print(d3)
#Write a Python program to iterate over dictionaries using for loops.
for x, y in d1.items():
	print(x, y)

print(sum(d1.values()))
#Multiply all the items in a dictionary
result=1
for key in d1:
	result=result*d1[key]
	print(result)
	


