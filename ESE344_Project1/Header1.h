#include <iostream>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
#include <fstream>
using namespace std;

//Program for generating input data fore Project 1
// by Prof. Murali Subbarao, ESE 344
/*
void data3d(int s1, int s2, int s3) {
	srand((unsigned int)time(NULL));// seed rand() with system time
	//Generating input for project 1
	for (int i3 = 0; i3 < s3; i3++) {
		for (int i2 = 0; i2 < s2; i2++) {
			for (int i1 = 0; i1 < s1; i1++) {
				cout << (double)((rand() % 100) / 100.0) << "   ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}

void data4d(int s1, int s2, int s3, int s4) {

	srand((unsigned int)time(NULL));// seed rand() with system time

	//Generating input for project 1
	for (int i4 = 0; i4 < s4; i4++) {
		for (int i3 = 0; i3 < s3; i3++) {
			for (int i2 = 0; i2 < s2; i2++) {
				for (int i1 = 0; i1 < s1; i1++) {
					cout << (double)((rand() % 100) / 100.0) << "   ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}

void data1d(int s1) {
	srand((unsigned int)time(NULL));// seed rand() with system time
	//Generating input for project 1
	for (int i1 = 0; i1 < s1; i1++) {
		cout << (double)((rand() % 100) / 100.0) << "   ";
	}
	cout << endl << endl;
}
*/
class inputs
{
public:
	fstream fio("inputdata", in*);
	fstream fin;

	//fio.open("project1inputdata.txt");

void D1(int s1, int s2, int s3) {
	srand((unsigned int)time(NULL));// seed rand() with system time
	//Generating input for project 1
	for (int i3 = 0; i3 < s3; i3++) {
		for (int i2 = 0; i2 < s2; i2++) {
			for (int i1 = 0; i1 < s1; i1++) {
				cout << (double)((rand() % 100) / 100.0) << "   ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}

void D3(int s1, int s2, int s3, int s4) {

	srand((unsigned int)time(NULL));// seed rand() with system time

	//Generating input for project 1
	for (int i4 = 0; i4 < s4; i4++) {
		for (int i3 = 0; i3 < s3; i3++) {
			for (int i2 = 0; i2 < s2; i2++) {
				for (int i1 = 0; i1 < s1; i1++) {
					cout << (double)((rand() % 100) / 100.0) << "   ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}

void D4(int s1) {
	srand((unsigned int)time(NULL));// seed rand() with system time
	//Generating input for project 1
	for (int i1 = 0; i1 < s1; i1++) {
		cout << (double)((rand() % 100) / 100.0) << "   ";
	}
	cout << endl << endl;
}
void D8(int s1, int s2, int s3, int s4) {

	srand((unsigned int)time(NULL));// seed rand() with system time

	//Generating input for project 1
	for (int i4 = 0; i4 < s4; i4++) {
		for (int i3 = 0; i3 < s3; i3++) {
			for (int i2 = 0; i2 < s2; i2++) {
				for (int i1 = 0; i1 < s1; i1++) {
					cout << (double)((rand() % 100) / 100.0) << "   ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}
void D9(int s1) {
	srand((unsigned int)time(NULL));// seed rand() with system time
	//Generating input for project 1
	for (int i1 = 0; i1 < s1; i1++) {
		cout << (double)((rand() % 100) / 100.0) << "   ";
	}
	cout << endl << endl;
}
void D13(int s1, int s2, int s3, int s4) {

	srand((unsigned int)time(NULL));// seed rand() with system time

	//Generating input for project 1
	for (int i4 = 0; i4 < s4; i4++) {
		for (int i3 = 0; i3 < s3; i3++) {
			for (int i2 = 0; i2 < s2; i2++) {
				for (int i1 = 0; i1 < s1; i1++) {
					cout << (double)((rand() % 100) / 100.0) << "   ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}
void D14(int s1) {
	srand((unsigned int)time(NULL));// seed rand() with system time
	//Generating input for project 1
	for (int i1 = 0; i1 < s1; i1++) {
		cout << (double)((rand() % 100) / 100.0) << "   ";
	}
	cout << endl << endl;
}
void D18(int s1, int s2, int s3, int s4) {

	srand((unsigned int)time(NULL));// seed rand() with system time

	//Generating input for project 1
	for (int i4 = 0; i4 < s4; i4++) {
		for (int i3 = 0; i3 < s3; i3++) {
			for (int i2 = 0; i2 < s2; i2++) {
				for (int i1 = 0; i1 < s1; i1++) {
					cout << (double)((rand() % 100) / 100.0) << "   ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;
}
void D19(int s1) {
	srand((unsigned int)time(NULL));// seed rand() with system time
	//Generating input for project 1
	for (int i1 = 0; i1 < s1; i1++) {
		cout << (double)((rand() % 100) / 100.0) << "   ";
	}
	cout << endl << endl;
}
};

int main()
{
	inputs var;
	char c;
	// Generate input data for project 1

	var.D1(32, 32, 3); //D1
	var.D3(5, 5, 3, 16); //D3
	var.D4(16); //D4
	var.D8(5, 5, 16, 20); //D8
	var.D9(20); //D9
	var.D13(5, 5, 20, 20);  //D13
	var.D14(20); //D14
	var.D18(4, 4, 20, 10); //D18
	var.D19(10);  //D19

//	cout << endl << "Enter any char to continue : ";
//	cin >> c;

	return 0;
}

