#include <iostream>
using namespace std;

int BSearchRecur(int arr[], int s, int e, int t) {	// ��� �Լ��� �̿��� ���� Ž��
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
int BSearch(int arr[], int s, int e, int t) {		// ��� �Լ��� ������� ���� ���� Ž��
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

	cout << "target(1,3,5,7,9,11,13,15,17,19 �� �ϳ� �Է½� ����): ";
	cin >> tar;
	idx = BSearchRecur(arr, 0, 10, tar);		// ��� �Լ� �̿�
	if (idx == -1) {
		cout << "Ž�� ����" << endl;
		system("pause");
		return -1;
	}
	idx_ = BSearch(arr, 0, 10, tar);				// ��� �Լ� �� �̿�
	if (idx_ == -1) {
		cout << "Ž�� ����" << endl;
		system("pause");
		return -1;
	}
	else
		cout << "target�� index(����Լ� �̿��) : " << idx + 1 << endl
		<< "target�� index(����Լ� �� �̿��) : " << idx_ + 1 << endl;

	system("pause");
	return 0;
}