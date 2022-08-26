
#define MATRIX_H
#include <iostream>
#include <vector>
#include <string>
#include <complex>
#include <math.h>
#include <cassert>

#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()

// Udated 2/3/2022 Added Fully connected layer computation and softmax

// Modified by Prof. Murali Subbarao, ESE 344

using namespace std;

template <typename Object>
class matrix
{
public:
	matrix(int rows, int cols) : array(rows)
	{
		for (auto& thisRow : array)
			thisRow.resize(cols);
	}

	matrix(vector<vector<Object>> v) : array{ v }
	{ }
	matrix(vector<vector<Object>>&& v) : array{ std::move(v) }
	{ }

	const vector<Object>& operator[](int row) const
	{
		return array[row];
	}
	vector<Object>& operator[](int row)
	{
		return array[row];
	}

	int numrows() const
	{
		return array.size();
	}
	int numcols() const
	{
		return numrows() ? array[0].size() : 0;
	}

	void matprt() const // print matrix
	{
		for (int i = 0; i < numrows(); ++i) {
			for (int j = 0; j < numcols(); ++j) {
				cout << array[i][j] << "   ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}

	/**
* Standard matrix multiplication. Version 1
* Arrays start at 0.
*/

	matrix<double> operator*(const matrix<double>& b) const
	{
		int nra = numrows();
		int nca = numcols();
		int nrb = b.numrows();
		int ncb = b.numcols();

		if (nca != nrb) {
			cerr << "nca != nrb in matrix multiplication. Exiting." << endl;
			exit(0);
		}

		matrix<double> c(nra, ncb);

		for (int i = 0; i < nra; ++i)
			for (int j = 0; j < ncb; ++j) {
				c[i][j] = 0.0;
				for (int k = 0; k < nca; ++k)
					c[i][j] += array[i][k] * b[k][j];
			}

		return c;
	}




private:
	vector<vector<Object>> array;
};


void matmul(const matrix<double>& a, const matrix<double>& b, matrix<double>& c)
{
	int nra = a.numrows();
	int nca = a.numcols();
	int nrb = b.numrows();
	int ncb = b.numcols();

	if (nca != nrb) {
		cerr << "nca != nrb in matrix multiplication. Exiting." << endl;
		exit(0);
	}

	for (int i = 0; i < nra; ++i)
		for (int j = 0; j < ncb; ++j) {
			c[i][j] = 0.0;
			for (int k = 0; k < nca; ++k)
				c[i][j] += a[i][k] * b[k][j];
		}

	return;
}

// Standard matrix print.

void matprint(const matrix<double>& a)
{
	for (int i = 0; i < a.numrows(); ++i) {
		for (int j = 0; j < a.numcols(); ++j) {
			cout << a[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl << endl;
}
