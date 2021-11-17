#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int add(int a, int b) {

    int sum = a+b;
    return sum;

}


int sub(int a, int b) {

    int answer = a+b;
    return answer;

}

int mul(int a, int b) {

    int product = a+b;
    return product;

}

int divide(int a, int b) {

    int ans = a+b;
    return ans;

}







int main() {
    char operation;
    double r1;
    int n1,n2;
    //char to store a max of 10 characters
    std::string helpCommand ;

    cout<<"Enter the operation you want to perform : \n\n";
    cin>>operation;

    cout<<"Enter the first integer : \n";
    cin>>n1;

    cout<<"Enter the second integer : \n";
    cin>>n2;


    if(operation == '+') {

        r1 = add(n1,n2);
        cout<<"The result after addition is "<<r1<<"\n";

    }

    else if(operation == '-') {

        r1 = sub(n1,n2);
        cout<<"The result after subtraction is "<<r1<<"\n";
    }

    else if(operation == '*') {

    r1 = mul(n1,n2);
        cout<<"The result after multiplication is "<<r1<<"\n";
    }

    else if(operation == '/') {

        r1 = divide(n1,n2);
        cout<<"The result after division is "<<r1<<"\n";
    }

    else {

        cout<<"Sorry, the input recieved was invalid. Please try again :) \n\n";
        
        

    }
}