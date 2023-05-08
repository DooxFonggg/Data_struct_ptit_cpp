#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int num_rows, num_cols, max_rectangle_area = 0;
        cin >> num_rows >> num_cols;

        vector<vector<int>> heights(num_rows, vector<int>(num_cols));
        for (int i = 0; i < num_rows; i++)
            for (int j = 0; j < num_cols; j++)
                cin >> heights[i][j];

        for (int i = 0; i < num_cols; i++)
            for (int j = 1; j < num_rows; j++)
                if (heights[j][i] == 1)
                    heights[j][i] = heights[j - 1][i] + 1;

        for (int i = 0; i < num_rows; i++) {
            stack<int> left, right;
            int left_limit[num_cols], right_limit[num_cols];

            for (int j = 0; j < num_cols; j++) {
                while (!left.empty() && heights[i][j] <= heights[i][left.top()])
                    left.pop();

                if (left.empty())
                    left_limit[j] = 0;
                else
                    left_limit[j] = left.top() + 1;

                left.push(j);
            }

            for (int j = num_cols - 1; j >= 0; j--) {
                while (!right.empty() && heights[i][j] <= heights[i][right.top()])
                    right.pop();

                if (right.empty())
                    right_limit[j] = num_cols - 1;
                else
                    right_limit[j] = right.top() - 1;

                right.push(j);
            }

            for (int j = 0; j < num_cols; j++)
                max_rectangle_area = max(max_rectangle_area, min(right_limit[j] - left_limit[j] + 1, heights[i][j]));
        }

        cout << max_rectangle_area << endl;
    }

    return 0;
}

