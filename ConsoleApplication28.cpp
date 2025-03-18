#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream iFile;
    string line = "", first = "";
    int location = 0;

    // ³�������� ����
    iFile.open("translator.CSV");
    if (!iFile.is_open()) {
        cerr << "�� ������� ������� ���� translator.CSV" << endl;
        return 1;
    }

    // ���������� ���������
    getline(iFile, line); // ������ ������ ����� (���������)

    // ������ ������ �����
    if (getline(iFile, line)) {
        // ��������� ����� ����
        location = line.find(",");
        if (location != string::npos) { // ����������, �� ���� ��������
            first = line.substr(0, location); // ������ �������
            line = line.substr(location + 1); // ����� �����
        }
        else {
            cerr << "�������: �� �������� ���������� ','" << endl;
            return 1;
        }

        // �������� ���
        cout << "������ �������: " << first << endl;
        cout << "����� �����: " << line << endl;
    }
    else {
        cerr << "�������: ���� ������ ����������� �����" << endl;
    }

    // ��������� ����
    iFile.close();
    return 0;
}