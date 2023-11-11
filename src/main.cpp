// cpp�ļ���ͷ�ļ���Windows�������GB2312���룬��ֹ��������
#include "student.h"
#include <vector>
#include <iostream>

using namespace std;

int fib(int n) {
    if (n < 2) {
        return n;
    }
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main(int argc, char const *argv[]) {
    cout << "����������\n";
    string str = "";
    cin >> str;
    cout << str << endl;

    cout << "--------------------------" << endl;

    for (int i = 0; i < 10; i++) {
        cout << fib(i) << endl;
    }
    Student *student = new Student("Cukor", 18);
    student->show();
    return 0;
}
