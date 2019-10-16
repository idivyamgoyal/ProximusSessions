#include<iostream>
#include<math.h>
using namespace std;

int main(){

    // a, b, c are parameters of ax^2 + bx + c = 0
    float a, b, c, discriminant, root1, root2;

    cout << "Enter values of a, b, c of quadratic equation: " << endl;
    cout << "a = "; cin >>a;
    cout << "b = "; cin >>b;
    cout << "c = "; cin >>c;

    // calculating discriminant for determining nature of roots
    discriminant = ((b * b) - (4 * a * c));

    if(discriminant < 0)
        cout << "Roots are imaginary!" << endl;
    else if(discriminant == 0){
        cout << "Roots are equal!" << endl;
        root1 = (-b) / (2 * a); 
        root2 = (-b) / (2 * a);
        cout << "Root1: " << root1 << " Root2: " << root2 << endl;
    }
    else{
        cout << "Roots are different!" << endl;
        root1 = (-b + sqrt(discriminant)) / (2 * a); 
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root1: " << root1 << " Root2: " << root2 << endl;
    }
    
    return 0;
}


/* Output

Enter values of a, b, c of quadratic equation: 
a = -1
b = 1
c = 2
Roots are different!
Root1: -1 Root2: 2

Enter values of a, b, c of quadratic equation: 
a = 1
b = 1
c = 2
Roots are imaginary!

Enter values of a, b, c of quadratic equation: 
a = 4
b = 4
c = 1
Roots are equal!
Root1: -0.5 Root2: -0.5

*/