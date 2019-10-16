#include<iostream>
using namespace std;

// main() function
int main(){


    int num1, num2, num3, max;

    /* Input three numbers from user */
    cout << "Enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    

    if(num1 > num2){

        if(num1 > num3){
            /* If num1 > num2 and num1 > num3 */
            max = num1;
        }
        else{
            /* If num1 > num2 but num1 > num3 is not true */
            max = num3;
        }
    }
    else{
        
        if(num2 > num3){
            /* If num1 is not > num2 and num2 > num3 */
            max = num2;
        }
        else{
            /* If num1 is not > num2 and num2 > num3 */
            max = num3;
        }
    }
    
    /* Print maximum value */
    cout << "Maximum among all three numbers: " << max << endl;

    return 0;
}


/* Output

Enter three numbers: 
5
1
7
Maximum among all three numbers: 7

*/