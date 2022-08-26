#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>
#include <string>
#include <complex>
#include <math.h>
#include <cassert>
#include "header.h"

#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()

// Udated 2/3/2022 Added Fully connected layer computation and softmax

// Modified by Prof. Murali Subbarao, ESE 344

using namespace std;
#endif
int main()
{
	int nr1, nc1, nr2, nc2;
	char c;

	srand((unsigned int)time(NULL));// seed rand() with system time

	cout << "Enter number of rows nr1 : (1 to 20) : " << endl;
	cin >> nr1;
	cout << "nr1 : " << nr1 << endl;

	if ((nr1 < 1) || (nr1 > 20)) {
		cout << "nr1 is out of range . " << endl;

		assert((1 <= nr1) && (nr1 <= 20));
		return 1;

		//		exit(1);
	}
	cout << "Enter number of columns nc1 : (1 to 20) : " << endl;
	cin >> nc1;
	cout << "nc1 : " << nc1 << endl;

	if (!((1 <= nc1) && (nc1 <= 20))) {
		cout << "nc1 is out of range . " << endl;
		return 1;
	}

	cout << "Enter number of rows nr2 : (1 to 20) : " << endl;
	cin >> nr2;
	cout << "nr2 : " << nr2 << endl;
	if (!((1 <= nr2) && (nr2 <= 20))) {
		cout << "nr2 is out of range . " << endl;
		return 1;
	}
	cout << "Enter number of columns nc2 : (1 to 20) : " << endl;
	cin >> nc2;
	cout << "nc2 : " << nc2 << endl;
	if (!((1 <= nc2) && (nc2 <= 20))) {
		cout << "nc2 is out of range . " << endl;
		return 1;
	}

	matrix<double> mat1(nr1, nc1), mat2(nr2, nc2);

	for (int i = 0; i < nr1; ++i) { // Initialization
		for (int j = 0; j < nc1; ++j) {
			//		mat1[i][j] = (double)(i + j +5.5);
			mat1[i][j] = (double)(rand() % 100);
		}
	}
	for (int i = 0; i < nr2; ++i) { // Initialization
		for (int j = 0; j < nc2; ++j) {
			//			mat2[i][j] = (double)(i*j +7.9);
			mat2[i][j] = (double)(rand() % 100);
		}
	}

	

	matrix<double>&& mat3{ mat1 * mat2 };
	


	cout << endl << "mat1 : " << endl;
	mat1.matprt();
	
	mat2.matprt();
	
	cout << endl << "mat3 : " << endl;
	
	mat3.matprt();

	cout << endl << "Enter any char to continue : ";
	cin >> c;

	complex<double> p(1.0, 2.0), q(3.0, 4.0), r;
	cout << "p = " << p << ",   q =  " << q << endl;
	p = complex<double>(5.0, 1.0);
	cout << "p = " << p << ",   q =  " << q << endl;
	cout << p.real() << "  " << p.imag() << endl;
	r = p + q;
	cout << "r = p+q = " << r << endl;
	r = p * q;
	cout << "r = p*q = " << r << endl;
	r = p / q;
	cout << "r = p/q =  " << r << endl;

	cout << endl << "Enter any char to continue : ";
	cin >> c;

	matrix<complex <double>> mat4(nr1, nc1);
	for (int i = 0; i < nr1; ++i) { // Initialization
		for (int j = 0; j < nc1; ++j) {
			
			mat4[i][j] = complex<double>((double)(rand() % 100), (double)(rand() % 100));
		}
	}

	cout << endl << "mat4 : " << endl;
	mat4.matprt();

	cout << endl << "Enter any char to continue : ";
	cin >> c;

	cout << "exp(2.5)  : " << exp(2.5) << endl;
	cout << "sqrt(5.0) : " << sqrt(5.0) << endl;
	cout << "exp(r) : " << exp(r) << endl;
	cout << "sin(2.5) : " << sin(2.5) << endl;
	cout << "cos(2.5) : " << cos(2.5) << endl;

	cout << endl << "Enter any char to continue : ";
	cin >> c;

	// complex matrices
	matrix<complex <double>> mat11(nr1, nc1), mat12(nr2, nc2), mat13(nr1, nc2);

	cout << endl << "mat11 :" << endl;
	for (int i = 0; i < nr1; ++i) { // Initialization
		for (int j = 0; j < nc1; ++j) {
			//			mat11[i][j] = complex<double>
			//				( (double)(i + j + 1.5) , (double)(i-j + 3.5));
			mat11[i][j] = complex<double>
				((double)(rand() % 100), (double)(rand() % 100));
			cout << mat11[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl << "mat12 :" << endl;
	for (int i = 0; i < nr2; ++i) { // Initialization
		for (int j = 0; j < nc2; ++j) {
			//			mat12[i][j] = complex<double>( (double)(i * j + 1) , (double)(i * j - 5.7) );
			mat12[i][j] = complex<double>((double)(rand() % 100), (double)(rand() % 100));
			cout << mat12[i][j] << "  ";
		}
		cout << endl;
	}


	cout << endl << "mat13 :" << endl;

	for (int i = 0; i < nr1; ++i) {
		for (int j = 0; j < nc2; ++j) {
			mat13[i][j] = complex<double>(0.0, 0.0);
			for (int k = 0; k < nc1; ++k)
			{
				mat13[i][j] += mat11[i][k] * mat12[k][j];
			}
			cout << mat13[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl << "Enter any char to continue : ";
	cin >> c;

	vector<vector<vector <double>>> a1;
	vector<vector<vector <vector <double>>>> a2;
	int s1 = 5, s2 = 6, s3 = 7, s4 = 4;

	a1.resize(s1);
	a2.resize(s1);

	for (int i1 = 0; i1 < s1; i1++) {
		a1[i1].resize(s2);
		a2[i1].resize(s2);
	}

	for (int i1 = 0; i1 < s1; i1++)
		for (int i2 = 0; i2 < s2; i2++) {
			a1[i1][i2].resize(s3);
			a2[i1][i2].resize(s3);
		}

	for (int i1 = 0; i1 < s1; i1++) {
		for (int i2 = 0; i2 < s2; i2++) {
			for (int i3 = 0; i3 < s3; i3++)
			{
				a2[i1][i2][i3].resize(s4);

				
				a1[i1][i2][i3] = (double)(rand() % 100);
				cout << a1[i1][i2][i3] << "   ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;

	cout << endl << "Enter any char to continue : ";
	cin >> c;
	for (int i1 = 0; i1 < s1; i1++) {
		for (int i2 = 0; i2 < s2; i2++) {
			for (int i3 = 0; i3 < s3; i3++) {
				for (int i4 = 0; i4 < s4; i4++) {
					
					a2[i1][i2][i3][i4] = (double)(rand() % 100);
					cout << a2[i1][i2][i3][i4] << "   ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;


	cout << endl << "Enter any char to continue : " << endl;
	cin >> c;

	vector<vector<vector< double>>> tn1, tn3;
	vector<vector<vector< vector< double >>>> tn2, tn4;
	// "Convolve" tn1 with tn2 with stride 2 to obtain tn3
	int stride = 2;
	int tn1s1 = 32, tn1s2 = 32, tn1s3 = 16;
	int tn2s1 = 5, tn2s2 = 5, tn2s3 = tn1s3, tn2s4 = 20;
	int tn2s1by2 = tn2s1 / 2;	// 2
	int tn2s2by2 = tn2s2 / 2;	// 2
	int tn3s1 = tn1s1 / stride, tn3s2 = tn1s2 / stride, tn3s3 = tn2s4;
	int tn4s1 = tn1s1, tn4s2 = tn1s2, tn4s3 = tn1s3, tn4s4 = 10;

	tn1.resize(tn1s1);
	tn4.resize(tn1s1);

	for (int i1 = 0; i1 < tn1s1; i1++) {
		tn1[i1].resize(tn1s2);
		tn4[i1].resize(tn1s2);
	}

	for (int i1 = 0; i1 < tn1s1; i1++) {
		for (int i2 = 0; i2 < tn1s2; i2++) {
			tn1[i1][i2].resize(tn1s3);
			tn4[i1][i2].resize(tn1s3);
		}
	}

	cout << "tn1 :";
	for (int i1 = 0; i1 < tn1s1; i1++) {
		for (int i2 = 0; i2 < tn1s2; i2++) {
			for (int i3 = 0; i3 < tn1s3; i3++)
			{
				tn1[i1][i2][i3] = ((double)(rand() % 100)) / 100.0;
				cout << tn1[i1][i2][i3] << "   ";
				tn4[i1][i2][i3].resize(tn4s4);
			}
			cout << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;

	cout << "Fully connected filter tn4" << endl;
	for (int i1 = 0; i1 < tn1s1; i1++) {
		for (int i2 = 0; i2 < tn1s2; i2++) {
			for (int i3 = 0; i3 < tn1s3; i3++) {
				for (int i4 = 0; i4 < tn4s4; i4++) {
					tn4[i1][i2][i3][i4] = ((double)(rand() % 100)) / 100.0;
					cout << tn4[i1][i2][i3][i4] << "   ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;


	tn2.resize(tn2s1);

	for (int i1 = 0; i1 < tn2s1; i1++) {
		tn2[i1].resize(tn2s2);
	}

	for (int i1 = 0; i1 < tn2s1; i1++) {
		for (int i2 = 0; i2 < tn2s2; i2++) {
			tn2[i1][i2].resize(tn2s3);
		}
	}

	for (int i1 = 0; i1 < tn2s1; i1++) {
		for (int i2 = 0; i2 < tn2s2; i2++) {
			for (int i3 = 0; i3 < tn2s3; i3++) {
				tn2[i1][i2][i3].resize(tn2s4);
			}
		}
	}

	cout << "tn2 :" << endl;
	for (int i1 = 0; i1 < tn2s1; i1++) {
		for (int i2 = 0; i2 < tn2s2; i2++) {
			for (int i3 = 0; i3 < tn2s3; i3++) {
				for (int i4 = 0; i4 < tn2s4; i4++) {
					tn2[i1][i2][i3][i4] = ((double)(rand() % 100)) / 100.0;
					cout << tn2[i1][i2][i3][i4] << "   ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;

	tn3.resize(tn3s1);

	for (int i1 = 0; i1 < tn3s1; i1++) {
		tn3[i1].resize(tn3s2);
	}

	for (int i1 = 0; i1 < tn3s1; i1++) {
		for (int i2 = 0; i2 < tn3s2; i2++) {
			tn3[i1][i2].resize(tn3s3);
		}
	}

	cout << "tn3: " << endl;
	for (int i1 = 0; i1 < tn3s1; i1++) {
		for (int i2 = 0; i2 < tn3s2; i2++) {
			for (int i3 = 0; i3 < tn3s3; i3++)
			{
				tn3[i1][i2][i3] = ((double)(rand() % 100)) / 100.0;
				cout << tn3[i1][i2][i3] << "   ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}
	cout << endl << endl;

	cout << endl << "Enter any char to continue : ";
	cin >> c;
	cout << "Output of Convolution layer: tn3" << endl;
	for (int tn2i4 = 0, tn3i3 = 0; tn2i4 < tn2s4; tn2i4++, tn3i3++) {
		for (int tn1i1 = 0, tn3i1 = 0; tn1i1 < tn1s1; tn1i1 += stride, tn3i1++) {
			for (int tn1i2 = 0, tn3i2 = 0; tn1i2 < tn1s2; tn1i2 += stride, tn3i2++) {
				double tmpsum = 0.0;
				for (int tn2i3 = 0; tn2i3 < tn2s3; tn2i3++) {
					// note tn1s3=tn2s3
					for (int tn2i1 = -tn2s1by2; tn2i1 <= tn2s1by2; tn2i1++) {
						for (int tn2i2 = -tn2s2by2; tn2i2 <= tn2s2by2; tn2i2++) {
							if (((tn1i1 + tn2i1) >= 0) && ((tn1i1 + tn2i1) < tn1s1) && ((tn1i2 + tn2i2) >= 0) && ((tn1i2 + tn2i2) < tn1s1)) { // zero padding of tn1
								tmpsum += tn2[tn2i1 + tn2s1by2][tn2i2 + tn2s2by2][tn2i3][tn2i4] * tn1[tn1i1 + tn2i1][tn1i2 + tn2i2][tn2i3];
							}
						}
					}
				}
				tn3[tn3i1][tn3i2][tn3i3] = tmpsum;
				cout << tmpsum << "  ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}

	cout << endl << "Enter any char to continue : ";
	cin >> c;

	cout << "Output of fully connected layer: tn4s4=10 fully connected filters to tn1 produce the output tn5 " << endl;

	vector<double> tn5(tn4s4);

	for (int tn4i4 = 0; tn4i4 < tn4s4; tn4i4++) {
		// note tn1s1=tn4s1 tn1s2=tn4s2, tn1s3=tn4s3
		double tmpsum = 0.0;
		for (int tn4i3 = 0; tn4i3 < tn4s3; tn4i3++) {
			for (int tn4i1 = 0; tn4i1 < tn4s1; tn4i1++) {
				for (int tn4i2 = 0; tn4i2 < tn4s2; tn4i2++) {
					tmpsum += tn4[tn4i1][tn4i2][tn4i3][tn4i4] * tn1[tn4i1][tn4i2][tn4i3];
				}
			}
		}
		tn5[tn4i4] = tmpsum;
		cout << tmpsum << "  ";
	}
	cout << endl;

	cout << endl << "Enter any char to continue : ";
	cin >> c;

	// Computing softmax of tn5 after normalizing
	double tmpsum = 0.0;
	for (int i = 0; i < tn4s4; i++) {
		tmpsum += (tn5[i] * tn5[i]);
	}
	tmpsum = sqrt(tmpsum);
	for (int i = 0; i < tn4s4; i++) {
		tn5[i] /= tmpsum;
	}
	// compute softmax
	tmpsum = 0.0;
	for (int i = 0; i < tn4s4; i++) {
		tmpsum += (exp(tn5[i]));
	}

	cout << "Softmax probabilities : " << endl;
	for (int i = 0; i < tn4s4; i++) {
		tn5[i] = (exp(tn5[i])) / tmpsum;
		cout << tn5[i] << "   ";
	}

	cout << endl << "Enter any char to continue : ";
	cin >> c;

	return 0;
}
