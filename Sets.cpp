#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;


//file created : October 5,2022
//contents : sets and its types (multiset not included)
//sets contains unique elements only -> stores elements in sorted manner

void printSet(set<string>&);

int chap4()
{
	set<string> s;
	s.insert("abc");	// insertion takes O(log n) time 
	s.insert("bbc");
	s.insert("cbc");
	s.insert("abc");	//wont be inserted in set

	printSet(s);

	string in;
	cin >> in;

	//finding element in set
	auto it = s.find(in);

	if (it != s.end()) {
		cout << "String found " << endl;
	}
	else {
		cout << "String not found " << endl;
	}

	unordered_set<int> us;
	us.insert(3);
	us.insert(4);
	us.insert(7);
	us.insert(1);
	us.insert(10);
	us.insert(9);
	us.insert(2);
	us.insert(0);


	int n;
	cout << "How many values you want to validate in set ? " << endl;
	cin >> n;
	while (n > 0) {
		int val;
		cin >> val;
		if (us.find(val) == us.end()) {
			cout << "No " << endl;
		}
		else {
			cout << "Yes value is present " << endl;
		}
		n = n - 1;
	}

	return 0;
}

void printSet(set<string>& s) {
	for (auto it : s) {
		cout << it << '\t';
	}
	cout << endl;
}
