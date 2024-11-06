#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];

void quick_sort(int q[], int l, int r) {
    if (l >= r) return;

    int x = q[(l + r)/2], i =l -1, j = r + 1;
    // 注意要是底下quick_sort(q, l, i-1);的话，用int x = q[l]就会有边界问题。

    while (i < j) {
        do i ++; while (q[i] < x);
        do j --; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
        // if (i < j) {
        //     int t = q[i];
        //     q[i] = q[j];
        //     q[j] = t;
        // }
    }

    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);

    // quick_sort(q, l, i-1);
    // quick_sort(q, i, r);
    // 也行
}

int main() {
    scanf("%d", &n);
    for (int i=0; i < n; i++) scanf("%d", &q[i]);

    quick_sort(q, 0, n -1);

    for(int i=0; i < n; i++) printf("%d", q[i]);
    printf("\n");
    return 0;
}