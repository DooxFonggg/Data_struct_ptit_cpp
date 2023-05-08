//hinh vuong
#include <bits/stdc++.h>
using namespace std;
//quay hình vuông
// Khai báo 2 mảng l, r là các chỉ số cho biết miếng ghép bên trái và bên phải
int l[6] = {3, 0, 2, 4, 1, 5};
int r[6] = {0, 4, 1, 3, 5, 2};
// Hàm dịch miếng ghép sang bên trái
string shiftLeft(string a) {
    string b = "";
    for (int i = 0; i < 6; i++) {
        b += a[l[i]];
    }
    return b;
}

// Hàm dịch miếng ghép sang bên phải
string shiftRight(string a) {
    string b = "";
    for (int i = 0; i < 6; i++) {
        b += a[r[i]];
    }
    return b;
}

int main(){
        string start, end;
        int x;

        // Nhập miếng ghép ban đầu và miếng ghép mục tiêu
        for (int i = 0; i < 6; i++) {
            cin >> x;
            start += to_string(x);
        }

        for (int i = 0; i < 6; i++) {
            cin >> x;
            end += to_string(x);
        }

        // Khởi tạo cấu trúc dữ liệu dùng để lưu trữ trạng thái hiện tại của miếng ghép và số lần dịch cần thực hiện
        pair<string, int> current, next;
        current.first = start;
        current.second = 0;
        queue<pair<string, int>> q;
        q.push(current);
        // Duyệt miếng ghép theo chiều rộng
        while (!q.empty()) {
            current = q.front();
            q.pop();
            // Nếu đã đến trạng thái mục tiêu thì xuất ra kết quả và thoát khỏi vòng lặp
            if (current.first == end) {
                cout << current.second << endl;
                break;
            }
            // Nếu chưa đến trạng thái mục tiêu thì thực hiện dịch miếng ghép và đẩy vào queue để tiếp tục duyệt
            next.second = current.second + 1;
            next.first = shiftLeft(current.first);
            q.push(next);
            next.first = shiftRight(current.first);
            q.push(next);
        }

    return 0;
}
