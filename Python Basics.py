# ########################################################################################################################################
# ########################################################################################################################################
# ########################################################################################################################################
# ########################################################################################################################################
# ########################################################################################################################################
# Check Uppercase, Lowercase & Numbers In String

def string_and_number_calculator(string):
    checker_dict = {'Lower_case': 0, 'Upper_case': 0, 'Number': 0}

    for letter in string:
        if letter.isupper():
            checker_dict['Upper_case'] = checker_dict['Upper_case'] + 1

        elif letter.islower():
            checker_dict['Lower_case'] = checker_dict['Lower_case'] + 1

        elif letter.isnumeric():
            checker_dict['Number'] = checker_dict['Number'] + 1

        else:
            pass

    print(f"There Are {checker_dict['Upper_case']} Upper Case In Text")
    print(f"There Are {checker_dict['Lower_case']} Lower Case In Text")
    print(f"There Are {checker_dict['Number']} Numbers In Text")


i_string = input('Write Text To Check :: ')

string_and_number_calculator(i_string)


# ############################################################
# ############################################################
# Net Salary Calculator

basic_salary = int(input('Enter Your Basic Salary: '))
print('''---------------------------
---------------------------''')

# Allowance Calculation
medical_allowance = (50 * basic_salary) / 100
fix_uni_allowance = 1000
convence_allowance = (25 * basic_salary) / 100
gross_salary = basic_salary + medical_allowance + fix_uni_allowance + convence_allowance

# Income Tax Condition
if (gross_salary > 50000):
    
    income_tax = (4*gross_salary)/100
    net_salary = gross_salary - income_tax

    print(f'Your Gross Salary Is {gross_salary}')
    print(f'Your 4 % Income Tax Is {income_tax}')
    print(f'Your Net Salary Is {net_salary}')
    print('''---------------------------
---------------------------''')

elif (gross_salary <= 50000):
    
    income_tax = (2*gross_salary)/100
    net_salary = gross_salary - income_tax

    print(f'Your Gross Salary Is {gross_salary}')
    print(f'Your 2 % Income Tax Is {income_tax}')
    print(f'Your Net Salary Is {net_salary}')
    print('''---------------------------
---------------------------''')
    
 
# ############################################################
# ############################################################
# Net Salary Calculator With Dictionary And Exception Handling

employee_data = []

while exit != 'Yes':

    try:   
        id = int(input("Enter Employee's Id No: "))
    except ValueError:
        print('(ERROR) "Enter Number Only"')
        continue

    try:   
        basic_salary = int(input('Input Employee Basic Salary: '))
    except ValueError:
        print('(ERROR) "Enter Number Only"')
        continue

    medical_allowance = (50 * basic_salary) / 100
    convence_allowance = (25 * basic_salary) / 100
    gross_salary = basic_salary + medical_allowance + convence_allowance

    employee_data.append({'Employee Id': id,
                         'Basic Salary': basic_salary,
                         'Medical Allowance': medical_allowance,
                         'Convence Allowance': convence_allowance,
                         'Gross Salary': gross_salary})

    
    exit = input('Do You Want To Exit ? (Enter "Yes" To Exit And "No" To Keep Going): ').capitalize()
    if exit == 'Yes':
        print('Program Ended')
        break
    elif exit == 'No':
        continue
    else:
        while exit != 'Yes' and exit != 'No':
            print('Enter The Right Value')
            exit = input('Do You Want To Exit ? (Enter "Yes" To Exit And "No" To Keep Going): ').capitalize()

print('\n=====================')
print("Data Of All Employees")
print('=====================\n')

for i in employee_data:

    print(f'''
Employee Id Is {i['Employee Id']}
Basic Salary Is {i['Basic Salary']}
Medical Alllowance Is {i['Medical Allowance']}
Convence Allowance Is {i['Convence Allowance']}
Gross Salary Is {i['Gross Salary']}
================================================
================================================''')

    
# ############################################################
# ############################################################
# Grade Calculator

print('Grade Calculation System')
print('''---------------------------
---------------------------''')

# Input
maths = int(input('Enter Marks For Maths: '))
chemistry = int(input('Enter Marks For Chemistry: '))
physics = int(input('Enter Marks For Physics: '))

# Overall Grade
overall_grade = ((maths + physics + chemistry) * 100) / 300

if(overall_grade >= 80):
    print(f'You Got A+ Grade And Your % Is {overall_grade}')
elif(overall_grade >= 70):
    print(f'You Got A Grade And Your % Is {overall_grade}')
elif(overall_grade >= 60):
    print(f'You Got B Grade And Your % Is {overall_grade}')
elif(overall_grade >= 50):
    print(f'You Got C Grade And Your % Is {overall_grade}')
elif(overall_grade < 50):
    print(f'You Got F Grade And Your % Is {overall_grade}')
print('---------------------------')


# ############################################################
# ############################################################
# Prime Number Calculator

value = int(input("Enter A Maximum Number: "))
print('''--------------------------
--------------------------''')
prime_nums = []

for i in range(2, value):
    for j in range(2, i):
        if (i % j) == 0:
            break
    else:
        prime_nums.append(i)

print(f'Prime Numbers Under {value} Are: {prime_nums}')


# ############################################################
# ############################################################
# QR Code Reader Of Text

import cv2 as cv
import time
import winsound as win

total = 0
camera = cv.VideoCapture(0)

while True:
    success, img = camera.read()
    qrd = cv.QRCodeDetector()
    a, b, c = qrd.detectAndDecode(img)

    if a != '':
        if a == 'Vegetables':
            time.sleep(1)
            win.Beep(1000, 500)
            total += 800
            print('800 For Vegetables')
            print(f'Your Total Bill Is {total}')

        elif a == 'Laptop':
            time.sleep(1)
            win.Beep(1000, 500)
            total += 50000
            print('50000 For Laptop')
            print(f'Your Total Bill Is {total}')

        elif a == 'Dry Fruits':
            time.sleep(1)
            win.Beep(1000, 500)
            total += 4000
            print(f'4000 For Fruits')
            print(f'Your Total Bill Is {total}')

        elif a == 'Cooking Oil':
            time.sleep(1)
            win.Beep(1000, 500)
            total += 500
            print(f'500 For Cooking Oil')
            print(f'Your Total Bill Is {total}')

        continue

    cv.imshow('Preview', img)
    if cv.waitKey(1) == 27:
        break
        
 
# ############################################################
# ############################################################
# QR Code Reader Of Link (Link Opener)

import cv2 as cv
import webbrowser

camera = cv.VideoCapture(0)

while True:
    success, img = camera.read()
    qrd = cv.QRCodeDetector()
    a, b, c = qrd.detectAndDecode(img)

    if a != '':
        print(a)
        webbrowser.open(a)
        break

    cv.imshow('Preview', img)
    if cv.waitKey(1) == 27:
        break
        
        
# ############################################################
# ############################################################
# Name And Circle On Camera Screen

import cv2 as cv

camera = cv.VideoCapture(0)

while True:
    success, img = camera.read()
    cv.putText(img, 'Syed M Tayyab', (100, 50), cv.FONT_ITALIC, 2, (150, 100, 50), 5)

    for i in range(230, 390, 40):
        cv.circle(img, (i, 100), 30, (100, 100, 100), 5)

    cv.imshow('Preview', img)
    if cv.waitKey(1) == 27:
        break
        

# ############################################################
# ############################################################
# Find 2nd Largest Number

list = []

for i in range(5):
    list_num = int(input('Enter 5 Numbers To Add In List: '))
    list.append(list_num)

print('''========================
========================''')

list.sort()
print(list)
print(f'The 2nd Highest Number In The list Is {list[-2]}')


# ############################################################
# ############################################################
# Rock Paper Scissor

import random as rand

comp_input = ['R','P','S']
comp_choice = rand.choice(comp_input)
user_score,  comp_score = 0, 0

while (user_score != 5 and comp_score != 5):

    print('===================================================================================================================')
    user_input = input('Enter || "R" For ROCK || "P" For PAPER || "S" For SCISSORS: || "EXIT" To End The Game: ').upper()
    comp_choice = rand.choice(comp_input)
#------------------------------------------------------------------------------------------------------------------------------------------
    if (user_input == comp_choice):
        print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
        print('DRAW')
#------------------------------------------------------------------------------------------------------------------------------------------
    elif (user_input == 'R' and comp_choice == 'P'):
        comp_score += 1
        print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
        print('Computer Win')
    elif (user_input == 'R' and comp_choice == 'S'):
        user_score += 1
        print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
        print('User Win')
#------------------------------------------------------------------------------------------------------------------------------------------
    elif (user_input == 'P' and comp_choice == 'S'):
        comp_score += 1
        print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
        print('Computer Win')
    elif (user_input == 'P' and comp_choice == 'R'):
        user_score += 1
        print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
        print('User Win')
#------------------------------------------------------------------------------------------------------------------------------------------
    elif (user_input == 'S' and comp_choice == 'R'):
        comp_score += 1
        print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
        print('Computer Win')
    elif (user_input == 'S' and comp_choice == 'P'):
        user_score += 1
        print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
        print('User Win')
#------------------------------------------------------------------------------------------------------------------------------------------
    elif (user_input == 'EXIT'):
        print('''=========
Game Over
=========''')
        break
#------------------------------------------------------------------------------------------------------------------------------------------
    else:
        print('Enter The Right Value')
    

# ############################################################
# ############################################################
# Hands Detector

from cvzone.HandTrackingModule import HandDetector as Hd
import cv2 as cv

camera = cv.VideoCapture(0)
detector = Hd(detectionCon=0.8, maxHands=2)

while True:

    success, img = camera.read()
    hands, img = detector.findHands(img)

    if hands:

        hand1 = hands[0]
        lmList1 = hand1["lmList"]
        fingers1 = detector.fingersUp(hand1)

        s1 = str (sum(fingers1))
        cv.putText(img,s1,(25,50),cv.FONT_HERSHEY_PLAIN,3,(0,0,255),3 )

        pos = lmList1[8]
        print(pos)

        if pos[0] >= 550 and pos[0] <= 600 and pos[1] >= 0 and pos[1] <= 40:
            break

    cv.putText(img, 'Exit Here --> ', (320, 50), cv.FONT_ITALIC, 1, (255, 255, 255), 4)
    cv.circle(img, (600, 40), 40, (255, 255, 255), 2)

    cv.imshow("Preview", img)

    if cv.waitKey(1) == 27:
        break
        
        
# ############################################################
# ############################################################
# Rock Paper Scissors With Hand Gestures

from cvzone.HandTrackingModule import HandDetector as Hd
import cv2 as cv
import time
import random as rand
import winsound as win

camera = cv.VideoCapture(0)
detector = Hd(detectionCon=0.8, maxHands=2)

comp_input = ['ROCK', 'PAPER', 'SCISSORS']
comp_choice = rand.choice(comp_input)
user_score, comp_score = 0, 0

while user_score != 5 and comp_score != 5:
    success, img = camera.read()
    hands, img = detector.findHands(img)

    if hands:
        
        time.sleep(1)
        hand1 = hands[0]
        lmList1 = hand1["lmList"]
        fingers1 = detector.fingersUp(hand1)

        s1 = str(sum(fingers1))
        sum_of_fingers = sum(fingers1)
        cv.putText(img, s1, (15, 50), cv.FONT_HERSHEY_PLAIN, 3, (0, 0, 255), 3)
        position = lmList1[8]

        if position[0] >= 550 and position[0] <= 600 and position[1] >= 0 and position[1] <= 40:
            break
    
        user_input = ''

        if sum_of_fingers == 2:
            user_input = 'SCISSORS'
            cv.putText(img, user_input, (300, 100), cv.FONT_HERSHEY_PLAIN, 3, (0, 0, 255), 3)
            time.sleep(1)
        
        elif sum_of_fingers == 5:
            user_input = 'PAPER'
            cv.putText(img, user_input, (300, 100), cv.FONT_HERSHEY_PLAIN, 3, (0, 0, 255), 3)
            time.sleep(1)
        
        elif sum_of_fingers == 0:
            user_input = 'ROCK'
            cv.putText(img, user_input, (300, 100), cv.FONT_HERSHEY_PLAIN, 3, (0, 0, 255), 3)
            time.sleep(1)
        
        elif sum_of_fingers == 4:
            print("Four Fingers Detected (Program Ended)")
            win.Beep(1000, 1500)
            break

        if user_input in comp_input:

            comp_choice = rand.choice(comp_input)

            if user_input == comp_choice:
                print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
                print('DRAW')

            elif (user_input == 'ROCK' and comp_choice == 'PAPER') or (user_input == 'PAPER' and comp_choice == 'SCISSORS') or (user_input == 'SCISSORS' and comp_choice == 'ROCK'):
                comp_score += 1
                print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
                print('Computer Wins')
            
            elif (user_input == 'PAPER' and comp_choice == 'ROCK') or (user_input == 'SCISSORS' and comp_choice == 'PAPER') or (user_input == 'ROCK' and comp_choice == 'SCISSORS'):
                user_score += 1
                print(f'You Choose {user_input} And Computer Choose {comp_choice} | Your Score Is {user_score} And Computer Score Is {comp_score}')
                print('User Wins')
            
            win.Beep(1000, 500)
            time.sleep(1)

    cv.putText(img, 'Exit Game By Showing 4 Fingers ', (55, 40), cv.FONT_ITALIC, 1, (255, 255, 255), 4)

    cv.imshow("Game", img)

    if cv.waitKey(1) == 27:
        break
        
 
# ############################################################
# ############################################################
# 


# ########################################################################################################################################
# ########################################################################################################################################
# ########################################################################################################################################
# ########################################################################################################################################
# ########################################################################################################################################

# TAKING INPUT
# We Can Use Both Single And Double Quotes In Print Statement For Writing Strings

name = input('What Is Your Name ? ')
print('Hi ' + name)

cell_no = input('What Is Your Cell No ? ')
print('Thanks')

color = input('What Is Your Favorite Color ? ')
print('Oh Wow, ' + color + ' Is My Favorite Color Too.')  # + Is Used To Join Two Strings

birth_year = int(input('What Is Your Birth Year ? '))
print('Your Age Is', 2021 - birth_year)

# FOR WHOLE NUMBER USE "INT"

for_whole_number = int()

# FOR WHOLE & DECIMAL NUMBER USE "FLOAT"

for_whole_and_decimal_number = float()

# "f'" IS USED TO PUT VARIABLES BETWEEN STRINGS

weight_kgs = int(input('What Is Your Weight In Kgs ? '))
print(f'{weight_kgs * 1000} Grams')
##
weight_kgs = int(input('What Is Your Weight In Kgs ? '))
print(f'Your Weight Is {weight_kgs * 1000} Grams')
##
weight_grams = int(input('What Is Your Weight In Grams ? '))
print(f'{weight_grams // 1000} Kgs')
##
first = 'Syed M'
last = 'Tayyab'
message = f'{first} {last} Is A Good Developer'
print(message)

# DIFFERENT TYPE OF FUNCTIONS FOR VARIABLE & STRINGS

# Range Function

name = 'Syed Muhammad Tayyab Mehdi Jafri'
print(name[5:13])
##
name = 'Syed Muhammad Tayyab Mehdi Jafri'
print(name[5:])
##
number = '12345678'
         #01234567

print(number[0:8:2])
print(number[:-9:-1])

# Change Into Upper Case

paragraph = 'My Name Is Tayyab'
print(paragraph.upper())

# Change Into Lower Case

paragraph = 'My Name Is Tayyab'
print(paragraph.lower())

# Capitalise Every Word Of Sentence

paragraph = 'My Name Is Tayyab'
print(paragraph.title())

# Capitalise Only First Letter Of Sentence

paragraph = 'My Name Is Tayyab'
print(paragraph.capitalize())

# Find Location Of Word

paragraph = 'My Name Is Tayyab'
print(paragraph.find('Tayyab'))

# Replace Word In String

paragraph = 'My Name Is Tayyab'
print(paragraph.replace('Tayyab', 'Ali'))

# Simple Encryption With Range Function '[]'

name = input('What Is Your Name ?\n')[::-1]
print(f'Hacker Is Reading {name}')
print(f'Your Name Is {name[::-1]}')

# "in" Is Same Like Find Function But Will Return Boolean Value

paragraph = 'My Name Is Tayyab'
print('Tayyab' in paragraph)
##
paragraph = 'My Name Is Tayyab'
print('tayyab' in paragraph)

# (len) Is Used For Length Of String

name = 'Syed M Tayyab Mehdi Jafri'
print(len(name))

# MATHS FUNCTIONS

print(5 + 5)

print(5 - 5)

print(5 * 5)

print(5 ** 5)  # Exponent

print(5 / 5)  # Return Decimal Value

print(5 // 5)  # Return Integer Value
##
x = 10
y = 10
print(y + x)
##
x = 10
print(40 + x)
##
x = (2 + 3) * 10 - 3
print(x)
##
num1 = int(input('Enter 1st Number '))
num2 = int(input('Enter 2nd Number '))
print(f'Your Answer Is {num1 + num2}')
##
num1 = float(input('Enter 1st Number '))
num2 = float(input('Enter 2nd Number '))
print(f'Your Answer Is {num1 + num2}')

# ----- 'Random'
import random

random_num = random.randint(0, 100)
print(random_num)

##
import random

random_num = random.uniform(0, 100)
print(random_num)



# "IF" "ELSE" "ELIF" STATEMENTS

hot = False
cold = True
if hot:
    print('Its A Hot Day')

elif cold:
    print('Its A Cold Day')

else:
    print('Its A Lovely Day')

##

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

##

syed = True
high_income = False
if syed or high_income:
    print('Eligible')

##

syed = False
high_income = False
if syed or high_income:
    print('Eligible')

# (IF) (ELSE) (ELIF) (AND) (OR) (IN) (NOT) EXAMPLES

gender = input('Are You Male, Female Or Transgender ? ')

if gender.capitalize() == 'Male':
    print('You Got 10000 Rs')

elif gender.capitalize() in ('Female', 'Transgender'):
    print('You Got 5000 Rs')

else:
    print('You Got 1000 Rs')

##

syed = True
high_income = True

if syed and high_income:
    print('Not Eligible')

elif syed and not high_income:
    print('You Are Eligible')

##

name = 'Tayyab'

if len(name) < 3:
    print('Too Short')

elif len(name) > 50:
    print('Too Long')

else:
    print('Name Looks Good')

##

weight = float(input('Enter Your Weight: '))
unit = input('Enter The Unit (Kgs) Or (Grams): ').title()

if unit == 'Kgs':
    print(f'Your Weight Is {weight * 1000} Grams')

elif unit == 'Grams':
    print(f'Your Weight Is {weight / 1000} Kgs')

else:
    print('Enter The Right Unit')

##

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

##

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

# 'While' LOOP

i = 1

while i <= 5:
    print(i)
    i = i + 1

# -----
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

# -----
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
        print("Sorry I Didn't Understand")

# -----
ans_1 = 'Ali'
ans_2 = 'Hazrat Ali'

guess = input('Who Is First Imam ? ').title()

if guess == ans_1 or ans_2:
    print('Right Answer')

else:
    print('Wrong Answer')

# -----
guess_count = 0
guess_limit = 3
ans = 'Ali'

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

# -----
for x in range(5):
    for y in range(5):
        print(f'{x} , {y}')

# -----
for x in range(1, 6):
    for y in range(0, 6):
        print(f'{x} , {y}')

# -----
list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

for i in list1:
    print(f'2 x {i} = {2 * i}')

# -----
width = 20
height = 5

print('o' * width)

for i in range(height):
    print("o" + (width-2) * ' ' + 'o')

print('o' * width)

# LISTS & TYPES, TUPLES

names = ['A', 'B', 'C', 'D', 'E']
print(names[0])

# -----
names = ['A', 'B', 'C', 'D', 'E']
names.append('F')
print(names)

# -----
names = ['A', 'B', 'C', 'D', 'E']
names.insert(1, 'F')
print(names)

# -----
names = ['A', 'B', 'C', 'D', 'E']
names.remove('B')
print(names)

# -----
names = ['A', 'B', 'C', 'D', 'E']
print(names.pop(1))

# -----
names = ['A', 'B', 'C', 'D', 'E']
names.clear()
print(names)

# -----
names = ['A', 'B', 'C', 'D', 'E', 'F', 'F', 'F']
print(names.count('F'))

# -----
names = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H']
print(names.index('F'))

# -----
number = [1, 4, 6, 2, 9, 3, 2, 9, 7, 4, 6, 1, 0, ]
number.sort()
print(number)

# -----
number = [1, 4, 6, 2, 9, 3, 2, 9, 7, 4, 6, 1, 0, ]
number.reverse()
print(number)

# -----
number = ['A', 'D', 'C', 'Z', 'X']
number.sort()
print(number)

# -----
numbers = ['1', '2', '3', '4', '5']
names = ['A', 'B', 'C', 'D', 'E']
names.extend(numbers)
print(names)

# -----
print(list(range(1, 100)))

# ----- TUPLE IS SAME AS LIST JUST THE DIFFERENCE IS IT CAN'T BE CHANGES OR MODIFIED
names = ('A', 'B', 'C', 'D', 'E')
names[0] = 'F'
print(names)

# ----
matrix = [

    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]

]

print(matrix[0][1])

# DICTIONARY

dictionary = {
    'first_name': 'Syed',
    'last_name': 'Jafri',
    'email': ['syedtayyab@abc.com', 'syedtaqi@abc.com'],
    'phone_num': 123456789,
    'gender': 'm',
    'siblings': ['John', 'Luna', 'Emma']
}

print(dictionary['first_name'])
print(dictionary['email'][1])
print(dictionary['siblings'][0])

# ----- '.get' Is Better Than Above Method
dictionary = {
    'first_name': 'Syed',
    'last_name': 'Jafri',
    'email': ['syedtayyab@abc.com', 'syedtaqi@abc.com'],
    'phone_num': 123456789,
    'gender': 'm',
    'siblings': ['John', 'Luna', 'Emma']
}

print(dictionary.get('first_name'))
print(dictionary.get('email')[1])
print(dictionary.get('siblings')[0])

# -----
dictionary = {
    'first_name': 'Syed',
    'last_name': 'Jafri',
    'email': ['syedtayyab@abc.com', 'syedtaqi@abc.com'],
    'phone_num': 123456789,
    'gender': 'm',
    'siblings': ['John', 'Luna', 'Emma']
}

print(dictionary.keys())

print(dictionary.values())

print(dictionary.items())

# -----
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


# SETS

set_1 = {1, 2, 3, 4, 5, 6}
set_2 = {2, 4, 6, 8, 9, 11}

print(set_1.union(set_2))
print(set_1.intersection(set_2))
print(set_1.difference(set_2))


# FUNCTIONS

def function():
    print('Hello')


function()


# -----
def function(name):
    print('Hello ' + name)


function('Tayyab')


# ----- RETURN STATEMENT
def cube(number):
    return number * number * number


print(cube(3))

# ----- Doc String
def sum_function(num_1, num_2):
    """This Is Doc String Used To Define A Function And What Is Ist Purpose. We Can See This By Using HELP Keyword"""
    total = num_1 + num_2
    print(total)


sum_function(5, 10)
help(sum_function)

