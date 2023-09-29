#include <iostream>

using namespace std;

int main(){

    int n, i, j, counter;

    cout << "Input the number of elements to be stored in the array: ";
    cin >> n;

    int elem[n]; // Array for the elements
    int freq[n]; // Another array for checking frequency 

    // Input
    cout << "\nInput " << n << " elements in the array :\n" << endl;
    for (i=0; i<n; i++){
        cout << "Element - " << i+1 << " : ";
        cin >> elem[i];
    }

    // Counter for frequencies per element
    
    cout << "\nThe frequency of all elements of an array : " << endl;
    for (i=0; i<n; i++){

        if (freq[i]!=1){
            counter = 1;
            for (j = i+1; j<n; j++){
                if (elem[i] == elem[j]){
                    counter++;
                    freq[j]=1;
                }
            }
            cout << "\n" << elem[i] << " occurs " << counter << " times " << endl;
        }
    }
    return 0;
}
