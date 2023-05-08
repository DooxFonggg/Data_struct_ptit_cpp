#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj_matrix(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        int num_neighbors;
        cin >> num_neighbors;
        for (int j = 0; j < num_neighbors; j++) {
            int neighbor;
            cin >> neighbor;
            adj_matrix[i][neighbor - 1] = 1;
            adj_matrix[neighbor - 1][i] = 1; // đối xứng
        }
    }

    // In ma trận kề
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
