#include<iostream>
using namespace std;

int main(){

    int num;
    
    /* Input number from user */
    cout << "Enter any number: ";
    cin >> num;
    

    if(num > 0){
        cout << "Number is POSITIVE" << endl;
    }
    else if(num < 0){
        cout << "Number is NEGATIVE" << endl;
    }
    else{
        cout << "Number is ZERO" << endl;
    }

    return 0;
}


/* Output

Enter any number: 5
Number is POSITIVE

Enter any number: 0
Number is ZERO

Enter any number: -8
Number is NEGATIVE

*/