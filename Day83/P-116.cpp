
// Given a N x N matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest
// element in the matrix.

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    int r;
    cin >> r;
    cout << kthSmallest(mat, n, r) << endl;
    return 0;
}
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    int minn = mat[0][0], maxx = mat[n - 1][n - 1];
    while (minn < maxx)
    {
        int mid = (minn + maxx) / 2;
        int midpos = 0;
        for (int i = 0; i < n; ++i)
            midpos += (upper_bound(mat[i], mat[i] + n, mid) - mat[i]);
        if (midpos < k)
            minn = mid + 1;
        else
            maxx = mid;
    }
    return minn;
}
