#include<iostream>
using namespace std;
int ones(string s) {
    if (s.empty()) {
        return 0;
    }
    int count = ones(s.substr(1)); // Đệ quy trên chuỗi con bắt đầu từ ký tự thứ hai
    if (s[0] == '1') { // Nếu bit đầu tiên là 1, tăng biến đếm lên 1
        count++;
    }
    return count;
}
int main(){
string s = "01010101";
int count = ones(s);
cout << "Number of 1 bits in " << s << ": " << count << endl; // Kết quả: 4

}
