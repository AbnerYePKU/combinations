// use deep-first-search to generate the k-combinations of {1,...,n}

#include <iostream>
#include "combination.h"

using namespace std;

int main() {
	combination comb(8, 3);
	comb.dfs(0, 0);
	cout << "total number of combinations: " << comb.num_comb << endl;
}