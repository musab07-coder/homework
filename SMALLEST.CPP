#include <iostream.h>
#include <conio.h>

void main() {
    clrscr(); 

    int arr[5], smallest;

   
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    
    smallest = arr[0];

    
    for(int i = 1; i < 5; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    
    cout << "Smallest number is: " << smallest;

    getch(); 
}