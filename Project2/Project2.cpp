#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;
int qq[100] = { 0 };
int great = 0;
int count = 0;
int cnt[100] = { 0 };
queue<int> FQ;
void enqueue(int i,int count) {
	qq[count] = i;
	for (int p = 0; p < count; p++) {

		if (qq[count] == qq[p]) {
			cnt[i]++;
		}
	}

	for (int j = 0; j < count; j++) {
		if (cnt[j] > great) {
			great = cnt[j];
		}
	}
	FQ.push(cnt[great]);
	count++;
}

int dequeue(int count) {

	FQ.pop();
	return FQ.front();

}
int main() {
	int p;
	int count = 0;
	string s;
	cin >> p;
	int i = 0;
	for (int b = 0; b < p; b++)
	{
		cin >> s;
		if (s == "enqueue") {
			cin >> i;
			enqueue(i,count);
		}
		else if (s == "dequeue") {
			cout << dequeue(count) << " ";
			great--;
		}
	}
	return 0;
}