#include <iostream>
using namespace std;

const int MOD = 1e9+7;

struct Matrix {
    long long mat[2][2];

    Matrix() {
        mat[0][0] = 0;
        mat[0][1] = 1;
        mat[1][0] = 1;
        mat[1][1] = 1;
    }

    Matrix operator* (const Matrix& other) const {
        Matrix res;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                res.mat[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    res.mat[i][j] += (mat[i][k] * other.mat[k][j]) % MOD;
                    res.mat[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};

Matrix power(Matrix a, long long n) {
    Matrix res;
    res.mat[0][0] = res.mat[1][1] = 1;
    while (n) {
        if (n & 1) {
            res = res * a;
        }
        a = a * a;
        n >>= 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Matrix A;
        A = power(A, n);
        cout << A.mat[0][1] << '\n';
    }
    return 0;
}

