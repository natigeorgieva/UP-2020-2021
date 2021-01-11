#include <iostream>
#include <cmath>
using namespace std;

# define PI           3.14159265358979323846

class Vector {
	double vec[3];

	void copyVec(double v[]);

public:
	Vector();
	Vector(double v[]);

	void setVector(double v[]);
	void setVector(Vector v);
	double getVal(int i) { return vec[i]; }
	double getNorm();

	void print();
};

void Vector::copyVec(double v[]) {
	vec[0] = v[0];
	vec[1] = v[1];
	vec[2] = v[2];
}

Vector::Vector() {
	vec[0] = vec[1] = vec[2] = 0;
}

Vector::Vector(double v[]) {
	this->copyVec(v);
}

void Vector::setVector(double v[]) {
	this->copyVec(v);
}

void Vector::setVector(Vector v) {
	this->copyVec(v.vec);
}

double Vector::getNorm() {
	double sumSqr = 0;

	for (int i = 0; i < 3; i++) {
		sumSqr += pow(vec[i], 2);
	}

	return sqrt(sumSqr);
}

void Vector::print() {
	cout << "{" << vec[0] << "," << vec[1] << "," << vec[2] << "}";
}

class TransfMatrix {
	double matr[3][3];
public:
	TransfMatrix();

	void setRotaionMatr(double rad, int axis);

	Vector transform(Vector v);
};

TransfMatrix::TransfMatrix() {
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			if (r == c) {
				matr[r][r] = 1;
			}
			else {
				matr[r][c] = 0;
			}
		}
	}
}

void TransfMatrix::setRotaionMatr(double rad, int axis) {
	double arr[] = { cos(rad), -sin(rad), sin(rad), cos(rad) };
	int pos = 0;

	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			if (r == axis) {
				if (c == axis) {
					matr[r][c] = 1;
				}
				else {
					matr[r][c] = 0;
				}
			}
			else if (c == axis) {
				matr[r][c] = 0;
			}
			else {
				matr[r][c] = arr[pos];
				pos++;
			}
		}
	}
}


Vector TransfMatrix::transform(Vector v) {
	double res[3];

	for (int r = 0; r < 3; r++) {
		res[r] = matr[r][0] * v.getVal(0) + matr[r][1] * v.getVal(1) + matr[r][2] * v.getVal(2);
	}

	return Vector(res);
}

int main() {
	cout << fixed;

	double arr[] = { 1,0,0 };
	Vector res[5000];
	Vector v(arr);

	TransfMatrix yrot;
	TransfMatrix xrot;

	yrot.setRotaionMatr(PI / 50, 1);
	xrot.setRotaionMatr(PI / 50, 0);

	for (int i = 0; i < 50; i++) {
		v.setVector(yrot.transform(v));
		Vector cpy(v);
		for (int j = 0; j < 100; j++) {
			cpy.setVector(xrot.transform(cpy));
			res[100 * i + j].setVector(cpy);
		}
	}

	for (int i = 0; i < 5000; i++) {
		res[i].print();
		if (i != 4999) {
			cout << ',';
		}
	}
}