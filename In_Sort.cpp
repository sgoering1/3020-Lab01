//Sam Goering
//Cosc 3020 
//Lab 01

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void insertSort(int A[], int length);
void insertSortPointer(int *A, int length);
void printArray(int A[], int length);
void fillRandom(int A[], int length);


int  main() {

	int answer(1);

	int A[10];
	int B[50];
	fillRandom(A, 10);
	fillRandom(B, 50);
	insertSort(A, 10);
	insertSort(B, 50);
	printArray(A, 10);
	printArray(B, 50);
	while (answer != 0) {
		cout << "\nExit the program?" << endl;
		cin >> answer;
		if (answer == 0) {
			return 0;
		}
		else {
			cout << "Exit the program?" << endl;
			cin >> answer;
		}
	}
	
}

void insertSort(int A[], int length) {
	for (int i = 1; i < length; i++) {
		int val = A[i];
		int j;
		for (j = i; j > 0 && A[j - 1] > val; j--) {
			A[j] = A[j - 1];
		}
		A[j] = val;
	}
}

void insertSortPointer(int *A, int length) {

}

void fillRandom(int A[], int length) {
	srand((unsigned)time(0));
	int randomInt(0);
	for (int i = 0; i < length; i++) {
		randomInt = (rand() % 3000) + 1;
		A[i] = randomInt;
	}
}

void printArray(int A[], int length) {
	cout << endl;
	cout << "[ ";
	for (int i = 0; i < length; i++) {
		cout<< " ," << A[i];
	}
	cout << " ]";
}