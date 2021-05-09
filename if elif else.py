
#if, elif=if you want to check multiple if statements. 
alien_color ='green'
if alien_color == 'green':
		print('you just earned 5 points')
else:
	print('not green')

alien_color = 'yellow'
if alien_color == 'green':
	print('you just earned 5 points')
else:
	print('not green')

alien_color='green'
if alien_color =='green':
	print('you just earned 5 points')
elif alien_color != 'green':
	print('you just earned 10 points')
else:
	print('red aliens have no point value')

alien_color = 'red'
if alien_color =='green':
	print('you just earned 5 points')
elif alien_color == 'yellow':
	print('you just earned 10 points')
elif alien_color == 'red':
	print('you just earned 15 points')

age = 31
if age < 2:
	print('baby')
elif age > 2 and age < 4:
	print('toddler')
elif age >= 4 and age < 13:
	print('kid')
elif age >= 13 and age < 20:
	print('teen')
elif age >= 20 and age < 65:
	print('adult')
else:
	print('elder')

fruits = ['blueberry', 'strawberry', 'pineapple']
print(fruits)
if 'blueberry' in fruits:
	print("blueberry is in the list")
if 'strawberry' in fruits:
	print('strawberry is there too')
if 'pineapple' in fruits:
	print('pineapple is in list')

