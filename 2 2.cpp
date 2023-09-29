#include <iostream>

using namespace std;

int main(){

    int i, j, q, a, score, p;
    char c = 'Y';

    // loop when user wants to use the program again
    while (c == 'y' || c == 'Y'){
    
        // inputting size of array
        cout << "How many questions are in the examination? ";
        cin >> q;

        int keys[q];

        cout << "\nThere are " << q << " questions in the examination.\n" << endl;
        cout << "Enter the keys for the examination: ";

        // inputting the correct answers
        for (i = 0; i < q; i++){
            cin >> keys[i];
        }

        // user input own answers
        cout << "Enter your answers: ";

        for (i = 0; i < q; i++){
            cin >> a;
            if (a == keys[i]){ // comparing if the user's answer is the same as the correct answer keys
                score += 1;
                cout << "\nNumber " << i+1 << " is correct." << endl; // printing the number correct
            }else{
                score += 0; // no score if the user's answer does not match the correct answer key
            }
        }

        // percentage of correct answers
        p = (score * 100) / q;

        cout << "\n" << p << "% of your answers are correct." << endl;

        // choice to grade another examination
        cout << "\nGrade another examination? (y/n)\n" << endl;
        cin >> c;

    }

    // if the user chooses otherwise
    cout << "\nThank you for using my program!";
    return 0;
}