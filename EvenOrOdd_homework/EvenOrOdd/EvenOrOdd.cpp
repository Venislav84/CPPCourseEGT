#include <iostream>
using namespace std;

void evenOrOdd() {
    int num;
    cout << "Enter a sequence of positive integers numbers " << endl;
    while (cin >> num){
        if (num > 0) {
            if (num % 2 == 0) {
                cout << "Number is even: " << num << endl;
            }
            else {
                cout << "Number is odd: " << num << endl;
            }
        }
        else {
            cout << "Number: " << num << " is incorrect. Please enter only a positive numbers" << endl;
        }
        
    }
}

int main()
{
    evenOrOdd();

    return 0;
}


