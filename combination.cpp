// combination of k numbers in {1,2,3,...,n}

#include <iostream>
#include "combination.h"

using namespace std;

combination::combination(int n_, int k_) : n(n_), k(k_) {
	result = new int[k];
	visit = new bool[n];
	memset(visit, 0, n * sizeof(bool));
}

combination::~combination() {
	delete result;
	delete visit;
}

// dfs: from the d-th digit
void combination::dfs(int d, int j) {
	int i;
	// the search is complete
	if (d == k) {
		for (i = 0; i < k; i++) {
			cout << result[i] + 1 << " ";
		}
		cout << endl;
		num_comb++; // count
		return;
	}
	// search at the d-th digit
	for (i = j; i < n; i++) {
		if (!visit[i]) { // element i is not visited
			result[d] = i; // determin the d-th digit
			visit[i] = true; // i visited
			dfs(d + 1, i + 1);
			visit[i] = false; // quit the search
		}
	}
}