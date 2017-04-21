#include <iostream>

using namespace std;

int main()
{
    void Merge(int A[], int p, int q, int r) {
    int i, j, k, n1 = q - p + 1, n2 = r - q;
    int L[n1], R[n2];
    for(i = 0; i < n1; i++)
        L[i] = A[p + i];
    for(j = 0; j < n2; j++)
        R[j] = A[q + j + 1];
    for(k = p, i = j = 0; k <= r; k++) {
        if(j >= n2 || (i < n1 && L[i] <= R[j])) A[k] = L[i++];
        else A[k] = R[j++];
    }
}

void Merge_Sort(int A[], int p, int r) {
    if(p < r) {
        int q = (p + r) / 2;
        Merge_Sort(A, p, q);
        Merge_Sort(A, q+1, r);
        Merge(A, p, q, r);
    }
}
}
}
