#include <iostream>
#include <cmath>
using namespace std;

const int N = 20;

//Структура за 3 мерен вектор
struct Vec3 {
	double x, y, z;
};

//Функция за въвеждане на обект от структурата Vec3
void inputVec3(Vec3& v) {
	cin >> v.x >> v.y >> v.z;
}

//Функция за въвеждане на обект от структурата Vec3
void outputVec3(const Vec3& v) {
	cout << "(" << v.x << ", " << v.y << ", " << v.z <<")"<< endl;
}

//Функция за извеждане на обект от структурата Vec3
double normV3(const Vec3& v) {
	double n = sqrt(v.x * v.x + v.y * v.y + v.z * v.z);

	return n;
}

//Функция, която по подаден вектор връща неговия единичен вектор
Vec3 makeUnitV3(const Vec3& v) {
	double n = normV3(v);
	Vec3 res;

	res.x = v.x / n;
	res.y = v.y / n;
	res.z = v.z / n;

	return res;
}

//Функция, която по подадени два вектора връща тяхната разлика
Vec3 subVec3(const Vec3& v1, const Vec3& v2) {
	Vec3 res;

	res.x = v1.x - v2.x;
	res.y = v1.y - v2.y;
	res.z = v1.z - v2.z;

	return res;
}

//Сортираща функция по метода на пряката селекция
void SelectionSort(Vec3 arr[], int size) {
	Vec3 bestVec = {5, 3, 2};
	Vec3 normBV = makeUnitV3(bestVec);

	for (int i = 0; i < size-1; i++) {
		double currMin = normV3(subVec3(makeUnitV3(arr[i]), normBV));
		int  currPos = i;

		for (int j = i + 1; j < size; j++) {
			if (currMin > normV3(subVec3(makeUnitV3(arr[j]), normBV))) {
				currPos = j;
				currMin = normV3(subVec3(makeUnitV3(arr[j]), normBV));
			}
		}

		if (currPos != i) {
			Vec3 temp = arr[i];
			arr[i] = arr[currPos];
			arr[currPos] = temp;
		}
	}
}


int main() {
	Vec3 bestVec = { 5, 3, 2 };
	Vec3 normBV = makeUnitV3(bestVec);
	Vec3 arr[N];
	int size;

	cin >> size;

	if (!(size >= 4 && size <= N)) {
		return 0;
	}

	for (int i = 0; i < size; i++) {
		inputVec3(arr[i]);
	}

	SelectionSort(arr, size);

	for (int i = 0; i < size; i++) {
		outputVec3(arr[i]);
		cout << normV3(subVec3(makeUnitV3(arr[i]), normBV)) << endl;
	}
}