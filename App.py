# STRINGS

print ('Hello World')
print('o----')
print(' ||||')
print('#' * 10)


# VARIABLE & PRINT STATEMENT

name = 'John Smith'
age = '20'
is_new = True

print(name)
print(age)
print(is_new)


# FOR WHOLE NUMBER USE "INT"
for_whole_number = int()


# FOR WHOLE & DECIMAL NUMBER USE "FLOAT"
for_whole_and_decimal_number = float()


# INPUT EXAMPLES

name = input('What Is Your Name ? ')
print('Hi ' + name)

cell_no = input('What Is Your Cell No ? ')
print('Thanks')

color = input('What Is Your Favorite Color ? ')
print('Oh Wow, ' + color + ' Is My Favorite Color Too.')

birth_year = int(input('What Is Your Birth Year ? '))
print('Your Age Is', 2021 - birth_year)

# "f'" IS USED TO PUT VARIABLES BETWEEN STRINGS
weight_kgs = int(input('What Is Your Weight In Kgs ? '))
print(f'{weight_kgs * 1000} Grams')

weight_kgs = int(input('What Is Your Weight In Kgs ? '))
print('Your Weight Is', weight_kgs * 1000, 'Grams')

weight_grams = int(input('What Is Your Weight In Grams ? '))
print(f'{weight_grams // 1000} Kgs')

#-----
name = 'Syed Muhammad Tayyab Mehdi Jafri'
print(name[5:13])

name = 'Syed Muhammad Tayyab Mehdi Jafri'
print(name[5:])


# "f'" IS USED TO PUT VARIABLES BETWEEN STRINGS

first = 'Syed M'
last = 'Tayyab'
message = f'{first} {last} Is A Good Developer'
print(message)


# DIFFERENT TYPE OF .FUNCTIONS TO CHANGE VARIABLE

paragraph = 'My Name Is Tayyab'
print(paragraph.upper())

paragraph = 'My Name Is Tayyab'
print(paragraph.lower())

#TITLE CAPITALIZE EVERY WORD OF SENTENCE IN STRING
paragraph = 'My Name Is Tayyab'
print(paragraph.title())

#CAPITALIZE ONLY CAPITALIZE FIRST WORD OF SENTENCE IN STRING
paragraph = 'My Name Is Tayyab'
print(paragraph.capitalize())

paragraph = 'My Name Is Tayyab'
print(paragraph.find('Tayyab'))

paragraph = 'My Name Is Tayyab'
print(paragraph.replace('Tayyab', 'Ali'))

paragraph = 'My Name Is Tayyab'
print('Tayyab' in paragraph)

paragraph = 'My Name Is Tayyab'
print('tayyab' in paragraph)

# "LEN" IS USED FOR LENGTH
name = 'Syed M Tayyab Mehdi Jafri'
print(len(name))


# MATHS FUNCTIONS

print(5 + 5)

print(5 - 5)

print(5 * 5)

print(5 ** 5)

print(5 / 5)

print(5 // 5)

x = 10
y = 10
print(y + x)

x = 10
print( 40 + x )

x = (2 + 3) * 10 - 3
print(x)


# SIMPLE CALCULATOR WITH "INT" "F'" "INPUT" "FLOAT"

num1 = int(input('Enter 1st Number '))
num2 = int(input('Enter 2nd Number '))
print(f'Your Answer Is {num1 + num2}')

num1 = float(input('Enter 1st Number '))
num2 = float(input('Enter 2nd Number '))
print(f'Your Answer Is {num1 + num2}')


# "IF" "ELSE" "ELIF" STATEMENTS

hot = False
cold = True
if hot:
    print('Its A Hot Day')

elif cold:
    print('Its A Cold Day')

else:
    print('Its A Lovely Day')

#-----
price = 1000000
good_credit = True

if good_credit:
    down_payment = 0.1 * price

else:
    down_payment = 0.2 * price

print(f'Down Payment {down_payment}')


# "AND" "OR" STATEMENTS

syed = True
high_income = True
if syed and high_income:
    print('Eligible')

#-----
syed = True
high_income = False
if syed or high_income:
    print('Eligible')

#-----
syed = False
high_income = False
if syed or high_income:
    print('Eligible')


# "IF" "ELSE" "ELIF" "AND" "OR" "IN" "NOT" EXAMPLES

gender = input('Are You Male, Female Or Transgender ? ')

if gender.capitalize() == 'Male':
    print('You Got 10000 Rs')

elif gender.capitalize() in ('Female','Transgender'):
    print('You Got 5000 Rs')

else:
    print('You Got 1000 Rs')

#-----
syed = True
high_income = True

if syed and high_income:
    print('Not Eligible')

elif syed and not high_income:
    print('You Are Eligible')

#-----
name = 'Tayyab'

if len(name) < 3:
    print('Too Short')

elif len(name) > 50:
    print('Too Long')

else:
    print('Name Looks Good')

#-----
weight = float(input('Enter Your Weight: '))
unit = input('Enter The Unit (Kgs) Or (Grams): ').title()

if unit == 'Kgs':
    print(f'Your Weight Is {weight * 1000} Grams')

elif unit == 'Grams':
    print(f'Your Weight Is {weight / 1000} Kgs')

else:
    print('Enter The Right Unit')

#-----
water_available = True
juice_available = True
if water_available and juice_available:
    print('Buy Water & Juice')

elif water_available:
    print('Buy Water Only')

elif juice_available:
    print('Buy Juice Only')

else:
    print('Dont Buy Anything')

#-----
number_1 = 10
number_2 = 20
number_3 = 30

if number_1 > number_2 and number_1 > number_3:
    print('Number 1 Is Big')

elif number_2 > number_1 and number_2 > number_3:
    print('Number 2 is Big')

elif number_3 > number_2 and number_3 > number_1:
    print('Number 3 Is Big')

else:
    print('They All Are Equal')


# "WHILE" LOOP

i = 1

while i <= 5:
    print(i)
    i = i + 1

#-----
s_no = 10
guess_count = 0
guess_limit = 5

while guess_count < guess_limit:
    guess = int(input('Guess: '))
    guess_count = guess_count + 1
    print('Try Again')

    if guess == s_no:
        print('You Won')
        break

else:
    print('You Lose')

#-----
command = ''
started = False


while command != 'Quit':
    command = input('> ').capitalize()
    if command == 'Start':
        if started:
            print('Car Already Started')
        else:
            started = True
            print('Car Started')

    elif command == 'Stop':
        if not started:
            print('Car Already Stopped')
        else:
            started = False
            print('Car Stopped')

    elif command == 'Help':

        print('''
>Start ( To Start The Car )
>Stop ( To Stop The Car )
>Quit ( To Quit The Game )
        ''')

    elif command == 'Quit':
        break

    else:
        print('Sorry I Didnt Understand')

#-----
ans_1 = 'Ali'
ans_2 = 'Hazrat Ali'

guess = input('Who Is First Imam ? ').title()

if guess == ans_1 or ans_2:
    print('Right Answer')

else:
    print('Wrong Answer')

#-----
guess_count = 0
guess_limit = 3

while guess_count < guess_limit:
    guess = input('Who Is First Imam ? ').capitalize()
    guess_count += 1
    if guess == ans:
        print('Correct Answer')
        break
    else:
        print('Try Again')


# "FOR" LOOP

price = [10, 20, 30, 40, 50]
total = 0

for item in price:
    total = item + total

print(total)

#-----
for x in range(5):
    for y in range(5):
        print(f'{x} , {y}')


# LISTS & TYPES, TUPLES

names = ['A', 'B', 'C', 'D', 'E']
print(names[0])

#-----
names = ['A', 'B', 'C', 'D', 'E']
names.append('F')
print(names)

#-----
names = ['A', 'B', 'C', 'D', 'E']
names.insert(1, 'F')
print(names)

#-----
names = ['A', 'B', 'C', 'D', 'E']
names.remove('B')
print(names)

#-----
names = ['A', 'B', 'C', 'D', 'E']
names.clear()
print(names)

#-----
names = ['A', 'B', 'C', 'D', 'E', 'C']
print(names.count('C'))

#-----
numbers = ['1', '2', '3', '4', '5']
names = ['A', 'B', 'C', 'D', 'E']
names.extend(numbers)
print(names)

#----- TUPLE IS SAME AS LIST JUST THE DIFFERENCE IS IT CANT BE CHANGES OR MODIFIED
names = ('A', 'B', 'C', 'D', 'E')
names[0] = ('F')
print(names)

#----
matrix = [

    [1,2,3],
    [4,5,6],
    [7,8,9]

]

print(matrix[0][1])


# DICTIONARY

dictionary = {

    'name': 'Tayyab',
    'email': 'abc@abc.com',
    'phone_num': '123456789'

}
print(dictionary.get('Name'))

#-----
phone = input('>')

dictionary = {
    '0': 'Zero',
    '1': 'One',
    '2': 'Two',
    '3': 'Three',
    '4': 'Four',
    '5': 'Five',
    '6': 'Six',
    '7': 'Seven',
    '8': 'Eight',
    '9': 'Nine',

}

output = ''
for char in phone:
   output += dictionary.get(char, 'Error') + ' '

print(output)


# FUNCTIONS

def function():
    print('Hello')

function()

#-----
def function(name):
    print('Hello ' + name)

function('Tayyab')

#----- RETURN STATEMENT
def cube(number):
    return number*number*number

print(cube(3))