#include <iostream>
using namespace std;



void one() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0)
        {
            arr[i] = 0;
        }
        cout << arr[i] << " ";
    }
    cout << endl;
}

void two() {    
    char str;
    cin >> str;
    do { 
        cout << "������� ��������: ";
        cin >> str;      
    } 
    while (isdigit(str) || isalpha(str));

    cout << "������� ������:\n";    
    string str2;  
    cin >> str2;

    for (int i = 0; i < str2.length(); i++) {
        if (str == str2[i])
        {
            cout << "������ � ������ �� " << i << " �����" << endl;
            return;
        }

    }
    cout << "�������� ������ ���!" << endl;
}

void three() {

    int arr[3][3];
    std::cout << "������� �������� ��� �������: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int r = arr[0][0] * arr[1][1] * arr[2][2]
        - arr[0][0] * arr[1][2] * arr[2][1]
        - arr[0][1] * arr[1][0] * arr[2][2]
        + arr[0][1] * arr[1][2] * arr[2][0]
        + arr[0][2] * arr[1][0] * arr[2][1]
        - arr[0][2] * arr[1][1] * arr[2][0];

    std::cout << "���������: " << r << endl;

}


int main() {
    setlocale(LC_ALL, "Russian");

  
    one();
    two();
    three();


    return 0;
}