#include <iostream>
using namespace std;

int BSearchRecur(int arr[], int s, int e, int t) {	// 재귀 함수를 이용한 이진 탐색
	int m;

	if (s > e)
		return -1;

	m = (s + e) / 2;

	if (arr[m] == t)
		return m; 

	else if (arr[m] < t)
		BSearchRecur(arr, m + 1, e, t);

	else if (arr[m] > t)
		BSearchRecur(arr, s, m - 1, t);
}
int BSearch(int arr[], int s, int e, int t) {		// 재귀 함수를 사용하지 않은 이진 탐색
	int m;

	if (s > e) 
		return -1;

	m = (s + e) / 2;

	while (arr[m] != t) {

		if (arr[m] < t)
			s = m + 1;

		else if (arr[m] > t)
			e = m - 1;
		m = (s + e) / 2;
	}

	return m;
}

int main() {

	int tar;
	int idx, idx_;
	int arr[10] = { 1,3,5,7,9,11,13,15,17,19 };

	cout << "target(1,3,5,7,9,11,13,15,17,19 중 하나 입력시 성공): ";
	cin >> tar;
	idx = BSearchRecur(arr, 0, 10, tar);		// 재귀 함수 이용
	if (idx == -1) {
		cout << "탐색 실패" << endl;
		system("pause");
		return -1;
	}
	idx_ = BSearch(arr, 0, 10, tar);				// 재귀 함수 미 이용
	if (idx_ == -1) {
		cout << "탐색 실패" << endl;
		system("pause");
		return -1;
	}
	else
		cout << "target의 index(재귀함수 이용시) : " << idx + 1 << endl
		<< "target의 index(재귀함수 미 이용시) : " << idx_ + 1 << endl;

	system("pause");
	return 0;
}