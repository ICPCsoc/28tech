#include "bits/stdc++.h"
//Nạp thư viện iostream để sử dụng cin, cout (nhập và xuất dữ liệu).
//Nạp thư viện cmath để dùng hàm sqrt() (tính căn bậc hai).
#include <iomanip>
//Nạp thư viện iomanip để dùng setprecision() – giúp in số thực chính xác đến 2 chữ số sau dấu phẩy.
using namespace std;
//Giúp viết cin, cout thay vì std::cin, std::cout.
int main() {
//Hàm chính của chương trình, nơi bắt đầu chạy.
    double a, b, c;
    //Khai báo 3 biến kiểu double để lưu hệ số của phương trình 
    cin >> a >> b >> c;
    //Nhập vào giá trị 3 hệ số a, b, c từ bàn phím.
    cout << fixed << setprecision(2);
    //Cấu hình cout để in số thực luôn có 2 chữ số sau dấu phẩy (ví dụ: 1.00, -2.35).
    if (a == 0) {
    //Nếu a = 0, phương trình trở thành bậc nhất hoặc không có ẩn số.
        if (b == 0) {
        //Nếu a = 0 và b = 0 → còn lại c = 0 hay c ≠ 0.
            if (c == 0)
                cout << "INF";
                //Nếu a = b = 0 nhưng c ≠ 0 → phương trình 0 = c ⇒ vô nghiệm.
            else
                cout << "NO";
                //Nếu a = b = 0 nhưng c ≠ 0 → phương trình 0 = c ⇒ vô nghiệm.

        } else {
            double x = -c / b;
            cout << x;
            //Nếu a = 0, b ≠ 0 ⇒ là phương trình bậc nhất bx + c = 0;
            //→ nghiệm là x = -c / b
        }
    } else {
        double delta = b * b - 4 * a * c;
        //Tính delta (biệt thức) của phương trình bậc 2.
        if (delta < 0) {
            cout << "NO";
            //Nếu delta < 0 → vô nghiệm (nghiệm là số phức).
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << x;
            //Nếu delta == 0 → có nghiệm kép: x = b - b / (2a)
        } else {
            double sqrtDelta = sqrt(delta);
            //Nếu delta > 0 → có 2 nghiệm phân biệt. Tính căn delta.
            double x1 = (-b - sqrtDelta) / (2 * a);
            double x2 = (-b + sqrtDelta) / (2 * a);
            //Tính 2 nghiệm theo công thức nghiệm tổng quát
            if (x1 > x2)
                swap(x1, x2);
            //Đảm bảo in nghiệm theo thứ tự tăng dần.
            cout << x1 << " " << x2;
            //In hai nghiệm, cách nhau bởi một dấu cách.
        }
    }
    return 0;
}
//Kết thúc chương trình.