#include<iostream>
#include<vector>

using namespace std;

vector<int> st;

int form_stack(int, int);
int arrangement(int);
int print_all();

int main() {
	int t;
	cin >> t;
	cout << t << endl;
	for (int i = (t - 1); i > 0; i--) {
		form_stack(i, t);
		//st.clear();
		st.resize(0);
	}
	return 0;
}

int form_stack(int ii, int tt) {
	while ((tt - ii) > 0) {
		st.push_back(ii);
		tt = tt - ii;
	}
	st.push_back(tt);
	print_all();
	arrangement(st.size() - 1);
	return 0;
}

int arrangement(int pos) {
	if (pos == (st.size() - 1) && st[pos] != 1) {
		st.resize(st.size() + 1);
		st[pos] -= 1;
		st[pos + 1] += 1;
		if (!(st[pos + 1] > st[pos])) {
			print_all();
		}
		arrangement(pos);
	}
	if (pos != (st.size() - 1) && st[pos] != 1 && pos != 0) {
		st[pos] -= 1;
		st[pos + 1] += 1;
		if (!(st[pos + 1] > st[pos])) {
			print_all();
		}
		pos++;
		arrangement(pos);
	}
	if (pos != (st.size() - 1) && st[pos] == 1 && pos != 0) {
		pos--;
		arrangement(pos);
	}
	if (pos == (st.size() - 1) && st[pos] == 1 && pos != 0) {
		pos--;
		arrangement(pos);
	}
	return 0;
}

int print_all() {
	for (int i = 0; i < st.size(); i++) {
		cout << st[i] << " ";
	}
	cout << endl;
	return 0;
}
