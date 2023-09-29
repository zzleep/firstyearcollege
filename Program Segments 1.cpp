#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    // 1. Get the name of the applicant and change all letters to uppercase.
    string applicant;
    cout << "Applicant name: ";
    getline(cin,applicant);
    transform(applicant.begin(), applicant.end(), applicant.begin(), ::toupper);

    // 2. Get the address of an applicant, if he/she is from LAGUNA output “ENTITLED TO SCHOLARSHIP” else output “SCHOLARSHIP DENIED”
    string address;
    getline(cin, address);
    transform(address.begin(), address.end(), address.begin(), ::toupper);

    if (address.find("LAGUNA") != string::npos){
        cout << "ENTITLED TO SCHOLARSHIP";
    }else{
        cout << "SCHOLARSHIP DENIED";
    }

    // 3. Get the studentNo of 100 students and then count and display how many are from Santa Rosa branch.
    string studentNo[100];
    int countSR;
    for (int i = 0; i<100; i++){
        cin >> studentNo[i];
        if (studentNo[i].find("SR-0") != string::npos){
            countSR++;
        }
    }
    cout << countSR;
    
    // 4. Input name  then count  and display how many alphabetic characters are there.
    string name;
    getline(cin, name);
    int count;
    for (int i = 0; i <name.length(); i++){
        if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z')) {
        count++;
    }
    cout << count;

    // 5. Input name and age. Assign to firstChar  the fisrt char of name  age/2  times.
        string name;
        int age;
        char firstChar;

        getline(cin, name);
        cin >> age;
        age = age/2;
        firstChar = name[0];
        
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "firstChar: ";
        for (int i = 0; i<age; i++){
            cout << firstChar;
        }

    }
}