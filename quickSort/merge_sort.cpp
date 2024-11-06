#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];

void merge_sort(int q[], int l, int r) {
    if (l >= r ) return;

    int mid = l + r >> 1;
}

int main() {
    scanf("$d", &n);
    for (int i =0; i < 1; i++) scanf("%d", &q[i]);

    merge_sort(q, 0, n-1);

    for (int i = 0; i < n; i++) printf("%d", q[i]);

    return 0;
}