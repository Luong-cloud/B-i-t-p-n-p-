#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void bai1() {
    char strHello[100] = "Xin chao";
    cout << strHello;
    cout << "\n";
}

void bai2() {
    int int5 = 5;
    int int8 = 8;
    cout << "Ket qua phep cong 5 + 8 la: " << int5 + int8;
    cout << "\n";
}

void bai3() {
    char strTenNguoiDung[100];
    cout << "Nhap vao ten nguoi dung: ";
    cin >> strTenNguoiDung;
    cout << "Ten nguoi dung: " << strTenNguoiDung << "\n";
}

void bai4() {
    int intSo1, intSo2;
    cout << "Nhap vo so thu nhat: ";
    cin >> intSo1;
    cout << "Nhap vo so thu hai: ";
    cin >> intSo2;
    cout << "Tong cua hai so: ";
    cout << intSo1 + intSo2;
    cout << "\n";
}

void bai5() {
    int intSo1 = 10;
    int intSo2 = 100;

    int temp = intSo1;
    intSo1 = intSo2;
    intSo2 = temp;

    cout << "So sau khi hoan doi: \n";
    cout << "So 1: " << intSo1 << endl;
    cout << "So 2: " << intSo2 << endl;
}

void bai6() {
    float flA;
    float flB;
    cout << "Nhap so float thu nhat: ";
    cin >> flA;
    cout << "Nhap so float thu hai: ";
    cin >> flB;
    cout << "Tong 2 so float: " << flA + flB << "\n";
    cout << "Hieu 2 so float: " << flA - flB << "\n";
    cout << "Tich 2 so float: " << flA * flB << "\n";
    cout << "Thuong 2 so float: " << flA / flB;
    cout << "\n";
}

void bai7() {
    float flA, flB, flC, flMin, flMax;

    cout << "Nhap so A: ";
    cin >> flA;
    cout << "Nhap so B: ";
    cin >> flB;
    cout << "Nhap so C: ";
    cin >> flC;

    flMin = flA;
    flMax = flA;

    if (flMin > flB) {
        flMin = flB;
    }
    if (flMin > flC) {
        flMin = flC;
    }
    if (flMax < flB) {
        flMax = flB;
    }
    if (flMax < flC) {
        flMax = flC;
    }
    cout << "So be nhat la: " << flMin << endl;
    cout << "So lon nhat la: " << flMax;
    cout << "\n";
}

void bai8() {
    int n;
    float flResult = 0;
    float flInput = 0;
    cout << "Nhap vao so n(n < 100): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int intPos = i + 1;
        cout << "Nhap so thu " << intPos << ": ";
        cin >> flInput;
        flResult = flResult + flInput;
    }
    cout << "Trung binh cong: " << flResult / n;
    cout << "\n";
}

void bai9() {
    float a, b, c;
    float flChuVi, flDienTich;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        flChuVi = a + b + c;
        float flNuaChuVi = flChuVi / 2;
        flDienTich = sqrt(flNuaChuVi * (flNuaChuVi - a) * (flNuaChuVi - b) * (flNuaChuVi - c));
        cout << "Chu vi: " << flChuVi << endl;
        cout << "Dien tich: " << flDienTich << endl;
    }
    else {
        cout << "Khong phai tam giac \n";
    }
}

void bai10() {
    float a, b, c, delta;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    if (a == 0) {
        cout << "Khong phai phuong trinh bac 2" << endl;
    }
    else {
        delta = (b * b) - (4 * a * c);
        if (delta == 0) {
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b / (2 * a) << "\n";
        }
        else if (delta > 0) {
            cout << "Phuong trinh co 2 nghiem phan biet: x1 = " << (-b + sqrt(delta)) / (2 * a) << ", x2 = " << (-b - sqrt(delta)) / (2 * a) << "\n";
        }
        else {
            cout << "Phuong trinh vo nghiem" << "\n";
        }

    }
}

void bai11() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << "\t";
        }
        cout << "\n";
    }
}

void bai12() {
    int n;
    bool isPrime = true;
    cout << "Nhap vo so n: ";
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
        }
    }
    if (isPrime == true) {
        cout << n << " la so nguyen to";
    }
    else {
        cout << n << " khong phai la so nguyen to";
    }
    cout << "\n";
}
void bai13() {
    vector<int> lstInt = { 5, 6, 2, 3, 8, 7, 2, 8 };
    int intTarget = 5;

    for (int i = 0; i < lstInt.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (i != j) {
                if (lstInt[i] + lstInt[j] == intTarget) {
                    cout << "Vi tri: " << i << "va" << j << endl;
                }
            }
        }
    }
}
void bai14() {
    vector<int> lstInt = { 3, 1, 2, 10, 1 };

    cout << "[ ";
    for (int i = 0; i < lstInt.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum = sum + lstInt[j];
        }
        cout << sum;
        if (i != lstInt.size() - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;
}
int main()
{
    int intInput;
    bool isRunning = true;

    while (isRunning) {
        cout << "Nhap vao menu tuong ung: " << "\n";
        cout << "1: Bai 1" << "\n";
        cout << "2: Bai 2" << "\n";
        cout << "3: Bai 3" << "\n";
        cout << "4: Bai 4" << "\n";
        cout << "5: Bai 5" << "\n";
        cout << "6: Bai 6" << "\n";
        cout << "7: Bai 7" << "\n";
        cout << "8: Bai 8" << "\n";
        cout << "9: Bai 9" << "\n";
        cout << "10: Bai 10" << "\n";
        cout << "11: Bai 11" << "\n";
        cout << "12: Bai 12" << "\n";
        cout << "13: Bai 13" << "\n";
        cout << "14: Bai 14" << "\n";
        cout << "0: Thoat" << "\n";


        cin >> intInput;

        switch (intInput) {
        case 1: {
            bai1();
            break;
        }
        case 2: {
            bai2();
            break;
        }
        case 3: {
            bai3();
            break;
        }
        case 4: {
            bai4();
            break;
        }
        case 5: {
            bai5();
            break;
        }
        case 6: {
            bai6();
            break;
        }
        case 7: {
            bai7();
            break;
        }
        case 8: {
            bai8();
            break;
        }
        case 9: {
            bai9();
            break;
        }
        case 10: {
            bai10();
            break;
        }
        case 11: {
            bai11();
            break;
        }
        case 12: {
            bai12();
            break;
        }
        case 13: {
            bai13();
            break;
        }
        case 14: {
            bai14();
            break;
        }
        case 0: {
            isRunning = false;
            break;
        }
        }
    }
}