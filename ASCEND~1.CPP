#include <iostream.h>
#include <conio.h>

void main() {
    clrscr(); 

    int arr[5], temp;

    
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

   
    for( i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) { 
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    cout << "Sorted numbers: ";
    for( i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    getch(); 
}
