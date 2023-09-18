//HEADER FILE ADD FUNCTIONALITY TO THE PROGRAM
#include<iostream>
//USING NAMESPACE STD MEANS WE CAN USE NAMES FOR OBJECTS AND VARIABLES
using namespace std;
//int main(). This is called a function. Any code inside its curly brackets {} will be executed.
int main(){
    cout << "C++ : OUTPUT" << endl;
    //cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text.
    cout << "Hello World!!" << endl;
    cout << "I'am Learning C++" << endl;
    //return 0 ends the main function.

    //SINGLE-LINE COMMENT
    /*MULTI-LINE COMMENT*/

    cout << "C++ : INPUT" << endl;
    cout << "Enter Name : " << endl;
    //cin is a predefined variable that reads data from the keyboard with the extraction operator (>>) to input text.
    string name;
    cin >> name;
    cout << "Enter Age : " << endl;
    int age;
    cin >> age;
    cout << "Your Name is : " << name << "\n" << "Your Age is : " << age << endl;
    return 0;
}