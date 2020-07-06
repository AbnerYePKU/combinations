#pragma once

struct combination {
    int n, k; // k numbers in {1,2,...,n}
    int* result; // k-combination
    bool* visit; // n elements if visited
    int num_comb = 0; // numbers of combinations
    // generator
    combination(int n_, int k_);
    // destructor
    ~combination();
    // dfs: from the d-th digit
    //  d: depth of the tree
    //  j: largest non-zero index + 1 / start index of search
    void dfs(int d, int j);
};
