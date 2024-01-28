
//=======================================================================================================
//                                                                                                      =
//............................Pratice of coding C++.....................................................=
//                                                                                                      =
//=======================================================================================================

#include <iostream>
using namespace std;
// .........Chapter Functions...............

//A function is name vlock code that perform some actions 
// to execute a function we wil call it by its name 
// a program may need to change the same piece of code again and again at various places 

// return_type function name (parameters)

// only data tpe of prototype is written in prototype


//''''''''''''''''Pass by value..............

// value of actual parameter are copied to thw value of formal parameter the orignal perameters 

//      .............Maximum number Code .............................
void max(int a, int b) {

    if (a > b) {
        cout << " maximum number is " << a << endl;
    }
    else
        cout << " maximum number is " << b << endl;

}

//      ...............Code to display table................

void table(int n) {
    cout<< endl << endl;
    int c;
    for (c = 1;c <= 10;c++) {
        cout << n << " * " << c << " = " << n * c << endl;
    }
}

void factorial(int n) {
    int i;
    long fact;
    fact = 1;
    for (i = 1;i <= n;i++) {
        fact *= i;

    }

    cout << " Factorial of " << n << " is : " << fact;
}

// code to check prime even or odd 

void chk(int n) {

    int c, i;
    c = 0;
    for (i = 2;i <= n;i++) {
        if (n % i == 0) {
            c = 1;
        }
    }
    if (n % 2 == 0 && c == 0) {
        cout << n << " is a prime even number";

    }
    else if (n % 2 != 0 && c == 0) {
        cout << n << " is a odd prime number";
    }
    else if (n % 2 == 0 && c!= 0) {
        cout << n << " is only and even number not prime number";
    }
    else if (n % 2 != 0) {
        cout << n << " is onlly odd, not prime number";
    }
    else
        cout << " Not a prime number,";
}

//'''''''''''''''''''''''''''''''''''''''''''''''''
//...........Pass by refrence....................
//................................................
//''''''''''''''''''''''''''''''''''''''''''''''''

// the adress of actual perameter will pass to the called function 

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
//'''''''''''''''''''''''''''''''''''''''''''''''''
//...........Function and array....................
//................................................
//''''''''''''''''''''''''''''''''''''''''''''''''


// when we pass an array to a function we will only pass its name
int show(int arr[]) {

    int j ;
    int e = 0;

    for (j = 1;j <= 5;j++) {
        cout << arr[j] << "\t";

        if (arr[j] % 2 == 0) {
            e++;
        }
    }
    return e;
}

int max(int a, int b, int& output);
int main()
{
    // to find maximum number we wil do

    int x, y;
    cout << " Enter two numbers: ";
    cin >> x >> y;
    max(x, y);


    // to write the table of user desire using pass by value
    cout << endl;


    int num;
    cout << " Enter a number to witch you want to write a table :  " ;
    cin >> num;
    cout << endl;
    table(num);


    // to call factorial
    factorial(9);
    cout << endl;
    // to check the nature of a number
    cout << " ............Nature Of Number.............."<<endl;
    chk(num);
    //swaping two numbers

    cout << endl;
    int a = 5, b = 10;
    swap(a, b);
    std::cout << "x: " << x << ", y: " << y; // Output: x: 10, y: 5

    cout << endl;
    // pass an array
    cout << "===================================Array=================="<<endl;
    int Array[6], i,n;
    cout << " enter 5 integers : " << endl;
    for (i = 1;i <= 5;i++) {
        cin >> Array[i];
         

    }

    n=show(Array);
    cout << endl;
    cout << "The array contain " << n << "even numbers" << endl;

    cout << "=============================================";
   // using output
    int in, out, output;
    in = 5;
    out = 9;

    max(in, out, output);
    cout << "Output is : " << output << endl;

}
//=======================================================================================================
//                                                                                                      =
//............................using out put of a funtion................................................=
//                                                                                                      =
//=======================================================================================================

int max(int a, int b, int& output) {

    if (a > b) {
        output = a;
    }
    else {
        output = b;
    }
}
