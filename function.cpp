//using namespace std;
//
//#pragma once
//
//#include <Windows.h>
//#include <iostream>
//#include <cstring>
//#include <string>
//
//void InitMassiveForInt(int arr[]) {
//	for (int i; i < 10; i++) {
//		arr[i] = rand() % 51;
//	}
//}
//
//void InitMassiveForDouble(double arr[]) {
//	for (int i; i < 10; i++) {
//		arr[i] = rand() % 51;
//	}
//}
//
//void InitMassiveForChar(char arr[]) {
//	for (int i; i < 10; i++) {
//		arr[i] = rand() % 51;
//	}
//}
//
//
//void PrintMassiveForInt(int arr[]) {
//	for (int i; i < 10; i++) {
//		cout << arr[i] << ' ';
//	}
//}
//
//void PrintMassiveForDouble(double arr[]) {
//	for (int i; i < 10; i++) {
//		cout << arr[i] << ' ';
//	}
//}
//
//void PrintMassiveForChar(char arr[]) {
//	for (int i; i < 10; i++) {
//		cout << arr[i] << ' ';
//	}
//}
//
//
//void MaxValueInMassiveForInt(int arr[]) {
//	int maxVal = arr[0];
//	for (int i; i < 10; i++) {
//		if (arr[i] > maxVal) {
//			maxVal = arr[i];
//		}
//	}
//	cout << "Максимальное значение в массиве: " << maxVal;
//}
//
//void MaxValueInMassiveForDouble(double arr[]) {
//	int maxVal = arr[0];
//	for (int i; i < 10; i++) {
//		if (arr[i] > maxVal) {
//			maxVal = arr[i];
//		}
//	}
//	cout << "Максимальное значение в массиве: " << maxVal;
//}
//
//void MaxValueInMassiveForChar(char arr[]) {
//	int maxVal = arr[0];
//	for (int i; i < 10; i++) {
//		if (arr[i] > maxVal) {
//			maxVal = arr[i];
//		}
//	}
//	cout << "Максимальное значение в массиве: " << maxVal;
//}
//
//
//void MinValueInMassiveForInt(int arr[]) {
//	int minVal = arr[0];
//	for (int i; i < 10; i++) {
//		if (arr[i] < minVal) {
//			minVal = arr[i];
//		}
//	}
//	cout << "Минимальное значение в массиве: " << minVal;
//}
//
//void MinValueInMassiveForDouble(double arr[]) {
//	int minVal = arr[0];
//	for (int i; i < 10; i++) {
//		if (arr[i] < minVal) {
//			minVal = arr[i];
//		}
//	}
//	cout << "Минимальное значение в массиве: " << minVal;
//}
//
//void MinValueInMassiveForChar(char arr[]) {
//	int minVal = arr[0];
//	for (int i; i < 10; i++) {
//		if (arr[i] < minVal) {
//			minVal = arr[i];
//		}
//	}
//	cout << "Минимальное значение в массиве: " << minVal;
//}
//
//
//void SortMassiveForInt(int arr[], int a, int b) {
//	if (a >= b) return;
//	int pivot = arr[(a + b) / 2];
//	int i = a, j = b;
//	while (i <= j) {
//		while (arr[i] < pivot) i++;
//		while (arr[j] > pivot) j--;
//		if (i <= j) {
//			swap(arr[i], arr[j]);
//			i++;
//			j--;
//		}
//	}
//	SortMassiveForInt(arr, a, j);
//	SortMassiveForInt(arr, i, b);
//}
//
//void SortMassiveForDouble(double arr[], int a, int b) {
//	if (a >= b) return;
//	int pivot = arr[(a + b) / 2];
//	int i = a, j = b;
//	while (i <= j) {
//		while (arr[i] < pivot) i++;
//		while (arr[j] > pivot) j--;
//		if (i <= j) {
//			swap(arr[i], arr[j]);
//			i++;
//			j--;
//		}
//	}
//	SortMassiveForDouble(arr, a, j);
//	SortMassiveForDouble(arr, i, b);
//}
//
//void SortMassiveForChar(char arr[], int a, int b) {
//	if (a >= b) return;
//	int pivot = arr[(a + b) / 2];
//	int i = a, j = b;
//	while (i <= j) {
//		while (arr[i] < pivot) i++;
//		while (arr[j] > pivot) j--;
//		if (i <= j) {
//			swap(arr[i], arr[j]);
//			i++;
//			j--;
//		}
//	}
//	SortMassiveForChar(arr, a, j);
//	SortMassiveForChar(arr, i, b);
//}
//
//
//
//void EditValueMassiveForInt(int arr[], int needIndex/*ex 5*/, int desiredElement/*ex 7*/) {
//	for (int i; i < 10; i++) {
//		if (needIndex <= arr[i]) {
//			arr[needIndex] = desiredElement;
//		}
//
//		else {
//			cout << "Ошибка! Введите индекс от 0 до 9!";
//		}
//	}
//	
//
//}
//
//void EditValueMassiveForDouble(double arr[], int needIndex/*ex 5*/, double desiredElement/*ex 7*/) {
//	for (int i; i < 10; i++) {
//		if (needIndex <= arr[i]) {
//			arr[needIndex] = desiredElement;
//		}
//
//		else {
//			cout << "Ошибка! Введите индекс от 0 до 9!";
//		}
//	}
//}
//void EditValueMassiveForChar(char arr[], int needIndex/*ex 5*/, char desiredElement/*ex 7*/) {
//	for (int i; i < 10; i++) {
//		if (needIndex <= arr[i]) {
//			arr[needIndex] = desiredElement;
//		}
//
//		else {
//			cout << "Ошибка! Введите индекс от 0 до 9!";
//		}
//	}
//}