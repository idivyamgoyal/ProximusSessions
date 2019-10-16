#include<iostream>
using namespace std;

// main() function
int main(){

    int num, flag = 1;
    cout << "Enter number: ";
    cin >> num;

    /* loop for checking prime number, if a number is divisible by any number except 1 and itself, 
     then it is not a prime number */
    for(int i = 2; i < num / 2; i++){

        // if this condition is true then flag value will be 0 and this implies that the number is not prime
        if(num % i == 0){
            flag = 0;
            break;
        }
    }

    if(flag)
        cout << num << " is prime number." << endl;
    else
        cout << num << " is not prime number." << endl;

    return 0;
}

/* Output

Enter number: 5
5 is prime number.

Enter number: 8
8 is not prime number.

*/