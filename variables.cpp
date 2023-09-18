#include<iostream>
using namespace std;

int main(){
    cout << "C++ : VARIABLES" << endl;
    cout << "Variables are containers for storing data values." << endl;
    //int
    int Num = 26;
    cout << Num << endl;
    //double
    double Point = 26.10;
    cout << Point << endl;
    //char
    char Word = 'K';
    cout << Word << endl;
    //string
    string Name = "Kanishk Raj Singh Jhala";
    cout << Name << endl;
    //bool
    bool MyBool = true;//false
    cout << MyBool << endl;
    //const
    const double Pi = 3.14;
    //Pi = 22; can't perform
    cout << Pi << endl;

    cout << "Enter Two Numbers : " << endl;
    int x,y;
    cin >> x >> y;
    int sum  = x + y;
    int diff = x-y;
    int mul = x*y;
    int div = x/y;
    cout << "Sum is : " << sum << endl;
    cout << "Diff is : " << diff << endl;
    cout << "Mul is : " << mul << endl;
    cout << "Div is : " << div << endl;

    return 0;
}