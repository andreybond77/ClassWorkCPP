#include <iostream>
using namespace std;


const int  width = 3;
const int  heigh = 4;
int s = 1, k = 0, n = 0;
int matr[heigh][width];
bool victor;
void show() {
	cout << "\033[94m" << "\t\t\t\t��������� �����" << endl;
	cout << "\033[97m" << "��������� ����� �������� ����� �� ���������� ����������� XIX ����." << endl;
	cout << "\033[97m" << "���� ��� �������, �� ���� �� ������� ��������  ������, ������ ������ ���������� �������� � ����� ������� �� �������." << endl;
	cout << "\033[97m" << "������ ������� � ���, ����� ��������� �������� �� ���������� ����� �� ���������� ����� ����� �� ������ ��������." << endl;
	cout << "\033[97m" << "�� ���� ��� ����������� ���������� ������ ���� ������, ������ ������ ������ ������� ������ �� �������" << endl;
	cout << endl;
	cout << "\033[97m" << "\t\t\t��� ������?" << endl;
	cout << "\033[97m" << "���������� �������." << endl;
	cout << "\033[97m" << "��������� ����� ��� ������� �������� ����� ��������, �� ������� ����� ������� ������." << endl;
	cout << "\033[97m" << "� ����� ����� ��� ������� �������� ����� ��������, ���� ��� ������ ��������." << endl;
	cout << "\033[97m" << "����� Enter." << endl;
	cout << endl;
	cout << "\033[95m" << "������ ����." << endl;
	cout << endl;
	cout << "\033[96m" << "�������: y" << endl;
	cout << endl;
}
void gen_arr(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++)

			if (n == 0) {

				ary[k][n] = s++;
			}
			else {
				ary[k][n] = 0;
			}
	}
}

void show_arr(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			cout << "\t\033[97m";
			if (n == 0) {
				cout << "\033[91m";



				if (ary[k][n] == 0) {
					cout << "   |";
				}

				if (ary[k][n] == 1) {
					cout << "\033[93m" << "   -";
				}
				if (ary[k][n] == 2) {
					cout << "\033[94m" << "  ---";
				}

				if (ary[k][n] == 3) {
					cout << "\033[95m" << " -----";
				}
				if (ary[k][n] == 4) {
					cout << "\033[96m" << "-------";
				}

			}
			if (n == 1) {
				cout << "\033[92m";

				if (ary[k][n] == 0) {
					cout << "   |";
				}

				if (ary[k][n] == 1) {
					cout << "\033[93m" << "   -";
				}
				if (ary[k][n] == 2) {
					cout << "\033[94m" << "  ---";
				}

				if (ary[k][n] == 3) {
					cout << "\033[95m" << " -----";
				}
				if (ary[k][n] == 4) {
					cout << "\033[96m " << "-------";
				}
			}
			if (n == 2) {
				cout << "\033[94m";
				if (ary[k][n] == 0) {
					cout << "   |";
				}

				if (ary[k][n] == 1) {
					cout << "\033[93m" << "   -";
				}
				if (ary[k][n] == 2) {
					cout << "\033[94m" << "  ---";
				}

				if (ary[k][n] == 3) {
					cout << "\033[95m" << " -----";
				}
				if (ary[k][n] == 4) {
					cout << "\033[96m" << "-------";
				}
			}
		}
		cout << endl;
	}

}


void sort_12(int size1, int size2, int ary[][width]) {

	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {

			if (n == 0) {
				if (ary[k][n] != 0) {



					if (ary[size1 - 1][1] == 0) {
						ary[size1 - 1][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[3][1] == 0 && ary[4][1] > ary[k][n]) {
						ary[3][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[2][1] == 0 && ary[3][1] > ary[k][n]) {
						ary[2][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[1][1] == 0 && ary[2][1] > ary[k][n]) {
						ary[1][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[0][1] == 0 && ary[1][1] > ary[k][n]) {
						ary[0][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					else {
						cout << "\033[91m" << "�� ������ ���" << endl;
						goto enter_1;
					}

				}
			}


		}
	}

enter_1:cout;


}


void sort_13(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			if (n == 0) {
				if (ary[k][n] != 0) {
					if (ary[size1 - 1][2] == 0) {
						ary[size1 - 1][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[3][2] == 0 && ary[4][2] > ary[k][n]) {
						ary[3][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[2][2] == 0 && ary[3][2] > ary[k][n]) {
						ary[2][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[1][2] == 0 && ary[2][2] > ary[k][n]) {
						ary[1][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[0][2] == 0 && ary[1][2] > ary[k][n]) {
						ary[0][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					else {
						cout << "\033[91m" << "�� ������ ���" << endl;
						goto enter_1;
					}
				}

			}



		}
	}
enter_1:cout;

}

void sort_21(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			if (n == 1) {

				if (ary[k][n] != 0) {


					if (ary[size1 - 1][0] == 0) {
						ary[size1 - 1][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[3][0] == 0 && ary[4][0] > ary[k][n]) {
						ary[3][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[2][0] == 0 && ary[3][0] > ary[k][n]) {
						ary[2][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[1][0] == 0 && ary[2][0] > ary[k][n]) {
						ary[1][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[0][0] == 0 && ary[1][0] > ary[k][n]) {
						ary[0][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					else {
						cout << "\033[91m" << "�� ������ ���" << endl;
						goto enter_1;
					}
				}
			}
		}

	}
enter_1:cout;
}
void sort_23(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			if (n == 1) {
				if (ary[k][n] != 0) {

					if (ary[size1 - 1][2] == 0) {
						ary[size1 - 1][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[3][2] == 0 && ary[4][2] > ary[k][n]) {
						ary[3][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[2][2] == 0 && ary[3][2] > ary[k][n]) {
						ary[2][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[1][2] == 0 && ary[2][2] > ary[k][n]) {
						ary[1][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[0][2] == 0 && ary[1][2] > ary[k][n]) {
						ary[0][2] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					else {
						cout << "\033[91m" << "�� ������ ���" << endl;
						goto enter_1;
					}
				}
			}
		}

	}
enter_1:cout;
}
void sort_31(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			if (n == 2) {
				if (ary[k][n] != 0) {

					if (ary[size1 - 1][0] == 0) {
						ary[size1 - 1][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[3][0] == 0 && ary[4][0] > ary[k][n]) {
						ary[3][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[2][0] == 0 && ary[3][0] > ary[k][n]) {
						ary[2][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[1][0] == 0 && ary[2][0] > ary[k][n]) {
						ary[1][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[0][0] == 0 && ary[1][0] > ary[k][n]) {
						ary[0][0] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					else {
						cout << "\033[91m" << "�� ������ ���" << endl;
						goto enter_1;
					}
				}
			}
		}

	}
enter_1:cout;

}
void sort_32(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n <= size2; n++) {
			if (n == 2) {
				if (ary[k][n] != 0) {

					if (ary[size1 - 1][1] == 0) {
						ary[size1 - 1][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[3][1] == 0 && ary[4][1] > ary[k][n]) {
						ary[3][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[2][1] == 0 && ary[3][1] > ary[k][n]) {
						ary[2][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[1][1] == 0 && ary[2][1] > ary[k][n]) {
						ary[1][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					if (ary[0][1] == 0 && ary[1][1] > ary[k][n]) {
						ary[0][1] = ary[k][n];
						ary[k][n] = 0;
						goto enter_1;
					}
					else {
						cout << "\033[91m" << "�� ������ ���" << endl;
						goto enter_1;
					}
				}
			}
		}

	}
enter_1:cout;
}
void show_arr_victoria(int size1, int size2, int ary[][width]) {

	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			if (ary[0][1] != 0 || ary[0][2] != 0) {
				victor == true;
				cout << "\033[91m" << "\t\t\t������" << endl;
				goto enter;
			}

		}
	}
enter:cout << " " << endl;
}


void test() {
	int size = 100;
	int number;
	int matr[heigh][width];
	show();
	char start;
	cin >> start;
	if (start == 'y') {
		goto rex;
	}
	else {
		cout << "�� ���������� ����!" << endl;
		goto enter1;
	}



rex:cout << "" << endl;
	gen_arr(heigh, width, matr);
	cout << "   \t   1\t   2\t   3" << endl;
	show_arr(heigh, width, matr);

	for (int k = 0; k < size; k++) {
		show_arr_victoria(heigh, width, matr);


		cout << "\033[92m" << "\t\t\t\t���:" << k + 1 << endl;
		do {
			cout << "--------" << endl;
			cout << "�����: 0   \n";
			cout << "--------" << endl;
		enter:cout << "\033[93m" << "��� �����: ";
			cin >> number;
			if (number != 0 || 12 || 13 || 21 || 23 || 31 || 32) {

				
			}
		} while (number < 0 || number > 32);
		switch (number) {
		case 12:sort_12(heigh, width, matr);
			cout << "   \t   1\t   2\t   3" << endl;
			show_arr(heigh, width, matr);break;
		case 13:sort_13(heigh, width, matr);
			cout << "   \t   1\t   2\t   3" << endl;
			show_arr(heigh, width, matr); break;
		case 21:sort_21(heigh, width, matr);
			cout << "   \t   1\t   2\t   3" << endl;
			show_arr(heigh, width, matr); break;
		case 23:sort_23(heigh, width, matr);
			cout << "   \t   1\t   2\t   3" << endl;
			show_arr(heigh, width, matr); break;
		case 31:sort_31(heigh, width, matr);
			cout << "   \t   1\t   2\t   3" << endl;
			show_arr(heigh, width, matr); break;
		case 32:sort_32(heigh, width, matr);
			cout << "   \t   1\t   2\t   3" << endl;
			show_arr(heigh, width, matr); break;
		case 0:cout << "��������!"; goto enter1;
		default:cout << "�� ���������� ����!"; break;
			goto enter;
		}

	}
end:cout << "" << endl;
enter1:cout << "" << endl;

}


int main() {
	setlocale(LC_ALL, "ru");
	test();
	system("pause");
	return 0;
}