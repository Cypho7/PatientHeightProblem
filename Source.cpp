///    task 3    ///

#include <iostream>
#include <string>                                  

using namespace std;                               

int main() {                         //added more variables to hold max, loop counter   
	int first = 0, second = 0, third = 0, fourth = 0, fifth = 0, tempheight, maxval, i;
	string temp1, temp2, temp3, temp4, temp5;         

	cout << "Enter heights of patients arriving at the practice," << endl;                    
	cout << "When a height over 199cm is entered, program will produce a histogram showing the results." << endl;
	cout << "\n";
	cout << "Enter the first patients height: ";         
	cin >> tempheight;
	while (tempheight >= 0 && tempheight < 200) {        
		if (tempheight < 160) {               //changed so that first etc holds quantity rsther than a string
			first = first + 1;
		}
		else if (tempheight >= 160 && tempheight < 170) {    
			second = second + 1;
		}
		else if (tempheight >= 170 && tempheight < 180) {
			third = third + 1;
		}
		else if (tempheight >= 180 && tempheight < 190) {
			fourth = fourth + 1;
		}
		else if (tempheight >= 190) {
			fifth = fifth + 1;
		}

		cout << "Enter next patients height: ";         
		cin >> tempheight;
	}
	                                    //find max to initialize for loop
	maxval = max(max(max(max(first, second), third), fourth), fifth);
	cout << "\n";
	cout << "The results are: " << endl;    
	cout << " 0-159|160-169|170-179|180-189|190-199" << endl;
	cout << " _____________________________________" << endl;
	for (i = 1; i <= maxval; i++) {
		if (i <= first)
			temp1 = "+";
		else                        //loop such that if one of the variables is present 
			temp1 = " ";            // it will out put a plus and if not it will just output
		if (i <= second)            // a space filler to keep them organised neatly 
			temp2 = "+";
		else
			temp2 = " ";
		if (i <= third)
			temp3 = "+";
		else
			temp3 = " ";
		if (i <= fourth)
			temp4 = "+";
		else
			temp4 = " ";
		if (i <= fifth)
			temp5 = "+";
		else
			temp5 = " ";
		cout << "   " << temp1 << "      " << temp2 << "       " << temp3 << "       " << temp4 << "       " << temp5 << endl;
	}

	return 0;
}

