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

// VU Assignment 3

#include <iostream>
using namespace std;

class Employee{
private:
    string empId;
    string empName;
    int joiningYear;
    int joiningDate;
    int joiningMonth;

public:
    Employee(){
        
        empId = "<<Empty>>";
        empName = "<<Empty>>";
        joiningYear = 0;
        joiningDate = 0;
        joiningMonth = 0;

    }

    Employee(string EId, string EName, int year, int date, int month){
        
        empId = EId;
        empName = EName;
        joiningYear = year;
        joiningDate = date;
        joiningMonth = month;

    }

    void SetValues(Employee *emp2){

        empId = emp2 -> empId;
        empName = emp2 -> empName;
        joiningYear = emp2 -> joiningYear;
        joiningDate = emp2 -> joiningDate;
        joiningMonth = emp2 -> joiningMonth;

    }

    string GetId(){
        return empId;
    }

    string GetName(){
        return empName;
    }

    int GetYear(){
        return joiningYear;
    }

    int GetDate(){
        return joiningDate;
    }

    int GetMonth(){
        return joiningMonth;
    }

    void Display(Employee emp){

        cout << "Id: " << emp.GetId() << endl;
        cout << "Name: " << emp.GetName() << endl;
        cout << "Joining Year: " << emp.GetYear() << endl;
        cout << "Joining Month: " << emp.GetDate() << endl;
        cout << "Joining Date: " << emp.GetMonth() << endl;

    }

};

int main(){

    Employee em1;
    Employee em2("(BC210202268)", "Syed Muhammad Tayyab", 2022, 02, 8);

    cout << "Employee 1 Using Default Constructor: " << endl;
    em1.Display(em1);

    cout << "Employee 2 Using Parameterized Constructor: " << endl;
    em2.Display(em2);

    cout << "Employee 1 Having Employee 2 Copied Data Member Values" << endl;
    em1.SetValues(&em2);
    em1.Display(em1);

}

// VU Assignment 4

#include<iostream>
#include<string.h>

using namespace std;

class Book

{
	private:
		
		int book_id;
		string author;
		string title;
		float price;
	
public:
	
	Book(){
		
		book_id = 0;
		author = "";
		title = "";
		price = 0.0;
		
	}
	
//Setter BOOK ID

	void set_BookID(){
	
	    int id;
	    cout << "Book ID: ";
	    cin >> id;
	    this -> book_id = id;
    
	}
	
//Setter TITLE
	
	void set_Title(){
		
        string title;
        cout << "Title: ";
        getline(cin >> ws,title);
        this-> title = title;
	
	}
	
//Setter AUTHOR
	
	void set_Author(){
		
	    string aut;
	    cout <<"Author: ";
	    getline(cin >> ws,aut);
	    this-> author = aut;
	
	}
	
//Setter PRICE

	void set_Price(){

	    float p;
	    cout <<"Price: ";
	    cin >> p;
	    this-> price = p;
	
	}
	
//Getter BOOK ID

	int get_BookID(){

    return book_id;

	}
	
//Getter TITLE

	string get_Title(){
    
	return title;
	
	}
	
//Getter AUTHOR

	string get_Author(){
		
    return author;
	
	}
	
//Getter PRICE
	
	float get_price(){

    return price;
	
	}
	
	
	void add_NewBook(){
	
    	cout << "Enter book\'s Details........" << endl;
	    cout << "\n..........." << endl;
	    set_BookID();
	    set_Title();
	    set_Author();
	    set_Price();
	    cout <<"Book has been added"<< endl;
	    
	}
	
	void display_Books(){

	    cout <<"...................." << endl;
	    cout <<"Book ID: " << this -> get_BookID() << endl;
	    cout <<"Title: "<< this -> get_Title() << endl;
	    cout <<"Author: "<< this -> get_Author () << endl;
	    cout <<"Price: "<< this -> get_price () << endl;
	    cout <<"...................." << endl;
    
	}
	
	~Book(){
		
    cout <<"........................" << endl;
    cout <<"Destructor Runs"<< endl;

	}
	
};

void show(){
	
    cout <<"\nEnter 1 to Add Books"<< endl;
    cout <<"Enter 2 to Display Books\n";
    cout <<"Enter 0 to Exit :\n";
    cout <<"\n.................." << endl;
    cout <<"\nEnter Choice: ";
    
	}
	
	
int main(){
	
	int c, r = 0; char ch = 'y'; bool bb = true;
	cout << "Welcome To E Library Prototype \n" << endl;
	cout <<"......................................" << endl;
	show();
	
	cin >> c;
	
	while(bb){
		
		if(c==1){
		cout <<"\n........................." << endl;
		cout <<"How many records you want to Enter? ";
		cin >> r;
		
		}
		
	Book *s[r];
	
		switch(c){
			
		case 0:
    		exit(1);
    		break;
    		
    	case 1:
    		for(int n = 0; n<r; n++){
    			
    			Book *b = new Book();
				b -> add_NewBook();
				s[n] = b;
    			
			
			
		cout << " \n................." << endl ;
		cout << " Do you want to enter another record [ y / n ] ? " ;
		cin >> ch ;
		
		
		if(ch == 'y' || ch == 'Y'){
			
			if(n==r-1){
				
				cout << "you have reached the limit can not enter any other record " << endl;
				cout << "\n.........................................................." << endl;
				cout << "show main again (y / n)";
				cin >> ch;
				
				if ( ch == 'y' || ch == 'Y' ){
				
					show ();
					cin >> c;
					
					}
					
				else{
					
					bb = false;
					break ;

				}
				
			}
			
		}
			
		
		
		else{
			
			bb = false;
			break;
			
		}
		
	}
	
break;

	case 2:
	
	if(r == 0){
		
		cout << "................................." << endl;
		cout << "no books to display" << endl;
		cout << "................................" << endl;
		show ();
		cin >> c;
		break;
		
	}
	
	cout << ".................." << endl;
	cout << "Book \'s Details ...................." << endl;
	
		for (int x = 0; x < r ; x ++){
			
			s [ x ] -> display_Books();
	
		}
		
	cout << "\n................................." << endl;
	cout << "show main again (y / n)";
	cin >> ch;
	
	if(ch == 'y' || ch == 'Y'){
		
		show ();
		cin >> c;
	
	}
	
	else{
		
		for (int x = 0; x < r; x ++){
			
			delete s[x] ;

		}
		
	bb = false;
		break;
		
	}
	
	break;
		default:
		
			cout <<"Invalid number: ";
			break;
			
	}
	
}

}

// VU Assignment 5

#include <iostream>
#include <conio.h>
using namespace std;

class Person{

    private:
    int age;   
    char gender;
    string name;

public:

    Person(int age, char gender, string name){

        this-> age = age;
        this-> gender = gender;
        this-> name = name;

    }
    
    int getAge(){

        return age;

    }

    char getGender(){

        return gender;

    }

    string getName(){

        return name;

    }

    virtual void display() = 0;

};

class Student: public Person{

    private:

        string studentId, degreeProgram;
        float feePerSemester;

    public:

        Student(string studentId, string degreeProgram, float feePerSemester):Person(21, 'M', "Syed Muhammad Tayyab Mehdi Jafri"){

            this-> studentId = studentId;
            this-> degreeProgram = degreeProgram;
            this-> feePerSemester = feePerSemester;

        }

        void display(){

            cout <<"-------------------------------" << endl;
            cout <<" ----- Student Record ----- " << endl;
            cout <<"--------------------------------" << endl;
            cout <<"Name: " << getName() << endl;
            cout <<"Gender:  " << getGender() << endl;
            cout <<"Age: " << getAge() << endl;
            cout <<"Student Id: " << studentId << endl;
            cout <<"Degree Program: " << degreeProgram << endl;
            cout <<"Fee Per Semester: " << feePerSemester << endl;
            cout <<"--------------------------------" << endl;

        }

};

class Teacher: public Person{

    private:

        float salary;
        int allocatedStudents;

    public:

        Teacher(float salary, int allocatedStudents):Person(40, 'M', "Shafiq-ur-Rehman"){

            this -> salary = salary;
            this -> allocatedStudents = allocatedStudents;

        }

        void display(){

            cout <<" ----- Teacher Record ----- " << endl;
            cout <<"--------------------------------" << endl;
            cout <<"Name: " << getName() << endl;
            cout <<"Gender:  " << getGender() << endl;
            cout <<"Age: " << getAge() << endl;
            cout <<"Number Of Allocated Students: " << allocatedStudents << endl;
            cout <<"Salary: " << salary << endl;
            cout <<"--------------------------------";

        }

};

main(){

    Student *Stu;
    Teacher *Tea;

    Stu = new Student("BC210202268", "BSCS", 14000);
    Tea = new Teacher(100000 , 200);
    Stu -> display();
    Tea -> display();
    getch();
    
    return 0;

}

// VU Assignment 6

#include <iostream>
using namespace std;

class Employee{

private:

    string Employee_Name;
    int Employee_ID;
    int Employee_Basic_Salary;
    int Conveyance_Allowance;
    int House_Rental_Allowance;
    int Tax_Deduction;
    int Employee_Gross_Salary;


public:

    //Setter

    void Set_Employee_Name(string Name){

        Employee_Name = Name;

    }

    void Set_Employee_ID(int Id){

        Employee_ID = Id;

    }

    void Set_Employee_Basic_Salary(int Salary){

        Employee_Basic_Salary = Salary;

    }

    // Getter

    string Get_Employee_Name(){

        return Employee_Name;

    }

    int Get_Employee_ID(){

        return Employee_ID;

    }

    int Get_Employee_Basic_Salary(){

        return Employee_Basic_Salary;

    }

    // Formula Functions

    int Calculate_Conveyance_Allowance(){

        Conveyance_Allowance = 35 * Employee_Basic_Salary / 100;

        return Conveyance_Allowance;

    }

    int Calculate_House_Rental_Allowance(){

        House_Rental_Allowance = 50 * Employee_Basic_Salary / 100;

        return House_Rental_Allowance;

    }

    int Calculate_Tax(){

        Tax_Deduction = 1.5 * Employee_Basic_Salary / 100;

        return Tax_Deduction;

    }

    int Calculate_Net_Payable_Salary(){

        Employee_Gross_Salary = Employee_Basic_Salary + Conveyance_Allowance + House_Rental_Allowance - Tax_Deduction;

        return Employee_Gross_Salary;

    }


};

int main(){

    
    int Id;
    int Salary;
    string Name;

    Employee *emp_v = new Employee[3];


    cout << "Assignment Is Submitted By (BC210202268)" << endl;

    cout  << "---------------------------------------------" << endl;

    for (size_t i = 0; i < 3; i++){

        cout << "Enter Employee Id: ";
        cin >> Id;
        emp_v[i].Set_Employee_ID(Id);

        cout << "Enter Employee Name: ";
        cin >> Name;
        emp_v[i].Set_Employee_Name(Name);

        cout << "Enter Employee Salary: ";
        cin >> Salary;
        emp_v[i].Set_Employee_Basic_Salary(Salary);

        cout << "-----------------------------------------------" << endl;

    }

    cout << "-----------------------------------------------" << endl;

    for (size_t i = 0; i < 3; i++){

        cout << "Employee Id: " << emp_v[i].Get_Employee_ID() << endl;

        cout << "Employee Name: " << emp_v[i].Get_Employee_Name() << endl;

        cout << "Employee Salary: " << emp_v[i].Get_Employee_Basic_Salary() << endl;

        cout << "Employee House Rental Allowance: " << emp_v[i].Calculate_House_Rental_Allowance() << endl;

        cout << "Employee Conveyance Allowance: " << emp_v[i].Calculate_Conveyance_Allowance() << endl;

        cout << "Employee Tax Deduction: " << emp_v[i].Calculate_Tax() << endl;

        cout << "Employee Gross Salary: " << emp_v[i].Calculate_Net_Payable_Salary() << endl;

        cout << "-----------------------------------------------" << endl;

    }
    
    delete []emp_v;

}

// VU Assignment 7

#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int size, number, limit, sizet;

class Node{

private:
    
    int marks;
    Node* nextNode;

public:

    void setMarks (int m){

    marks = m;

    }

    int getMarks(){

    return marks;
    
    }

    void setNext (Node* a){

    nextNode = a;
    
    }

    Node* getNext(){

    return nextNode;

    }

};

class List{

private:

    Node* headNode;
    Node* currentNode;
    Node* lastCurrentNode;

public:

    List(){

    headNode = NULL;
    currentNode = NULL;
    lastCurrentNode = NULL;
    
    }

    int get (Node* ptr){

    return ptr -> getMarks();
    
    }

    void add(int n){

    Node* newNode = new Node;
    newNode ->setMarks (n);
    newNode ->setNext (NULL);
    
    if(headNode == NULL){
        
        headNode = newNode;
        currentNode = newNode;
        lastCurrentNode = newNode;

    }
    
    else{
        
        lastCurrentNode -> setNext (newNode);
        lastCurrentNode = newNode;

    }

    cout<<n<<" Inserted into Linked List\n";

    }

    Node* next (Node* ptr){

    return ptr -> getNext();

    }

    friend void traverse();
    friend List addNode();

}L;

void traverse(){

    int count=1, a=1;
    Node* ptr = L.headNode;

    while (ptr != NULL){

        if(count > sizet-limit){

        cout<<"Element "<<a++<<" "<<L.get(ptr)<<"\n";

        }

        ptr = L.next(ptr);
        count++;

    }

}

List addNode(){

    srand(time(0));
    number = rand ( ) %51 + 50;
    L.add(number);

}

main(){
    
    srand(time(0));

    sizet=rand()%6+15;

    cout<<"Randomly generated List Size: "<<sizet<<"\n\n";
    
        for(int i=1;i<=sizet;i++){

        Sleep(1000);
        addNode();
    
    }
    
    cout<<"\nEnter Number of Last Elements you want to see: ";
    
    cin>>limit;

    cout<<"\n\n";
    
    traverse();
    
    getch();

    return 0;
					
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

    else if (savings >= 500)
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

// A Basic Calculator 1

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

// A Basic Calculator 2

#include <iostream>
using namespace std;

int main(){

float number1, number2;
char operation, y_n;

cout << "Enter First Number: ";
cin >> number1;

cout << "Enter Second Number: ";
cin >> number2;

cout << "What Operation Do You Want To Do On These Numbers (+ - * /) ? ";
cin >> operation;

cout << "---------------------------------------------------------------------" << endl;

while (operation != '+' || operation != '-' || operation != '*' || operation != '/'){

    if (operation == '+'){
        
        cout << "Your Answer Is " << number1 + number2 << endl;
        break;

    }

    else if (operation == '-'){
        
        cout << "Your Answer Is " << number1 - number2 << endl;
        break;

    }

    else if (operation == '*'){
        
        cout << "Your Answer Is " << number1 * number2 << endl;
        break;

    }

    else if (operation == '/'){
        
        cout << "Your Answer Is " << number1 / number2 << endl;
        break;

    }

    else

        cout << "Invalid Operation Try Again !" << endl;
        cin >> operation;

}


cout << "---------------------------------------------------------------------" << endl;


cout << "Do You Want To Find Maximum ? Type (Y) For Yes And (N) For No. ";
cin >> y_n;

while (y_n != 'Y' || y_n != 'y' || y_n != 'N' || y_n != 'n'){


    if (y_n == 'Y' || y_n == 'y'){

        cout << "Type Your First Number: ";
        cin >> number1;

        cout << "Type Your Second Number: ";
        cin >> number2;

        if (number1 > number2){

            cout << number1 << " Is Greater Than " << number2 << endl;

        }

        else if (number2 > number1){

            cout << number2 << " Is Greater Than " << number1 << endl;

        }

        else

            cout << "Both Are Equal" << endl;

        break;

    }


    else if (y_n == 'N' || y_n == 'n'){

        cout << "Thanks For Using Calculator BYE :)" << endl;

        break;

    }


    else

        cout << "Invaild Character, Try Again" << endl;
        cin >> y_n;

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

// ACSII Code Checker

#include <iostream>
using namespace std;

int main(){

    char c1, c2, c3, c4, c5;

    cout << "Enter Characters" << endl;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    cout << "The ACSII Number Of Your Character Is " << "c1 = " << int(c1) << " c2 = " << int(c2) <<
            " c3 = " << int(c3) << " c4 = " << int(c4) << " c5 = " << int(c5);

}

// Student Marks Program From (Array) (New) (Delete)

#include <iostream>
using namespace std;

int main(){

int no_of_sub;

cout << "\nHow Many No Of Subject You Want To Print ? " << endl;
cin >> no_of_sub;

string *P_Subject = new string[no_of_sub];
float *P_Marks = new float[no_of_sub];

cout << "Write Subject Names & Marks" << endl;

for (size_t i = 0; i < no_of_sub; i++){

    cout << "---------------------" << endl;

    cout << "Subject Number " << i + 1 << " Is " << endl;
    cin >> P_Subject[i];

    cout << P_Subject[i] << " Marks Are " << endl;
    cin >> P_Marks[i];

}

cout << "Here Is List Of All The Subjects With There Marks" << endl;
cout << "---------------------------------------------------------------" << endl;

for (size_t i = 0; i < no_of_sub; i++){

    cout << "The Marks Of " << P_Subject[i] << " Are " << P_Marks[i] << endl; 
    cout << "---------------------------------------------------------------" << endl;

}

delete[] P_Subject;
P_Subject = nullptr;

delete[] P_Marks;
P_Marks = nullptr;


}

/*-----------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------*/

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

// Some Output Formatting

#include <iostream>
#include <iomanip> // Uses For (setw)
using namespace std;

main(){

    int set_width = 10;

    cout << setw(set_width) << "Tayyab " << setw(set_width) << "21 " << setw(set_width) << "Karachi" << endl; // (setw) set width in output
    cout << setw(set_width) << "John " << setw(set_width) << "22 " << setw(set_width) << "Newyork" << endl;
    cout << setw(set_width) << "Ali " << setw(set_width) << "23 " << setw(set_width) << "Lahore" << endl << endl;

    cout << left; // The Data Is Right Alligned By Default, We Can Allign It Left By This.
    cout << setw(set_width) << "Tayyab " << setw(set_width) << "21 " << setw(set_width) << "Karachi" << endl;
    cout << setw(set_width) << "John " << setw(set_width) << "22 " << setw(set_width) << "Newyork" << endl;
    cout << setw(set_width) << "Ali " << setw(set_width) << "23 " << setw(set_width) << "Lahore" << endl << endl;

    cout << left;
    cout << setfill('*'); // Fill The Empty Places WIth Character.
    cout << setw(set_width) << "Tayyab " << setw(set_width) << "21 " << setw(set_width) << "Karachi" << endl;
    cout << setw(set_width) << "John " << setw(set_width) << "22 " << setw(set_width) << "Newyork" << endl;
    cout << setw(set_width) << "Ali " << setw(set_width) << "23 " << setw(set_width) << "Lahore" << endl << endl;

}

//

#include <iostream>
#include <iomanip>
using namespace std;

main(){

    int num1 = 1;
    int num2 = 2;

    cout << (num2 == num1) << endl << endl;

    cout << boolalpha; // Instead Of Output Of 0 and 1 Boolalpha Gives Output Of (true and false)
    cout << (num2 == num1);

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

#include <iostream> // .Size Is Used To Check The Number Of Character In A String (Same As .Length Function)
using namespace std;

int main(){

    string name = "Tayyab";

    cout << name.size();

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

#include <iostream>
using namespace std;

int main() {

int count = 5;
int total_int[count];
int sum = 0;

for (size_t i = 0; i < count; i++){

    cout << "Write Number " << i + 1 << ": ";
    cin >> total_int[i];

    sum += total_int[i];
    
}

cout << "======================================" << endl;

cout << "The Total Sum Is " << sum << endl;
cout << "The Average Is " << sum / count << endl;


}

//

#include <iostream>
using namespace std;

int main() {

int table_of;
int count = 10;

cout << "Which Number's Table Do You Want ?" << endl;
cin >> table_of;

cout << "The Table Of " << table_of << " Is " << endl;

for (size_t i = 1; i <= count; i++){

    cout << table_of << " X " << i << " = " << table_of * i << endl;

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

// Reference

#include <iostream>
using namespace std; // Reference (&) Aka Address Is Used To Give Reference To Variable

int main(){

    int number1 = 10;
    double number2 = 1.5;

    int &number1Ref = number1;
    double &number2Ref = number2;

    cout << number1 << endl;
    cout << number2 << endl;

    cout << "====================" << endl;

    cout << number1Ref << endl;
    cout << number2Ref << endl;

    cout << "====================" << endl;

    // Modify The Reference To Change The Main Value

    number1Ref = 100;
    number2Ref = 5.5;

    cout << number1 << endl;
    cout << number2 << endl;

    cout << "====================" << endl;

    cout << number1Ref << endl;
    cout << number2Ref << endl;

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

//

#include <iostream>
using namespace std;

int main(){

    int number1 = 10;
    int *number1Ptr = &number1;

    cout << number1Ptr << endl;
    cout << *number1Ptr << endl;
    
}

//

#include <iostream>
using namespace std;

// Pointers Concept From https://youtu.be/C0RfUVNTkQ4

int main(){

    int a = 10;
    int *p_a = &a;
    int **p_p_a = &p_a;

    cout << "Value Of 'a' From Its Variable Is " << a << endl;

    cout << "Value Of 'a' From Its Pointer Is " << *p_a << endl;

    cout << "Address Of 'a' From Its Variable Is " << &a << endl;

    cout << "Address Of 'a' From Its Pointer Is " << p_a << endl;

    cout << "Value Of 'a' From Pointer Pointing Towards 'Pointer Of a' Is " << **p_p_a << endl;

    cout << "Address Of 'a' From Pointer Pointing Towards 'Pointer Of a' Is " << *p_p_a << endl;

    cout << "Address Of 'Pointer Of a' Is " << p_p_a << endl;

}

// Dynamic Memory Allocation Using (NEW) & (DELETE) In Pointers On 10:27 https://youtu.be/8jLOx1hD3_o  And https://youtu.be/0duhNmu8zgA

//

#include <iostream>
using namespace std;

int main(){

    int *ptr1; // It Is Bad Practice To Leave Pointer Uninntialized First Then And Then Innitilize In Next Line, The Program Will Crash.
    *ptr1 = 10;

    cout << "PTR Is " << *ptr1 << endl;
    cout << "Done" << endl;

    
}

//

#include <iostream>
using namespace std;

int main(){

    int *ptr1 = nullptr; // It Is Bad Practice To Initialize (nullptr) First Then And Then Initilize In Next Line, The Program Will Crash.
    *ptr1 = 10;

    cout << "PTR Is " << *ptr1 << endl;
    cout << "Done" << endl;

    
}

//

#include <iostream>
using namespace std;

int main(){

    int *ptr1;
    ptr1 = new int; // (new) Is Used To Allocate Memory Space In Heap
    *ptr1 = 10;

    cout << "Value Is " << *ptr1 << endl;

    delete ptr1; // (delete) Is Used To Deallocate Memory Space In Heap
    ptr1 = nullptr; // Always (delete) The Pointer And Set The Ptr To (nullptr) After Use In Dynamic Memory Allocation
    

}

//

#include <iostream>
using namespace std;

int main(){

    int *ptr1 = new int; // We Can Initialize (New) Like This Too.
    *ptr1 = 10;

    cout << "Value = " << *ptr1 << endl;
    cout << "Address = " << ptr1 << endl;

    delete ptr1;
    ptr1 = nullptr;


    if (ptr1 == nullptr) // This Is For Checking If Ptr Is Null Or Not.
    {

        cout << "Ptr Is Null" << endl;
    
    }

    else
    {

        cout << "Ptr Is Filled" << endl;
    
    }

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

//

#include <iostream>
using namespace std;

int main(){

    string cars[] = {"Audi", "Lambo", "Mercedes", "Suzuki" };

    size_t count = size(cars);

    for (int i = 0; i < count; i++){

        cout << " Value " << i << " = "<< cars[i] << endl;
    
    }
    
}

#include <iostream>
using namespace std;

int main(){

    int array[10];
    int j;

    for (int j = 0; j < 10; j++){
        
        array[j] = j * 2;

        cout << array[j] << endl;


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

// Tuple
// A Tuple Is An Object That Can Hold A Number Of Elements. The Elements Can Be Of Different Data Types.

#include <iostream>
#include <tuple>
using namespace std;

int main(){

    tuple <int, float, char, string> example(5, 5.5, 'T', "Tayyab");

    cout << get<0>(example) << endl;
    cout << get<1>(example) << endl;
    cout << get<2>(example) << endl;
    cout << get<3>(example) << endl;

}

// Object Oriented Programming

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

void Function()
{
    cout << "This Is Function" << endl;
}

int main(){

    Function();
    
}

//

#include <iostream>
using namespace std;

void Sum_function(int a, int b)
{
    cout << "The Sum Is " << a + b << endl;
}

int main(){

    Sum_function(20, 30);
    
}

//

/* Function Overloading Is A Function With Same Name And Instruction With Different Set Of Parameters */ 

#include <iostream>
using namespace std;

void Function()
{
    cout << "Hello" << endl;
}

void Function(string name)
{
    cout << "Hello " << name << endl;
}

int main(){

    Function();
    Function("Tayyab");

}

// Structure + Function

#include <iostream>
using namespace std;

struct Data{

    string name;
    char sex;
};

void Pdata(Data input){

    cout << "Your Name Is " << input.name << endl;

    cout << "Your Sex Is " << input.sex << endl;

}

int main(){

    Data student;

    cout << "What Is Your Name ?" << endl;
    getline(cin, student.name);

    cout << "What Is Your Sex ?" << endl;
    cin >> student.sex;

    Pdata(student);

}

// (Const) Is Used To Make Variables Constant Value So There Value Can Not Be Changed

#include <iostream>
using namespace std;


int main(){

    const int number = 5;

}

// Class

/* A Class Is A User Defined Data Type That We Can Use In Our Programs And It Works As An Object Constructor
or A Blueprint For Creating Objects */

#include <iostream> 
using namespace std;

class FirstClass{
public:
    void Human(string name){
            cout << "Hello I Am Human My Name Is " << name;
    }
};

int main(){

    FirstClass tayyab;

    tayyab.Human("Tayyab Mehdi");

}

//

#include <iostream>
using namespace std;

class FirstClass{
public:
    string name;

    void Human(){
            cout << "Hello I Am Human My Name Is " << name;
    }
};

int main(){

    FirstClass tayyab;

    tayyab.name = "Tayyab";
    tayyab.Human();

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
Initialize Some Valid Values To The Data Members Of An Object. It Is Executed Automatically Whenever An Object
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

// Pizza Order Program From Constructor Overloading

#include <iostream>
using namespace std;

class Burger{
public:
    string patty;
    string sauce;
    string extras; 

    Burger() = default; //It Is Important To Set Default Constructor Otherwise There Will Be Problems

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
    Burger third_burger;

    first_burger.Order_Burger();
    second_burger.Order_Burger();

}

// Setter And Getter

#include <iostream>
using namespace std;

class Calculate{

private:
    int number1 = 10;
    int number2 = 20;

public:

    //Constructors

    Calculate() = default;

    int Calculator(int Para_number1, int Para_number2){

        number1 = Para_number1;
        number2 = Para_number2;

        int result = number1 + number2;

        cout << "Total Is " << result << endl;

    }

    // Getter Is Used To Show PRIVATE Members And Variables In Main Public Section

    int get_number1(){
        cout << number1 << endl;
    }

    int get_number2(){
        cout << number2 << endl;
    }

    // Setter Is Used To Change Private Members And Variables In Main Public Section

    int set_number1(int setter_number1){

        number1 = setter_number1;

    }

    int set_number2(int setter_number2){

    number2 = setter_number2;

    }

};


int main(){

    Calculate Final_answer;

    Final_answer.get_number1(); // number1 From Private Is 10, We Use Getter To Show Its Value In Main Funtion
    Final_answer.get_number2(); // number2 From Private Is 20, We Use Getter To Show Its Value In Main Funtion

    Final_answer.Calculator (50, 50);

    Final_answer.set_number1(5); // We Changed number1 From 10 To 5 From Private Using Setter Function
    Final_answer.set_number2(5); // We Changed number2 From 20 To 5 From Private Using Setter Function

    Final_answer.get_number1(); // New Values With Help Of Setter And Getter
    Final_answer.get_number2(); // New Values With Help Of Setter And Getter

    Final_answer.Calculator (100, 100);


}

// Inheritance

/* Inheritance Is A Feature Or A Process In Which, New Classes Are Created From The Existing Classes.
The New Class Created Is Called “Derived Class” Or “Child Class” And The Existing Class Is Known As The “Base Class” 
Or “Parent Class */

#include <iostream>
using namespace std;

class Person {  // Parent Class

private:
    
    int age;
    string name;

public:

    // Setter

    void SetAge(int S_Age){

        age = S_Age;

    }

    void SetName(string S_Name){

        name = S_Name;

    }

    // Getter

    void GetAge(){

        cout << age << endl;

    }

    void GetName(){

        cout << name << endl;

    }

};

class Student : public Person{ // Child Class

private:
    
    int roll_no;
    string subject;

public:

    // Setter

    void SetRoll_no(int R_no){

        roll_no = R_no;

    }

    void SetSubject(string Subj){

        subject = Subj;

    }

    // Getter

    void GetRoll_no(){

        cout << "Student Roll No Is " << roll_no << endl;

    }

    void GetSubject(){

        cout << "Student Subject Is " << subject << endl;

    }

};


int main(){

    Person Person1;
    Student Student1;

    // Parent Class Person

    Person1.SetAge(21);
    Person1.SetName("Tayyab");

    Person1.GetAge();
    Person1.GetName();

    cout << "-----------------------------------------" << endl;

    // Child Class Student

    Student1.SetAge(21);
    Student1.SetName("Syed Muhammad Tayyab");
    Student1.SetRoll_no(12345);
    Student1.SetSubject("Maths");

    Student1.GetAge();
    Student1.GetName();
    Student1.GetRoll_no();
    Student1.GetSubject();

}

// Friend Function

/*A Function That Has Access To A Class's Private, Protected, And Public Members Is Referred To As A Friend Function.
Within The Class's Body, The Friend Keyword Is Used To Declare The Friend Function.*/

#include <iostream>
using namespace std;

class B; // Its Important To Declare All Classes Before Calling Friend Function

class A{

private:
    
    int Num1;

public:

    void SetNum1(int N1){

        Num1 = N1;

    }

    void GetNum1(){

        cout << Num1 << endl;

    }

    friend void FriendFunction(A, B); // Class Names Are Used As Argument In Friend Function

};

class B{

private:
    
    int Num2;

public:

    void SetNum2(int N2){

        Num2 = N2;

    }

    void GetNum2(){

        cout << Num2 << endl;

    }

    friend void FriendFunction(A, B);

};


void FriendFunction(A ob1, B ob2){

    cout << "The Total Of Number 1 And Number 2 Is " << ob1.Num1 + ob2.Num2;

}


int main(){

A number1;
B number2;

number1.SetNum1(100);
number2.SetNum2(200);

number1.GetNum1();
number2.GetNum2();

cout << "------------------------------------" << endl;

FriendFunction(number1, number2);

}


// Data Structures

// Stack

#include <iostream>
using namespace std;

class Stack{

private:

    int top;
    int array[5];

public:

    Stack(){

        top = -1;
        for (size_t i = 0; i < 5; i++){

            array[i] = 0;
        
        }

    }


    bool IsEmpty(){

        if (top == -1){

            return true;

        }

        else

            return false;
        
    }


    bool IsFull(){

        if (top == 4){

            return true;

        }

        else

            return false;

    }


    void Push(int push_value){

        if(IsFull()){

            cout << "Stack Overflow" << endl;
 
        }

        else{

            top++;
            array[top] = push_value;
            cout << "You Sucessfully Pushed The Value " << push_value << " In The Stack" << endl;
        }

    }


    int Pop(){

        if(IsEmpty()){

            cout << "Stack Underflow" << endl;
            return 0;

        }

        else{

            int PopValue = array[top];
            array[top] = 0;
            top--;
            return PopValue;

        }

    }


    int Count(){

        return top+1;

    }


    int Peek(int peek_value){

        if (IsEmpty()){
        
            cout << "The List Is Empty" << endl;

        }

        else

            peek_value--;
            return array[peek_value];
        

    }


    void Change(int change_index, int change_value){

        array[change_index] = change_value;

        cout << "Value Changed At Location " << change_index << endl;

    }


    void Display(){

        cout << "Values In Stack Are" << endl;

        for (int i = 4; i >= 0; i--){

            cout << array[i] << endl;
        
        }
        

    }


};

int main() {

    Stack v1;
    int option, position, value;

    do{

        cout << "\nWhat Operation Do You Want To Perform ? Select From Below" << endl;
        cout << "(1) For Push()" << endl;
        cout << "(2) For Pop()" << endl;
        cout << "(3) For isEmpty()" << endl;
        cout << "(4) For isFull()" << endl;
        cout << "(5) For peek()" << endl;
        cout << "(6) For count()" << endl;
        cout << "(7) For change()" << endl;
        cout << "(8) For display()" << endl;
        cout << "(9) For Clear Screen" << endl;
        cout << "(0) To Exit" << endl << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            
            cout << "You Sucessfully Exited The Program" << endl;
            break;

        case 1:

            cout << "Write The Value You Want To Push" << endl;
            cin >> value;
            v1.Push(value);
            break;

        case 2:

            v1.Pop();
            cout << "You Sucessfully Poped The Value In The Stack" << endl;
            break;

        case 3:

            if(v1.IsEmpty()){

                cout << "Stack Is Empty" << endl;

            }

            else

                cout << "Stack Is Not Empty" << endl;

            break;

        case 4:

            if(v1.IsFull()){

                cout << "Stack Is Full" << endl;

            }

            else

                cout << "Stack Is Not Full" << endl;

            break;

        case 5:

            cout << "Write The Value You Want To Peak" << endl;

            cin >> position;
            cout << "The Value Is " << v1.Peek(position) << endl;
            break;

        case 6:

            cout << "The Total Count Of Stack Is " << v1.Count() << endl;
            break;

        case 7:

            cout << "Write Value You Want To Change" << endl;
            cin >> value;

            cout << "Write Poistion You Want To Change" << endl;
            cin >> position;

            v1.Change(position, value);

            cout << "The New Value Is " << value << endl;
            break;

        case 8:

            cout << "Here Are All The Values Of Stack" << endl;
            v1.Display();
            break;

        case 9:

            system("cls");
            break;
        
        default:

            cout << "Type The Option From 0 To 9" << endl;
            break;
        }

    } while (option != 0);
    

}
