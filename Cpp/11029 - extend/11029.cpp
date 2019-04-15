#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

// Define "extend" here. 
set<vector<int> > extend (vector<int> v)
{
	set<vector<int> > ans;
	for (int i = 0;i < v.size();i++) {
		vector<int> tmp = v;
		if (!i) swap(tmp[i], tmp[tmp.size()-1]);
		else swap(tmp[i], tmp[i-1]);
		ans.insert(tmp);
	}
	return ans;
}

int main()
{
    vector<int> v; // = {6, 1, 4, 3, 5, 2};
    int e;
    while (cin >> e) { // press Ctrl + Z to end the input
        v.push_back(e); 
    }
    auto S = extend(v); // the type of S will depend on the return type of extend
    for (auto s : S) {
        cout << s[0];
        for (unsigned i=1; i<s.size(); ++i) {
            cout << " " << s[i];
        }
        cout << "\n";
    }
}