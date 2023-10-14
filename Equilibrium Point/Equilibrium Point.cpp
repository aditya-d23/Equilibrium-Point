#include<iostream>
#include<vector>
using namespace std;

// this is the program to find the position of the equilibrium point 
//The process is simple we have given an array of integers we have to find the position where sum of all the left elements and sum of all the
//right elements should be equal. In that case we are doing following things:
//1. Initialize total_sum=sum of all the elements 
//and there is a variable called sum which is equal to zero.
//and everytime we are decreamenting the sum by each element in the array and adding the sum to its sum variable. if that sum variable is equal to
//the sum of total_sum then return index + 1;
int equlibrium(vector<int> &vect) {
	int totalSum = 0;
	int sum = 0;
	for (int i = 0; i < vect.size(); i++) {
		totalSum += vect[i];
	}
	for (int i = 0; i < vect.size(); i++) {
		totalSum -= vect[i];
		if (sum == totalSum) return i + 1;
		sum += vect[i];
	}
	return -1;
}
int main() {
	cout << "Enter the size of the array: ";
	int size;
	cin >> size;
	vector<int> vect;
	for (int i = 0; i < size; i++) {
		cout << "Enter the element: ";
		int x;
		cin >> x;
		vect.push_back(x);
	}
	cout << equlibrium(vect);
}