// VU Assignment 1

#include <iostream>
using namespace std;

int main(){

cout << "\nMy Name Is Tayyab" << endl;
cout << "\nMy Student ID Is BC210202268" << endl;

int a = 2, b = 6, c = 8, it = 1, sum = 0;

sum = a + b + c;
cout << "\nThe Total Sum Of Last 3 Digits Is = " << sum << endl;


if (sum% 2==1)
{
    cout << "\nSum Is Odd Number\n" << endl;

while (it <= sum)
{
    cout << "\nIteration No: "<< it << endl;
    cout << "My Name Is Tayyab" << endl;
    it ++;
}
}

else
{
    cout << "\nSum Is Even Number\n" << endl;

while (it <= sum)
{
    cout << "\nIteration No: " << it << endl;
    cout << "My VU Id Is BC210202268 " << endl;
    it ++;
}
}
}

// VU Assignment 2

#include <iostream>
using namespace std;

int main(){

    char first_name[7] = "Tayyab";
    char vuid[12] = "BC210202268";
    int last_digit = 8;
    int vowel_num = 0;
    int number = 1;
    int sum_of_ld_vu;
    int loop = 1;

    cout << "My First Name Is " << first_name << endl;
    cout << "My VU Id Is " << vuid << endl;
    cout << "Last Digit Of My VU ID Is " << last_digit << endl << endl;
    
    for (int i = 0 ; first_name[i] != 0 ; i++ )
    {
        if (first_name[i] == 'a' || first_name[i] == 'e' || first_name[i] == 'i' ||
        first_name[i] == 'o' || first_name[i] == 'u' || first_name[i] == 'A' ||
        first_name[i] == 'E' || first_name[i] == 'I' || first_name[i] == 'O' ||
        first_name[i] == 'U' )

        {
            
        cout << "Vowel Number " << number++ << " Is : " << first_name[i] << endl;
        vowel_num++;

        }
        
    }

    cout << "Total Vowels In My First Name Are: " << vowel_num << endl<< endl;
    
    sum_of_ld_vu = vowel_num + last_digit;

    cout << "Sum Of Vowels In First Name & Last Digit Of VuId Is: "<< sum_of_ld_vu <<endl<<endl;
    
    if (sum_of_ld_vu% 2 == 0)
    {

        while (loop <= sum_of_ld_vu)
        {

            cout << "Iteration No: " << loop << endl;
            cout << "My First Name Is Tayyab" << endl;
            loop++; 
        
        }
        
    }

    else
    {

        while (loop <= sum_of_ld_vu)
        {

            cout << "Iteration No: " << loop <<endl;
            cout << "My Last Name Is Mehdi" << endl;
            loop++; 
        
        }

    }
    
}

// A Basic Shopping Program With (getline) (if else) (|| OR) (&& AND) (While)

#include <iostream>
using namespace std;

int main(){

    string item;
    float price;
    int quantity;
    float total;
    char experience;

    cout << "Write The Name Of Item You Want To Buy:" << endl;
    getline(cin, item); // (getline) Is Useful If We Want Input Of Multiple Words

    cout << "What Is The Price Of " << item << " In Dollars $ ?" << endl;
    cin >> price;

    cout << "What Is The Quantity Of " << item << endl;
    cin >> quantity;

    total = price*quantity;

    cout << "Your Total Bill For " << quantity << " " << item << " Is " << total << "$" << endl<< endl;
    
    cout << "How Was Your Shopping Experience Write (G) If Good And (B) For Bad" << endl;
    cin >> experience;

    while (experience != 'G' && experience != 'g' && experience != 'B' && experience != 'b')
    {

        cout << "Write \"G\" If Good And \"B\" If Bad\n";
        cin >> experience;
  
    }

    if (experience == 'g' || experience == 'G') // If Statement With (||) OR
        {

        cout << "We Appreciate Your Feedback THANKS For Shopping :)";
    
        }

    else if (experience == 'b' || experience == 'B')
        {

        cout << "Sorry For Bad Experience, We Will Do Better Next Time THANKS For Shopping :)";
    
        }

}

// Ali Birthday Program With New cin.ignore function

#include <iostream>
using namespace std;

int main(){

    int savings;
    string birthday;

    cout << "How Much Savings Do You Have ? "<< endl;
    cin >> savings;
    cin.ignore(); /* If We Have To Use Getline After cin We Have To Give cin.ignore Command First
                    Otherwise The Getline Function Will Not Work */
    
    cout << "What Is Ali's Birthday ? "<< endl;
    getline (cin, birthday);

    if (savings > 100 && savings < 500)
    {

        cout << "Go With Ahmed";
    
    }

    else if (savings > 500)
    {
        cout << "Go With Ali"<< endl;

        if (birthday == "25 Feb" || birthday == "25 feb" || birthday == "25 FEB" ||
            birthday == "25 February" || birthday == "25 february" || birthday == "25 FEBRUARY")
        {

            cout << "Happy Birthday Ali";
    
        }
        
        else
        {

            cout << "Today's Party Is From Your Side";
        
        }

    }

    else
    {

        cout << "Stay At Home You Poor MF";
    
    }
    

}

// A Basic Calculator

#include <iostream>
using namespace std;

int main(){

    float num1, num2;
    char maths_operator;

    cout << "Enter Your First Number " << endl;
    cin >> num1;
    cout << "Enter Your Second Number " << endl;
    cin >> num2;

    float sum = num1 + num2, sub = num1 - num2, mul = num1 * num2, div = num1 / num2;
    
    cout << "Enter The Maths Operator (+)(-)(*)(/) " << endl;
    cin >> maths_operator;

    while (maths_operator != '+' && maths_operator != '-' &&
            maths_operator != '*' && maths_operator != '/' )
    {

        cout << "Enter The Valid Operator " << endl;
        cin >> maths_operator;
    
    }
    

    switch (maths_operator) // Switch Is A Alternative Way For If Ifelse
    {

    case '+':
        cout << sum;
        break;

    case '-':
        cout << sub;
        break;
    
    case '*':
        cout << mul;
        break;

    case '/':
        cout << div;
        break;

    default:
        break;
    
    }

}

// We Can Use Range In Switch For Bigger Ranges Of Values eg: 1 ... 99

#include <iostream>
using namespace std;


int main(){

    int input;

    cout << "Enter The Number " << endl;
    cin >> input;

    switch (input)
    {

    case 1 ... 99:
        cout << "Right ";
        break;
    
    default:
        cout << "Wrong";
        break;
   
    }

}

// Pizza Order Program From Constructor Overlaoding

#include <iostream>
using namespace std;

class Burger{
public:
    string patty;
    string sauce;
    string extras; 

    Burger(string patty, string sauce, string extras){

        this -> patty = patty;
        this -> sauce = sauce;
        this -> extras = extras;

    }

    Burger(string patty, string sauce){

        this -> patty = patty;
        this -> sauce = sauce;

    }

    Burger(string patty){

        this -> patty = patty;

    }

    void Order_Burger(){

        if (!patty.empty())
        {
            cout << "Here Is Your Delicious Burger With " << patty; 
        }

        if (!sauce.empty())
        {
            cout << " & " << sauce; 
        }

        if (!extras.empty())
        {
            cout << " & With Some " << extras << endl; 
        }
        
    }
};


int main(){

    Burger first_burger("Chicken", "Ketchup", "Chips");
    Burger second_burger("Beef", "Mayo");

    first_burger.Order_Burger();
    second_burger.Order_Burger();

}

/*-----------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------*/

// Taking Input From (cin) & Output From (cout)

#include <iostream>
using namespace std;

int main(){

    int num1, num2;

    cout << "Number 1 \n";
    cin >> num1; // (cin) Used For Taking Input Of Only Single Word

    cout << "Number 2 \n";
    cin >> num2;

    cout << "The Sum Is = " << num1+num2;

}

// Float, int, char, string, bool & Math Operators

#include <iostream>
using namespace std;

int main(){

    float a = 4, b = 5; // For Decimal Point Number
    
    cout << "The Total Is: " << a+b << endl;
    cout << "The Total Is: " << a-b << endl;
    cout << "The Total Is: " << a*b <<endl;
    cout << "The Total Is: " << a/b << "\n" << endl; // If We Divide 5 By 2 The Answer Will Come 2

    cout << "The Total Is: " << 5/2.0 << "\n" << endl; // If We Divide 5 By 2.0 The Answer Will Come 2.5

    int c = 4, d = 5; // For Whole Number

    cout << "The Total Is: " << c+d << endl;
    cout << "The Total Is: " << c-d << endl;
    cout << "The Total Is: " << c*d << endl;
    cout << "The Total Is: " << c/d << "\n" << endl;

    char x = 'T'; // For Single Character With Single Quotes
    cout << x << "\n" << endl;

    string y = "Tayyab"; // For Multiple Characters With Double Quotes
    cout << y << "\n" << endl;

    bool z = true; // Used As True Or False Statement
    cout << z << endl;

}

// Some Scape Sequences (\)

#include <iostream>
using namespace std;

int main(){

    cout << "\"My Name Is Tayyab\"" << endl; // Will Add Quotes
    cout << "\tMy \tName \tIs \tTayyab" << endl; // Tab
    cout << "\nMy Name Is Tayyab\n" << endl; // Next Line

}

// Some Useful String Functions

#include <iostream> // .Length Is Used For Determining Length Of String
using namespace std;

int main(){

    string name;

    cout << "What Is Your Name ? " << endl;
    getline(cin, name);

    cout << "The Length Of Your Name Is " << name.length() << endl;

    if (name.length() >= 10)
    {
        cout << "Your Name Is Big";
    }
    
    else
    {
        cout << "Your Name Is Small";
    }

}

//

#include <iostream> // .Empty Is Used To Determine If String Is Empty
using namespace std;

int main(){

    string name;

    cout << "What Is Your Name ? " << endl;
    getline(cin, name);

    if (name.empty())
    {
        cout << "Enter Your Name";
    }
    
    else
    {
        cout << "Welcome " << name;
    }

}

//

#include <iostream> // .Clear Is Used To Clear Full String
using namespace std;

int main(){

    string name;

    cout << "What Is Your Name ? " << endl;
    getline(cin, name);

    cout << "Your Name Is " << name << endl;
    name.clear();

    cout << "Your Name Is " << name;

}

//

#include <iostream> // .Erase Is Used To Erase A Partial Part Of String
using namespace std;

int main(){

    string name;

    cout << "What Is Your Name ? " << endl;
    getline(cin, name);

    cout << "Your Name Is " << name.erase( 0, 2) << endl;

}

//

#include <iostream> // .Append Is Used To Add Some Text In String
using namespace std;

int main(){

    string name;

    cout << "What Is Your User Name ? " << endl;
    getline(cin, name);

    cout << "Your Email Is " << name.append("@gmail.com") << endl;

}

//

#include <iostream> // .Insert Is Also Almost Same As Append
using namespace std;

int main(){

    string name;

    cout << "What Is First Name ? " << endl;
    getline(cin, name);

    cout << "Your Email Is " << name.insert(3, "@") << endl;

}

//

#include <iostream> // .Find Is Used To Find Location Of Character In String
using namespace std;

int main(){

    string name;
    char character;

    cout << "What Is Your Name ? " << endl;
    getline(cin, name);

    cout << "Find Character In Your Name ?" << endl;
    cin >> character;

    cout << "The Character " << character << " Is At " << name.find(character) << endl;

}

// Ternary Operator (?) 

#include <iostream> // (?) Checks If Statement Is True Or False And Gives Output Accordingly.
using namespace std;

int main(){

    int marks;

    cout << "Enter Your Marks " << endl;
    cin >> marks;

    marks >= 40 ? cout << "You Are Passed" : cout << "You Are Failed";

}

// OR (||) And (&&) Not (!)

#include <iostream> // And (&&) Or (||)
using namespace std;

int main(){

    string weather;

    cout << "What Is Your Weather Outside ? " << endl;
    getline(cin, weather);

    if (weather >= "0" && weather <= "30")
    {

        cout << "The Weather Is Good";
    
    }
    
    else if (weather < "0" || weather > "30")
    {

        cout << "The Weather Is Bad";

    }
   
}

//

#include <iostream> // Not (!)
using namespace std;

int main(){

    string name;

    cout << "What Is Your Name ? " << endl;
    getline(cin, name);

    if (!name.empty())
    {

        cout << "Welcome " << name;
   
    }
    
    else
    {

        cout << "Fill Your Name !";

    }
   
}

// While Loop

#include <iostream> // While Loop Is Used To Execute A Command Until Command Is True
using namespace std;

int main(){

    int right_number = 5;
    int guess;

    cout << "Guess The Right Number Between 1 To 10" << endl;
    cin >> guess;

    while (guess != right_number)
    {

        cout << "Sorry Try Again :(" << endl;
        cin >> guess;
    
    }

    if (guess == right_number)
    {

        cout << "You Won";
    
    }

}

//

#include <iostream>
using namespace std;

int main(){

    int i;
    int counter = 0;

    cout << "How Many Repetition ? " << endl;
    cin >> i;

    while (counter != i)
    {

        cout << "My Name Is Tayyab" << endl;
        counter++;

    }

}

// For Loop

#include <iostream> // For Loop Is Used To Execute A Command For Limited Time
using namespace std;

int main(){

    for (int i = 10 ; i > 0 ; i--)
    {

        cout << i << endl;
  
    }
    
    cout << "Happy New Year";

}

//

#include <iostream>
using namespace std;

int main(){

    int count;

    cout << "How Many Repetition ? " << endl;
    cin >> count;

    for (int i = 0; i != count; i++)
    {

        cout << "Hello Tayyab" << endl;

    }

}

//

#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            
            continue;
        
        }

        cout << i << endl;
        
    }

}

//

#include <iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter First Number " << endl;
    cin >> a;
    
    cout << "Enter Second Number " << endl;
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        
        if (i % 2 != 0)
        {

            continue;
        
        }
        
        cout << i << endl;

    }

}

//

#include <iostream>
using namespace std; // Factorial Loop Program

int main(){

    int number;
    char x = 'x';
    int ans = 1;

    cout << "Enter Number For Its Factorial " << endl;
    cin >> number;
    cout << "-------------------------------" << endl;

    for (int i = number; i >= 1 ; i--)
    {

        if (i > 1)
        {
            cout << i << x;
        }
        
        else if (i == 1)
        {
            cout << i << " = " << ans;   
        }

        ans *= i;

    }

}

//

#include <iostream> // Range Based For Loop
using namespace std;


int main(){

    int marks[] = {7, 38, 24, 87, 64, 93, 42, 7, 40, 17};

    for ( int i : marks)
    {

        cout << i << endl;

    }

}

// Nested Loop

#include <iostream> // Nested Loop Is A Loop Inside A Loop
using namespace std;

int main(){

    int rows, column;
    char symbol;

    cout << "Enter Rows " << endl;
    cin >> rows;
    cout << "Enter Columns " << endl;
    cin >> column;
    cout << "Enter The Symbol " << endl;
    cin >> symbol;

    cout << "---------------" << endl;

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < column; j++)
        {

            cout << symbol;
        
        }
        
        cout << endl;
    
    }

}

//

#include <iostream>
using namespace std;

int main(){

    int rows, column;
    char symbol;

    cout << "Enter Rows " << endl;
    cin >> rows;
    cout << "Enter Columns " << endl;
    cin >> column;
    cout << "Enter The Symbol " << endl;
    cin >> symbol;

    cout << "---------------" << endl;

    for (int i = 0; i <= rows; i++)
    {

        for (int j = 0; j <= column; j++)
        {

            if (i == 0 || i == rows || j == 0 || j == column)
            {

                cout << symbol;
            
            }

            else
            {

                cout << " ";

            }
        
        }
        
        cout << endl;
    
    }

}

//

#include <iostream>
using namespace std;

int main(){

    int rows, column;
    int counter = 0;
    char symbol;

    cout << "Enter Rows " << endl;
    cin >> rows;

    cout << "---------------" << endl;

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= rows + 1 - i; j++)
        {

            cout << j;
        
        }
        
        cout << endl;
    
    }

}

// Break Statement Is Used To Terminate A Loop

#include <iostream>
using namespace std;


int main(){

    for (int i = 0; i < 10; i++)
    {

        if (i == 5)
        {
            break;
        }
        
        cout << i << endl;
    
    }
    
}

// Continue Statement Is Used To Skip Iteration In A Loop

#include <iostream>
using namespace std;


int main(){

    for (int i = 0; i < 10; i++)
    {

        if (i == 5)
        {
            continue;
        }
        
        cout << i << endl;
    
    }
    
}

// Pointers

#include <iostream> // A (*) Pointer Is Variable That Stores A Memory Address Of Variable In Ram
using namespace std; // A (&) Is A Address Operator Which Stores The Memory Location Of Variable

int main(){

    string name = "Tayyab";
    int age = 20;

    string *namePtr = &name;
    int *agePtr = &age;

    cout << "My Name Is " << name << " And Its Memory Location Is " << namePtr << endl;
    cout << "My Age Is " << age << " And Its Memory Location Is " << agePtr << endl;

    cout << "My Name Is " << name << " And Its Memory Location Is " << *namePtr << endl;
    cout << "My Age Is " << age << " And Its Memory Location Is " << *agePtr << endl;

}

// Array

#include <iostream> // Array Is A Variable That Stores Multiple Values Of Same Data Type.
using namespace std;

int main(){

    string cars[] = {"Audi", "Lambo", "Mercedes" };

    cout << cars[1];

}

//

#include <iostream>
using namespace std;

int main(){

    string cars[] = {"Audi", "Lambo", "Mercedes"};

    for (int i = 0 ; i < sizeof(cars)  ; i++)
    {
        cout << cars[i] << endl;
    }

}

// 2D Array

#include <iostream>
using namespace std;

int main(){

    char keyboard[4][10] = {

        {'1','2','3','4','5','6','7','8','9','0'},
        {'Q','W','E','R','T','Y','U','I','O','P'},
        {'A','S','D','F','G','H','J','K','L',';'},
        {'Z','X','C','V','B','N','M',',','.','/'}

    };

    for (int row = 0 ; row < 4 ; row++)
    {

        for (int column = 0 ; column < 10 ; column++)
        {

            cout << keyboard[row][column];
        
        }

    cout << endl;
        
    }

}

//

#include <iostream>
using namespace std;

int main(){

    int marks[2][5] = {

        {1, 2, 3, 4, 5},
        {25, 54, 82, 95, 75}
                                  
    };


    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j == 0; j++)
        {
            
            for (int k = 1; k == 1 ; k++)
            {

                cout<< "The " << marks[j][i] << "rd Students's Marks Are " << marks[k][i] << endl;
           
            }
            
        }
            
    }
    
}

// Structure

#include <iostream> // Structure Is A Variable That Stores Multiple Values Of Different Data Type.
using namespace std; // Structure Is Defined Outside Of main Function 

struct Data
{
    string name;
    char sex;
    int phone;
};


int main(){

    Data student;

    cout << "What Is Your Name ?"<< endl;
    getline(cin, student.name);

    cout << "What Is Your Sex ? Type (M) For Male & (F) For Female"<< endl;
    cin >> student.sex;

    cout << "What Is Your Phone Number ?"<< endl;
    cin >> student.phone;

    cout << "Your Personal Details Are As Follows" << endl << endl;
    cout << "Your Name Is " << student.name << endl;
    cout << "Your Sex Is " << student.sex << endl;
    cout << "Your Cell Number Is " << student.phone << endl;

}

// Nested Structure Is A Structure Inside A Structure

#include <iostream>
using namespace std;

struct Address{

    string house_address;
    int street_number;
};

struct Student{

    string student_name;
    char student_sex;
    int student_phone_no;
    Address student_address;
};


int main(){

    Student information;

    cout << "What Is Your Name ?" << endl;
    getline(cin, information.student_name);

    cout << "What Is Your Sex ?" << endl;
    cin >> information.student_sex;

    cout << "What Is Your Phone Number ?" << endl;
    cin >> information.student_phone_no;
    cin.ignore();
    
    cout << "What Is Your House Address ?" << endl;
    getline(cin, information.student_address.house_address);

    cout << "What Is Your Street Number ?" << endl;
    cin >> information.student_address.street_number;

    cout << "==========================================================================================="<< endl;


    cout << "Your Name Is " << information.student_name << endl;
    cout << "Your Sex Is " << information.student_sex << endl;
    cout << "Your Phone Number Is " << information.student_phone_no << endl;
    cout << "Your House Address Is " << information.student_address.house_address << " & You Street Number Is "
    << information.student_address.street_number << endl;

}



// Function 

#include <iostream> // A Function Is A Group Of Statements That Together Perform A Task
using namespace std;

void function()
{
    cout << "This Is Function" << endl;
}

int main(){

    function();
    
}

//

#include <iostream>
using namespace std;

void sum_function(int a, int b)
{
    cout << "The Sum Is " << a + b << endl;
}

int main(){

    sum_function(20, 30);
    
}

//

/* Function Overloading Is A Function With Same Name And Instruction With Different Set Of Parameters */ 

#include <iostream>
using namespace std;

void function()
{
    cout << "Hello" << endl;
}

void function(string name)
{
    cout << "Hello " << name << endl;
}

int main(){

    function();
    function("Tayyab");

}

// Structure + Function

#include <iostream>
using namespace std;

struct Data{

    string name;
    char sex;
};

void Pdata(Data input){

    cout << "What Is Your Name ?" << endl;
    getline(cin, input.name);
    cout << "Your Name Is " << input.name << endl;

    cout << "What Is Your Sex ?" << endl;
    cin >> input.sex;
    cout << "Your Sex Is " << input.sex << endl;

}

int main(){

    Data student;

    Pdata(student);

}

// (Const) Is Used To Make Variables Constant Value So There Value Can Not Be Changed

#include <iostream>
using namespace std;


int main(){

    const int number = 5;

}

// Object Oriented Programming

// Class

/* A Class Is A User Defined Data Type That We Can Use In Our Programs And It Works As An Object Constructor
or A Blueprint For Creating Objects */

#include <iostream> 
using namespace std;

class FirstClass{
public:
    void human(string name){
            cout << "Hello I Am Human My Name Is " << name;
    }
};

int main(){

    FirstClass tayyab;

    tayyab.human("Tayyab Mehdi");

}

//

#include <iostream>
using namespace std;

class FirstClass{
public:
    string name;

    void human(){
            cout << "Hello I Am Human My Name Is " << name;
    }
};

int main(){

    FirstClass tayyab;

    tayyab.name = "Tayyab";
    tayyab.human();

}

//

#include <iostream>
using namespace std; // We Cant Access Private Data In Main Function If It Is Declared private:

class Age{
private:
    int age;
};

int main(){

    Age agevariable;

    agevariable.age = 25;

}

// Constructor

/* A Constructor In C++ Is A Special 'member Function' Having The Same Name As That Of Its Class Which Is Used To
Initialize Some Valid Values To The Data Members Of An Object.it Is Executed Automatically Whenever An Object
Of A Class Is Created */

#include <iostream>
using namespace std;

class Human{
public:
    string name;
    int age;
    char sex;

    Human(string name, int age, char sex){

        cout << name << endl;
        cout << age << endl;
        cout << sex << endl;
    }
};


int main(){

    Human tayyab("Tayyab", 21, 'm');

    Human fatima("Fatima", 18, 'f');
    
}

// Pizza Order Program From Constructor Overlaoding

#include <iostream>
using namespace std;

class Burger{
public:
    string patty;
    string sauce;
    string extras; 

    Burger(string patty, string sauce, string extras){

        this -> patty = patty;
        this -> sauce = sauce;
        this -> extras = extras;

    }

    Burger(string patty, string sauce){

        this -> patty = patty;
        this -> sauce = sauce;

    }

    Burger(string patty){

        this -> patty = patty;

    }

    void Order_Burger(){

        if (!patty.empty())
        {
            cout << "Here Is Your Delicious Burger With " << patty; 
        }

        if (!sauce.empty())
        {
            cout << " & " << sauce; 
        }

        if (!extras.empty())
        {
            cout << " & With Some " << extras << endl; 
        }
        
    }
};


int main(){

    Burger first_burger("Chicken", "Ketchup", "Chips");
    Burger second_burger("Beef", "Mayo");

    first_burger.Order_Burger();
    second_burger.Order_Burger();

}
