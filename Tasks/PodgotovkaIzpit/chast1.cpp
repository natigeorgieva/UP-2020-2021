#include <iostream>
#include <string>
using namespace std;

//struct Dentist {
//	string name;
//	float rating;
//	int id;
//};
//
//void read_Dentist(Dentist& d) {
//	cin >> d.id >> d.rating;
//	cin.ignore();
//	getline(cin, d.name);
//}
//
//void print_Dentinst(const Dentist& d) {
//	cout << d.name << " " << d.id << " " << d.rating << endl;
//}
//
//void removeElem(Dentist arr[], int& size, int pos) {
//	for (int i = pos; i < size - 1; i++) {
//		arr[i] = arr[i + 1];
//	}
//	size--;
//}
//
//void filther(Dentist arr[], int& size) {
//	float currMax = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i].rating > currMax) {
//			currMax = arr[i].rating;
//		}
//	}
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i].rating != currMax) {
//			removeElem(arr, size, i);
//			i--;
//		}
//	}
//}


//const int N = 100;
//
//void removeElem(double arr[], int& size, int pos) {
//	if (!(pos >= 0 && pos < size)) {
//		return;
//	}
//
//	for (int i = pos; i < size-1; i++) {
//		arr[i] = arr[i + 1];
//	}
//
//	size--;
//}
//
//
//bool filther(double arr[], int& size) {
//	if (size >= 0 && size <= 2) {
//		return 1;
//	}
//
//	double dif = arr[1] - arr[0];
//	double arrfil[N];
//	int sizefil = 0;
//
//	for (int i = 1; i < size - 1; i++) {
//		if (arr[i + 1] != arr[i] + dif) {
//			arrfil[sizefil] = arr[i + 1];
//			sizefil++;
//
//			removeElem(arr, size, i + 1);
//
//			i--;
//		}
//	}
//
//	if (sizefil >= 0 && sizefil <= 2) {
//		return 1;
//	}
//
//	if (!arrfil[0]) {
//		return 0;
//	}
//
//	double difffil = arrfil[1] / arrfil[0];
//
//	for (int i = 0; i < sizefil-1; i++) {
//		if (arrfil[i + 1] != arrfil[i] * difffil) return false;
//	}
//
//
//	return true;
//}
//
//int main() {
//	double arr[] = { 2, 4, 3, 6, 8, 9, 10, 12, 14, 16, 27 };
//	int size = 11;
//
//	cout << filther(arr, size)<<endl;
//
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//}


//зелени[0], червени[1], сини[2], бели[3]
//int findAllNecklaces(int countColors[], int first, int lastfixed, bool isFirst = false) {
//	int sum = 0, pos = -1;
//
//	for (int i = 0; i < 4; i++) {
//		sum += countColors[i];
//		if (countColors[i] == 1) pos = i;
//	}
//
//	if (sum == 1) {
//		if (first != pos && lastfixed != pos) return 1;
//		else return 0;
//	}
//
//	int count = 0;
//
//	for (int i = 0; i < 4; i++){
//		if (countColors[i]) {
//			if(isFirst){
//				countColors[i]--;
//				count += findAllNecklaces(countColors, i, i);
//				countColors[i]++;
//			}
//			else {
//				if (lastfixed != i) {
//					countColors[i]--;
//					count += findAllNecklaces(countColors, first, i);
//					countColors[i]++;
//				}
//			}
//		}
//	}
//
//	if (isFirst) {
//		return count / sum;
//	}
//	else {
//		return count;
//	}
//
//}
//
//int main() {
//
//	int arr[] = { 2,2,1,0 };
//	cout << findAllNecklaces(arr, 0, 0, true);
//}

class Dentist {
private:
	int id;
	float rating;
	string name;
public:
	Dentist();
	Dentist(int, float, string);

	int getId() { return id; }
	float getRating() { return rating; }
	string getName() { return name; }

	void setId(int _id) { id = _id; }
	void setRating(float _rating) { rating = _rating; }
	void setName(string _name) { name = _name; }

	bool isSimilar(const Dentist& d);

};

Dentist::Dentist() {
	name = "";
	id = 0;
	rating = 0;
}
Dentist::Dentist(int _id, float _rating, string _name) {
	name = _name;
	id = _id;
	rating = _rating;
}

bool Dentist::isSimilar(const Dentist& d) {
	if (rating == d.rating) return true;
	else return false;
}

int main() {
	Dentist arr[5];
	int size = 5;

	for (int i = 0; i < size; i++) {
		int id; float rating; string name;

		cin >> id >> rating;
		cin.ignore();
		getline(cin, name);

		arr[i].setId(id);
		arr[i].setName(name);
		arr[i].setRating(rating);
	}


	//filther(arr, size);

	for (int i = 0; i < size; i++) {
		cout << arr[i].getId() << " " << arr[i].getName() << " " << arr[i].getRating();
	}


	cout <<endl <<arr[0].isSimilar(arr[1]);
	//for (int i = 0; i < size; i++)print_Dentinst(arr[i]);



}