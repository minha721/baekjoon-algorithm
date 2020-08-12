//요세푸스 문제

#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue <int> q;
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	int num = 1;

	cout << "<";
	while (!q.empty()) {
		if (num != m) {
			q.push(q.front());
			q.pop();
			num++;
		}
		else {
			if (q.size() != 1) {
				cout << q.front() << ", ";
				q.pop();
				num = 1;
			}
			else {
				cout << q.front();
				q.pop();
			}
		}
	}
	cout << ">" << endl;
}