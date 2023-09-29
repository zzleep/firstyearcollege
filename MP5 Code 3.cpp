#include <iostream>

using namespace std;

int main(){
    int max, i, j, k;

    cout << "How many numbers do you want?" << endl;
    cin >> max;

    int num[max];
    
    // inputting numbers
    for (i=0; i<max; i++){
        cout << "\nEnter number "<< i+1 << ": ";
        cin >> num[i];
    }

    // re-read array and convert to another variable
     for ( i = 0, j = max - 1; i < max/2; i++, j--){
        k = num[i];
        num[i] = num[j];
        num[j] = k;
    }

    // for reversing
    cout << "\nReversed original numbers:\n " << endl;
    for (i=0; i<max; i++){
        cout << num[i] << " ";
    }
    return 0;
}
