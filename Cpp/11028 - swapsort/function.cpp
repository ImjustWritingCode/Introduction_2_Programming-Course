#include "function.h"
#include <utility>

set<State> SwapSort::extend(State s) {
	set<State> SS;
	// your code here
	int size = s.size();
	State s1 = s, s2 = s;
	swap(s1[0], s1[1]);
	swap(s2[0], s2[size-1]);
	SS.insert(s1);
	SS.insert(s2);
	return SS; 
}

void SwapSort::solve(int steps) {
	while (steps>0) { 
		set<list<State>> oldPaths; 
		set<list<State>> newPaths;
		for (auto p : _paths) { // your code here
			oldPaths.insert(p);
			State cur_s = p.back();
			_explored.insert(cur_s);//mark as explored
			State sorted(cur_s);
			sort(sorted.begin(), sorted.end());//get sorted order
			if (cur_s == sorted) _solutions.insert(p);//found answer
			else {
				set<State> e = extend(cur_s);
				for (auto states:e) {
					auto it = _explored.find(states);
					if (it == _explored.cend()) {
						list<State> lst(p);//create new path
						lst.push_back(states);
						if (states == sorted) _solutions.insert(lst);
						else newPaths.insert(lst);
					}
				}
			}
		}
		for (auto p : oldPaths) { _paths.erase(p);
		}
		for (auto p : newPaths) {
			_paths.insert(p); }
		--steps; 
	}
}