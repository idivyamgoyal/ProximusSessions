/*
Write a Program which can accept elements in order of increasing, decreasing, increasing -> decreasing,
decreasing -> increasing, and print true while it terminates and print false on order: 
increasing -> decreasing -> increasing, decreasing -> increasing -> decreasing or with equal value entered again.

1->2->3->4->3->2->1 - True
4->3->2->1->2->3->4 - True
1->2->3->4->3->2->1->2 - False
4->3->2->1->2->3->4->3 - False
1->2->3->4->4 - False
*/

#include<iostream>
using namespace std;

int main(){
    int num, prev, current, increase = 2, decrease = 2, i;
    
    cout << "Enter number of elements: "; cin >> num;

    cout << "Enter first element: "; cin >> prev;

    for(i = 1; i < num; i++){
    cout << "Enter "<< i + 1 << " element: "; cin >> current;
        
        if(prev == current){
            cout << "false" << endl;
            break;
        }
        else{
            if(prev < current){
                if(increase > 0){
                    if(increase == 2)
                        increase = 1;
                    if(decrease == 1)
                        decrease = 0;
                    prev = current;
                    continue;
                }
                else
                    break;
            }
            else{
                if(decrease > 0){
                    if(decrease == 2)
                        decrease = 1;
                    if(increase == 1)
                        increase = 0;
                    prev = current;
                    continue;
                }
                else
                    break;
            }
        }
    }
    if(i < num)
        cout << "Sequence is False" << endl;
    else
        cout << "Sequence is True" << endl;
    return 0;
}