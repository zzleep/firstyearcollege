#include <iostream>
using namespace std;

int main(){
	int d, y; // day and year
	string m; // month
	double cost = 500; // primary cost
	double cost2; // secondary cost 
	double mr3 = 2900;
	double mr4 = 2500;
	double mr2; // previous bill to be added with the cost and first meter
	double mr1; // first meter
	bool May, June, July, August, September;

	cout << "\nWhat is the month, day, and year?" << endl;
	cout << "\nEg. August 20 2022" << endl;
	cin >> m >> d >> y;
	
	cout << "\nWhat is your current meter reading?" << endl;
	cin >> mr1 ;

	if(mr1 >= 0 && mr1 <= 400){ // 0 - 400 kwh
		cout << "\nYour total bill is 500php." << endl;
	}

	// 400 - 1200 kwh

	if (mr1 > 400 && mr1 <= 1200){

		while (mr1 != 400){ // loop for 400 - 1200 kwh

			if (mr1 > 400 && mr1 <= 1200 && m=="May"||m=="June"||m=="July"||m=="August"||m=="September"){; // May - Sept. Seasonal Pricing
			cost += 3.00;
			mr1--;

			}else if (mr1 > 400 && mr1 <= 1200 && m!="May"||m!="June"||m!="July"||m!="August"||m!="September"){
			cost += 2.50;
			mr1--;

			}if (mr1 == 400){
			cout << "\nYour total bill is: " << cost << endl;
			break;
			}

		}

	}

	// for over 1200 kwh 

	if (mr1 > 1200){
		
		while (mr1 != 1200){

			if (mr1 > 1200 && m=="May"||m=="June"||m=="July"||m=="August"||m=="September"){
				mr3 += 3.00;
				mr1--;
			}

			else if (mr1 > 1200 && m!="May"||m!="June"||m!="July"||m!="August"||m!="September"){
				mr4 += 3.00;
				mr1--;
				break;
			}

		}

		if (mr1 == 1200 && m=="May"||m=="June"||m=="July"||m=="August"||m=="September"){ // May - Sept. Seasonal Pricing
				cost2 = 2900 * 0.95;
				mr3 = mr3 + cost2;	
				cout << "\nYour total bill is: " << mr3 << endl;
				return 0;				

		}else if (mr1 == 1200 && m!="May"||m!="June"||m!="July"||m!="August"||m!="September"){
				cost2 = 2500 * 0.95;
				mr4 = mr4 + cost2;	
				cout << "\nYour total bill is: " << mr4 << endl;
				return 0;
		}

	}


	system("Pause");
	return 0;
}


