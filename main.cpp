// Given 2 integer arrays X and Y of same size. Consider both arrays as vectors
// and print the sum of maximum scalar product (Dot product) of 2 vectors.
#include <iostream>
using namespace std;
int Dot_product(int arr1[], int arr2[], int size) {
  int temp = 0;
  for (int i = 0; i < size; i++) {
    temp += arr1[i] * arr2[i];
  }
  return temp;
}

int main() {
  int arr[] = {1, 2, 3, 4};
  int arr2[] = {5, 6, 7, 8};
  int size = 4;
  cout << Dot_product(arr, arr2, size);
}