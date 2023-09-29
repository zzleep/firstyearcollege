#include <iostream>

using namespace std;

int main(){

    int n, i;

    cout << "Enter how many numbers you want to use : ";
    cin >> n;

    int numbers[n];

    // for loop input
    cout << "\nEnter your numbers : " << endl;
    for (i=0; i<n; i++){
        cout << "Number " << i+1 << " : ";
        cin >> numbers[i];
    }

    // for even numbers simple modulo checking
    cout << "\nThe even numbers in the array are: ";
    for (i=0; i<n; i++){
        if (numbers[i] % 2 == 0){
            cout << numbers[i] << " ";
        }

    }

    // for odd numbers
    cout << "\nThe odd numbers in the array are: ";
    for (i=0; i<n; i++){
        if (numbers[i] % 2 == 1){
            cout << numbers[i] << " ";
        }

    }

    return 0;
}
