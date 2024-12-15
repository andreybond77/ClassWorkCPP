/*
#include <iostream>
using namespace std;

int a = 0, b = 0, c = 0, d = 0, r = 0;
const int  width = 5;
const int  heigh = 4;
int s = 1, k = 0, n = 0;
int matr[heigh][width];
bool victor;
void show(){
	cout << "\033[94m" << "\t\t\t\t������ � ������" << endl;
	cout << "\033[97m" << "���-�� ��������� ������ � ������! " << endl;
	cout << "\033[97m" << "�������� �������, ������������ ������ �� ������ ���, " << endl;
	cout << "\033[97m" << "����� � ����� ���� ������ ������ �����." << endl;
	cout << "\033[97m" << "\t\t\t��� ������?" << endl;
	cout << "\033[97m" << "���������� �������." << endl;
	cout << "\033[97m" << "��������� ����� ��� ������� �������� ����� �����, �� ������� ����� ������� ���." << endl;
	cout << "\033[97m" << "� ����� ����� ��� ������� �������� ����� �����, ���� ���� ��� ���������." << endl;
	cout << "\033[97m" << "����� Enter." << endl;
	cout << "" << endl;
	cout << "\033[95m" << "������ ����." << endl;
	cout << "\033[96m" << "�������: y" << endl;
}
int get_rand(int a, int b) {
	return rand() % (b - a + 1) + a;
}

void show_arr(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			cout.width(3);
			if (n == 0) {
				cout << "\t\033[97m" << "|" << "\033[97m" << char(32) << "\033[97m" << "|" << " ";
			}
			else {
				if (ary[k][n] == 0) {
					cout << "\t\033[97m" << "|" << "\033[97m" << char(32) << "\033[97m" << "|" << " ";
				}
				if (ary[k][n] == 1) {
					cout << "\t\033[97m" <<"|" << "\033[91m" << char(3) << "\033[97m" << "|" << " ";
				}
				if (ary[k][n] == 2) {
					cout << "\t\033[97m" << "|" << "\033[92m" << char(4) << "\033[97m" << "|" << " ";
				}
				if (ary[k][n] == 3) {
					cout << "\t\033[97m" << "|" << "\033[93m" << char(5) << "\033[97m" << "|" << " ";
				}
				if (ary[k][n] == 4) {
					cout << "\t\033[97m" << "|" << "\033[94m" << char(6) << "\033[97m" << "|" << " ";
				}
			}			
		}
		cout << endl;
	}
}
void show_arr_1(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			cout.width(3);			
			if (ary[k][n] == 0) {
				cout << "\t\033[97m" << "|" << "\033[97m" << char(32) << "\033[97m" << "|" << " ";
			}
			if (ary[k][n] == 1) {
				cout << "\t\033[97m" << "|" << "\033[91m" << char(3) << "\033[97m" << "|" << " ";
			}
			if (ary[k][n] == 2) {
				cout << "\t\033[97m" << "|" << "\033[92m" << char(4) << "\033[97m" << "|" << " ";
			}
			if (ary[k][n] == 3) {
				cout << "\t\033[97m" << "|" << "\033[93m" << char(5) << "\033[97m" << "|" << " ";
			}
			if (ary[k][n] == 4) {
				cout << "\t\033[97m" << "|" << "\033[94m" << char(6) << "\033[97m" << "|" << " ";
			}			
		}
		cout << endl;
	}
}
void gen_arr(int size1, int size2,  int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 1; n < size2; n++) {		
				r = get_rand(1, 4);
				if (r == 1) {					
					if (a < 4) {
						ary[k][n] = 1;
						a++;						
					}
					else if (b < 4) {

						ary[k][n] = 2;
						b++;						
					}
					else if(c < 4) {
						ary[k][n] = 3;
						c++;						
					}
					else if (d < 4) {
						ary[k][n] = 4;
						d++;						
					}					
				}
				if (r == 2) {
					if (b < 4) {
						ary[k][n] = 2;
						b++;						
					}					
					else if (c < 4) {
						ary[k][n] = 3;
						c++;						
					}
					else if (d < 4) {
						ary[k][n] = 4;
						d++;						
					}
					else if (a < 4) {
						ary[k][n] = 1;
						a++;						
					}
				}
				if (r == 3) {
					if (c < 4) {
						ary[k][n] = 3;
						c++;						
					}
					else if (d < 4) {
						ary[k][n] = 4;
						d++;	
					}
					else if (a < 4) {
						ary[k][n] = 1;
						a++;	
					}
					else if (b < 4) {
						ary[k][n] = 2;
						b++;	
					}
				}
				if (r == 4) {
					if (d < 4) {
						ary[k][n] = 4;
						d++;
					}
					else if (a < 4) {
						ary[k][n] = 1;
						a++;
					}
					else if (b < 4) {
						ary[k][n] = 2;
						b++;
					}
					else if (c < 4) {
						ary[k][n] = 3;
						c++;
					}
				}
			}		
		}	
	}
void sort(int size1, int size2, int ary[][width]) {
	if (ary[k][n] != 0) {
		int t;

		if (ary[3][0] == 0) {
			t = ary[k][n];
			ary[k][n] = ary[3][0];
			ary[3][0] = t;
			goto enter_1;
		}
		if (ary[2][0] == 0 && ary[3][0] == ary[k][n]) {
			t = ary[k][n];
			ary[k][n] = ary[2][0];
			ary[2][0] = t;
			goto enter_1;
		}

		if (ary[1][0] == 0 && ary[2][0] == ary[k][n]) {
			t = ary[k][n];
			ary[k][n] = ary[1][0];
			ary[1][0] = t;
			goto enter_1;
		}
		if (ary[0][0] == 0 && ary[1][0] == ary[k][n]) {
			t = ary[k][n];
			ary[k][n] = ary[0][0];
			ary[0][0] = t;
			goto enter_1;
		}
		else {
			cout << "\033[91m" << "�� ������ ���" << endl;
			goto enter_1;
		}
	}
enter_1:cout;
}
void sort_12(int size1, int size2, int ary[][width]) {

	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			
			if (n == 0) {
				if (ary[k][n] != 0) {
					int t;

					if (ary[3][1] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][1];
						ary[3][1] = t;
						goto enter_1;
					}
					if (ary[2][1] == 0 && ary[3][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][1];
						ary[2][1] = t;
						goto enter_1;
					}

					if (ary[1][1] == 0 && ary[2][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][1];
						ary[1][1] = t;
						goto enter_1;
					}
					if (ary[0][1] == 0 && ary[1][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][1];
						ary[0][1] = t;
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
					int t;
					if (ary[3][2] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][2];
						ary[3][2] = t;
						goto enter_1;
					}
					if (ary[2][2] == 0 && ary[3][2] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][2];
						ary[2][2] = t;
						goto enter_1;
					}

					if (ary[1][2] == 0 && ary[2][2] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][2];
						ary[1][2] = t;
						goto enter_1;
					}
					if (ary[0][2] == 0 && ary[1][2] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][2];
						ary[0][2] = t;
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
void sort_14(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {			
			if (n == 0) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][3] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][3];
						ary[3][3] = t;
						goto enter_1;
					}
					if (ary[2][3] == 0 && ary[3][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][3];
						ary[2][3] = t;
						goto enter_1;
					}

					if (ary[1][3] == 0 && ary[2][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][3];
						ary[1][3] = t;
						goto enter_1;
					}
					if (ary[0][3] == 0 && ary[1][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][3];
						ary[0][3] = t;
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
void sort_15(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {			
			if (n == 0) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][4] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][4];
						ary[3][4] = t;
						goto enter_1;
					}
					if (ary[2][4] == 0 && ary[3][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][4];
						ary[2][4] = t;
						goto enter_1;
					}

					if (ary[1][4] == 0 && ary[2][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][4];
						ary[1][4] = t;
						goto enter_1;
					}
					if (ary[0][4] == 0 && ary[1][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][4];
						ary[0][4] = t;
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
					int t;
					if (ary[3][0] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][0];
						ary[3][0] = t;
						goto enter_1;
					}
					if (ary[2][0] == 0 && ary[3][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][0];
						ary[2][0] = t;
						goto enter_1;
					}
					if (ary[1][0] == 0 && ary[2][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][0];
						ary[1][0] = t;
						goto enter_1;
					}
					if (ary[0][0] == 0 && ary[1][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][0];
						ary[0][0] = t;
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
					int t;
					if (ary[3][2] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][2];
						ary[3][2] = t;
						goto enter_1;
					}
					if (ary[2][2] == 0 && ary[3][2] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][2];
						ary[2][2] = t;
						goto enter_1;
					}

					if (ary[1][2] == 0 && ary[2][2] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][2];
						ary[1][2] = t;
						goto enter_1;
					}
					if (ary[0][2] == 0 && ary[1][2] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][2];
						ary[0][2] = t;
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
void sort_24(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			if (n == 1) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][3] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][3];
						ary[3][3] = t;
						goto enter_1;
					}
					if (ary[2][3] == 0 && ary[3][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][3];
						ary[2][3] = t;
						goto enter_1;
					}

					if (ary[1][3] == 0 && ary[2][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][3];
						ary[1][3] = t;
						goto enter_1;
					}
					if (ary[0][3] == 0 && ary[1][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][3];
						ary[0][3] = t;
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
void sort_25(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {			
			if (n == 1) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][4] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][4];
						ary[3][4] = t;
						goto enter_1;
					}
					if (ary[2][4] == 0 && ary[3][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][4];
						ary[2][4] = t;
						goto enter_1;
					}

					if (ary[1][4] == 0 && ary[2][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][4];
						ary[1][4] = t;
						goto enter_1;
					}
					if (ary[0][4] == 0 && ary[1][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][4];
						ary[0][4] = t;
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
					int t;
					if (ary[3][0] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][0];
						ary[3][0] = t;
						goto enter_1;
					}
					if (ary[2][0] == 0 && ary[3][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][0];
						ary[2][0] = t;
						goto enter_1;
					}

					if (ary[1][0] == 0 && ary[2][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][0];
						ary[1][0] = t;
						goto enter_1;
					}
					if (ary[0][0] == 0 && ary[1][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][0];
						ary[0][0] = t;
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
		for (int n = 0; n < size2; n++) {			
			if (n == 2) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][1] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][1];
						ary[3][1] = t;
						goto enter_1;
					}
					if (ary[2][1] == 0 && ary[3][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][1];
						ary[2][1] = t;
						goto enter_1;
					}

					if (ary[1][1] == 0 && ary[2][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][1];
						ary[1][1] = t;
						goto enter_1;
					}
					if (ary[0][1] == 0 && ary[1][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][1];
						ary[0][1] = t;
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
void sort_34(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {			
			if (n == 2) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][3] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][3];
						ary[3][3] = t;
						goto enter_1;
					}
					if (ary[2][3] == 0 && ary[3][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][3];
						ary[2][3] = t;
						goto enter_1;
					}

					if (ary[1][3] == 0 && ary[2][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][3];
						ary[1][3] = t;
						goto enter_1;
					}
					if (ary[0][3] == 0 && ary[1][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][3];
						ary[0][3] = t;
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
void sort_35(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {		
			if (n == 2) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][4] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][4];
						ary[3][4] = t;
						goto enter_1;
					}
					if (ary[2][4] == 0 && ary[3][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][4];
						ary[2][4] = t;
						goto enter_1;
					}
					if (ary[1][4] == 0 && ary[2][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][4];
						ary[1][4] = t;
						goto enter_1;
					}
					if (ary[0][4] == 0 && ary[1][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][4];
						ary[0][4] = t;
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
void sort_41(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {		
			if (n == 3) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][0] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][0];
						ary[3][0] = t;
						goto enter_1;
					}
					if (ary[2][0] == 0 && ary[3][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][0];
						ary[2][0] = t;
						goto enter_1;
					}
					if (ary[1][0] == 0 && ary[2][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][0];
						ary[1][0] = t;
						goto enter_1;
					}
					if (ary[0][0] == 0 && ary[1][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][0];
						ary[0][0] = t;
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
void sort_42(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {			
			if (n == 3) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][1] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][1];
						ary[3][1] = t;
						goto enter_1;
					}
					if (ary[2][1] == 0 && ary[3][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][1];
						ary[2][1] = t;
						goto enter_1;
					}

					if (ary[1][1] == 0 && ary[2][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][1];
						ary[1][1] = t;
						goto enter_1;
					}
					if (ary[0][1] == 0 && ary[1][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][1];
						ary[0][1] = t;
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
void sort_43(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {		
			if (n == 3) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][2] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][2];
						ary[3][2] = t;
						goto enter_1;
					}
					if (ary[2][2] == 0 && ary[3][2] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][2];
						ary[2][2] = t;
						goto enter_1;
					}
					if (ary[1][2] == 0 && ary[2][2] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][2];
						ary[1][2] = t;
						goto enter_1;
					}
					if (ary[0][2] == 0 && ary[1][2] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][2];
						ary[0][2] = t;
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
void sort_45(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {			
			if (n == 3) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][4] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][4];
						ary[3][4] = t;
						goto enter_1;
					}
					if (ary[2][4] == 0 && ary[3][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][4];
						ary[2][4] = t;
						goto enter_1;
					}
					if (ary[1][4] == 0 && ary[2][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][4];
						ary[1][4] = t;
						goto enter_1;
					}
					if (ary[0][4] == 0 && ary[1][4] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][4];
						ary[0][4] = t;
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
void sort_51(int size1, int size2, int ary[][width]) {

	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {		
			if (n == 4) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][0] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][0];
						ary[3][0] = t;
						goto enter_1;
					}
					if (ary[2][0] == 0 && ary[3][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][0];
						ary[2][0] = t;
						goto enter_1;
					}
					if (ary[1][0] == 0 && ary[2][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][0];
						ary[1][0] = t;
						goto enter_1;
					}
					if (ary[0][0] == 0 && ary[1][0] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][0];
						ary[0][0] = t;
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
void sort_52(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {
			if (n == 4) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][1] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][1];
						ary[3][1] = t;
						goto enter_1;
					}
					if (ary[2][1] == 0 && ary[3][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][1];
						ary[2][1] = t;
						goto enter_1;
					}
					if (ary[1][1] == 0 && ary[2][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][1];
						ary[1][1] = t;
						goto enter_1;
					}
					if (ary[0][1] == 0 && ary[1][1] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][1];
						ary[0][1] = t;
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
void sort_53(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {			
			if (n == 4) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][2] == 0) {				
						t = ary[k][n];
						ary[k][n] = ary[3][2];
						ary[3][2] = t;					
						goto enter_1;
					}
					if (ary[2][2] == 0 && ary[3][2] == ary[k][n]) {
						
						t = ary[k][n];
						ary[k][n] = ary[2][2];
						ary[2][2] = t;
					
						goto enter_1;
					}

					if (ary[1][2] == 0 && ary[2][2] == ary[k][n]) {
						
						t = ary[k][n];
						ary[k][n] = ary[1][2];
						ary[1][2] = t;
						
						goto enter_1;
					}
					if (ary[0][2] == 0 && ary[1][2] == ary[k][n]) {
						
						t = ary[k][n];
						ary[k][n] = ary[0][2];
						ary[0][2] = t;
						
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
void sort_54(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {			
			if (n == 4) {
				if (ary[k][n] != 0) {
					int t;
					if (ary[3][3] == 0) {
						t = ary[k][n];
						ary[k][n] = ary[3][3];
						ary[3][3] = t;
						goto enter_1;
					}
					if (ary[2][3] == 0 && ary[3][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[2][3];
						ary[2][3] = t;
						goto enter_1;
					}
					if (ary[1][3] == 0 && ary[2][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[1][3];
						ary[1][3] = t;
						goto enter_1;
					}
					if (ary[0][3] == 0 && ary[1][3] == ary[k][n]) {
						t = ary[k][n];
						ary[k][n] = ary[0][3];
						ary[0][3] = t;
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
	int v = 0;
	int x_0 = 0, y_0 = 0, z_0 = 0, q_0 = 0;
	int x_1 = 0, y_1 = 0, z_1 = 0, q_1 = 0;
	int x_2 = 0, y_2 = 0, z_2 = 0, q_2 = 0;
	int x_3 = 0, y_3 = 0, z_3 = 0, q_3 = 0;
	int x_4 = 0, y_4 = 0, z_4 = 0, q_4 = 0;
	for (int k = 0; k < size1; k++) {
		for (int n = 0; n < size2; n++) {		
			if (n == 0) {
				if (ary[k][n] == 1) {
					x_0++;				
				}
				if (ary[k][n] == 2) {
					y_0++;					
				}
				if (ary[k][n] == 3) {
					z_0++;	
				}
				if (ary[k][n] == 4) {
					q_0++;
				}
				if (x_0 == 4 || y_0 == 4 || z_0 == 4 || q_0 == 4) {
					cout << "������� ������������ ������ � 1 ����� " << endl;
					v++;					
				}				
			}
			if (n == 1) {
				if (ary[k][n] == 1) {
					x_1++;
				}
				if (ary[k][n] == 2) {
					y_1++;
				}
				if (ary[k][n] == 3) {
					z_1++;
				}
				if (ary[k][n] == 4) {
					q_1++;
				}
				if (x_1 == 4 || y_1 == 4 || z_1 == 4 || q_1 == 4) {
					cout << "������� ������������ ������ � 2 �����" << endl;
					v++;					
				}				
			}
			if (n == 2) {
				if (ary[k][n] == 1) {
					x_2++;
				}
				if (ary[k][n] == 2) {
					y_2++;
				}
				if (ary[k][n] == 3) {
					z_2++;
				}
				if (ary[k][n] == 4) {
					q_2++;
				}
				if (x_2 == 4 || y_2 == 4 || z_2 == 4 || q_2 == 4) {
					cout << "������� ������������ ������ � 3 �����" << endl;
					v++;					
				}				
			}
			if (n == 3) {
				if (ary[k][n] == 1) {
					x_3++;
				}
				if (ary[k][n] == 2) {
					y_3++;
				}
				if (ary[k][n] == 3) {
					z_3++;
				}
				if (ary[k][n] == 4) {
					q_3++;
				}
				if (x_3 == 4 || y_3 == 4 || z_3 == 4 || q_3 == 4) {
					cout << "������� ������������ ������ � 4 �����" << endl;
					v++;				
				}				
			}
			if (n == 4) {
				if (ary[k][n] == 1) {
					x_4++;
				}
				if (ary[k][n] == 2) {
					y_4++;
				}
				if (ary[k][n] == 3) {
					z_4++;
				}
				if (ary[k][n] == 4) {
					q_4++;
				}
				if (x_4 == 4 || y_4 == 4 || z_4 == 4 || q_4 == 4) {
					cout << "������� ������������ ������ � 5 �����" << endl;
					v++;					
				}
				
			}
		}
	}
	if (v == 4) {
		cout << "\033[91m" << "\t\t\t������" << endl;
	}
end: cout << "" << endl;
}
void test() {
	int size = 100;
	int number;
	char start;
	show();
	enter1:cout  << "" << endl;
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
	cout << "  \t 1\t 2\t 3\t 4\t 5" << endl;
	show_arr(heigh, width, matr);

	for (int k = 0; k < size; k++) {
		show_arr_victoria(heigh, width, matr);
		cout << "\033[92m" << "\t\t\t\t���:" << k + 1 << endl;
		do {
			cout << "------------" << endl;
			cout << " �����: 0  \n";
			cout << "------------" << endl;
		enter:cout << "\033[93m" << "��� �����: ";
			cin >> number;
			if (number != 12 || 13 || 14 || 15 || 21 || 23 || 24 || 25 || 31 || 32 || 34 || 35 || 41 || 42 || 43 || 45 || 51 || 52 || 53 || 54) {			
			}			
		} while (number < 0 || number > 54);
		switch (number) {
		case 0:cout << "��������!"; goto enter3;
		case 12:sort_12(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr);break;
		case 13:sort_13(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 14:sort_14(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 15:sort_15(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 21:sort_21(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 23:sort_23(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 24:sort_24(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 25:sort_25(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 31:sort_31(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 32:sort_32(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 34:sort_34(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 35:sort_35(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 41:sort_41(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 42:sort_42(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 43:sort_43(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 45:sort_45(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 51:sort_51(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 52:sort_52(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 53:sort_53(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;
		case 54:sort_54(heigh, width, matr);
			cout << "  \t1\t2\t3\t4\t5" << endl;
			show_arr_1(heigh, width, matr); break;		
		default:cout << "�� ���������� ����!"; break;
			goto enter;
		}
	}
end:cout << "" << endl;
enter3:cout << "" << endl;
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	test();
	system("pause");
	return 0;
}
*/
#include <iostream>

using namespace std;

int a = 0, b = 0, c = 0, d = 0, f = 0, r = 0;
int red_box = 0, green_box = 0, yellow_box = 0, blue_box = 0;
int red_col = 0, green_col = 0, blue_col = 0, yellow_coll = 0;
int red_box_counter = 0, green_box_counter = 0, blue_box_counter = 0, yellow_box_counter = 0, number_of_boxes = 0;
const int  width = 5;
const int  heigh = 5;
int matr[heigh][width];
int cash;

int get_rand(int a, int b) {
	return rand() % (b - a + 1) + a;
}

void show() {
	cout << "\033[93m" << "\t\t\t\t�����" << endl;
	cout << "\033[92m" << "\t������. ����� ����������?" << endl;
	cout << "\033[92m" << "\t���-�� �������� ������� �� ������! " << endl;
	cout << "\033[92m" << "\t�������� �������, ������������ ������� �� ������ ���, " << endl;
	cout << "\033[92m" << "\t����� �� ��������� ���� ������� ������ �����." << "\033[97m" << endl;
}

void gen_arr(int size1, int size2, int ary[][width]) {
	for (int k = -1; k < size1; k++)
	{
		for (int n = -1; n < size2; n++)


		{

			if (n == -1 ||
				k == -1 ||
				n == size2 ||
				k == size1 ||
				(k == 0 && n == 0) ||
				(k == size1 - 1 && n == 0) ||
				(k == 0 && n == size2 - 1) ||
				(k == size1 - 1 && n == size2 - 1))

			{
				ary[k][n] = 0;
			}
			else if (k == size1 / 2 && n == size2 / 2)
			{
				ary[k][n] = 6;
			}
			else
				ary[k][n] = 7;//get_rand(0, 5);			




		}

	}

}

void sort_8(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++)
	{
		for (int n = 0; n < size2; n++)
		{
			if (ary[k][n] == 6)
			{

				if ((k - 1 == 0 && n == 0))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash - 10;
					cout << endl;
					break;
				}
				else if ((k - 2 == 0 && n == 0))
				{


					if (ary[k - 1][n] == 1)
					{

						ary[k - 1][n] = ary[k][n];
						ary[k][n] = 0;
						ary[k - 1][n] = 0;
						red_box++;
						cash = cash + 30;
						cout << "\033[91m" << "\t������� ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;

						break;
					}
					else if (ary[k - 1][n] == 0)
					{
						int x = ary[k - 1][n];
						ary[k - 1][n] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k - 1][n] != 0 || ary[k - 1][n] != 1)
					{
						int x = ary[k - 1][n];
						ary[k - 1][n] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ������� ������." << endl;
						cout << endl;
						break;
					}

				}

				if ((k - 1 == 0 && n == size2 - 1))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash - 10;
					cout << endl;
					break;
				}
				else if ((k - 2 == 0 && n == size2 - 1))
				{


					if (ary[k - 1][n] == 2)
					{

						ary[k - 1][n] = ary[k][n];
						ary[k][n] = 0;
						green_box++;
						cash = cash + 30;
						cout << "\033[92m" << "\t������� ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;
						break;
					}
					else if (ary[k - 1][n] == 0)
					{
						int x = ary[k - 1][n];
						ary[k - 1][n] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k - 1][n] != 0 || ary[k - 1][n] != 2)
					{
						int x = ary[k - 1][n];
						ary[k - 1][n] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ������� ������." << "\033[97m" << endl;
						cout << endl;
						break;
					}

				}


				else if (k == 0)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash - 5;
					cout << endl;
					break;
				}
				else if (ary[k - 1][n] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash - 5;
					cout << endl;
					break;
				}
				else if ((ary[k - 1][n] != 0) && (ary[k - 2][n] != 0))
				{

					int x = ary[k - 1][n];
					ary[k - 1][n] = ary[k][n];
					ary[k][n] = x;
					break;
				}
				else if ((ary[k - 1][n] != 0) && (ary[k - 2][n] == 0))
				{
					if (k - 1 != 0) {
						int x = ary[k - 2][n];
						ary[k - 2][n] = ary[k - 1][n];
						ary[k - 1][n] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (k - 1 == 0)
					{
						int x = ary[k - 1][n];
						ary[k - 1][n] = ary[k][n];
						ary[k][n] = x;
						break;
					}
				}
				else if ((ary[k - 1][n] == 0))
				{
					int x = ary[k - 1][n];
					ary[k - 1][n] = ary[k][n];
					ary[k][n] = x;
					break;
				}
			}
		}
	}
}

void sort_2(int size1, int size2, int ary[][width]) {
	for (int k = size1 - 1; k >= 0; k--)
	{
		for (int n = 0; n < size2; n++)
		{
			if (ary[k][n] == 6)
			{

				if ((k + 1 == size1 - 1 && n == 0))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash - 10;
					cout << endl;
					break;
				}
				else if ((k + 2 == size1 - 1 && n == 0))
				{


					if (ary[k + 1][n] == 4)
					{

						ary[k + 1][n] = ary[k][n];
						ary[k][n] = 0;
						yellow_box++;
						cash = cash + 30;
						cout << "\033[93m" << "\t������ ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;

						break;
					}
					else if (ary[k + 1][n] == 0)
					{
						int x = ary[k + 1][n];
						ary[k + 1][n] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k + 1][n] != 0 || ary[k + 1][n] != 4)
					{
						int x = ary[k + 1][n];
						ary[k + 1][n] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ������ ������." << endl;
						cout << endl;
						break;
					}

				}


				if ((k + 1 == size1 - 1 && n == size2 - 1))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash - 10;
					cout << endl;
					break;
				}
				else if ((k + 2 == size1 - 1 && n == size2 - 1))
				{

					if (ary[k + 1][n] == 3)
					{

						ary[k + 1][n] = ary[k][n];
						ary[k][n] = 0;
						cout << "\033[94m" << "\t����� ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;
						blue_box++;
						cash = cash + 30;
						break;

					}
					else if (ary[k + 1][n] == 0) {
						int x = ary[k + 1][n];
						ary[k + 1][n] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k + 1][n] != 0 || ary[k + 1][n] != 4) {
						int x = ary[k + 1][n];
						ary[k + 1][n] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ����� ������." << endl;
						cout << endl;
						break;
					}

				}

				else if (k == size1 - 1)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash - 1;
					cout << endl;
				}
				else if (ary[k + 1][n] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash - 1;
					cout << endl;
				}
				else if ((ary[k + 1][n] != 0) && (ary[k + 2][n] != 0))
				{
					int x = ary[k + 1][n];
					ary[k + 1][n] = ary[k][n];
					ary[k][n] = x;
				}
				else if ((ary[k + 1][n] != 0) && (ary[k + 2][n] == 0))
				{
					if (k + 1 != size1 - 1) {
						int x = ary[k + 2][n];
						ary[k + 2][n] = ary[k + 1][n];
						ary[k + 1][n] = ary[k][n];
						ary[k][n] = x;
					}
					else if (k + 1 == size1 - 1)
					{
						int x = ary[k + 1][n];
						ary[k + 1][n] = ary[k][n];
						ary[k][n] = x;
					}
				}
				else if ((ary[k + 1][n] == 0))
				{
					int x = ary[k + 1][n];
					ary[k + 1][n] = ary[k][n];
					ary[k][n] = x;
				}
			}
		}
	}
}

void sort_4(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++)
	{
		for (int n = 0; n < size2; n++)
		{
			if (ary[k][n] == 6) {

				if ((k == 0 && n - 1 == 0))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash - 10;
					cout << endl;
					break;
				}
				else if ((k == 0 && n - 2 == 0))
				{


					if (ary[k][n - 1] == 1)
					{

						ary[k][n - 1] = ary[k][n];
						ary[k][n] = 0;
						red_box++;
						cash = cash + 30;
						cout << "\033[91m" << "\t������� ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;

						break;
					}
					else if (ary[k][n - 1] == 0)
					{
						int x = ary[k][n - 1];
						ary[k][n - 1] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k][n - 1] != 0 || ary[k][n - 1] != 1)
					{
						int x = ary[k][n - 1];
						ary[k][n - 1] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ������� ������." << endl;
						cout << endl;
						break;
					}

				}

				if ((k == size1 - 1 && n - 1 == 0))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash - 10;
					cout << endl;
					break;
				}
				else if ((k == size1 - 1 && n - 2 == 0))
				{


					if (ary[k][n - 1] == 4)
					{

						ary[k][n - 1] = ary[k][n];
						ary[k][n] = 0;
						yellow_box++;
						cash = cash + 30;
						cout << "\033[93m" << "\t������ ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;

						break;
					}
					else if (ary[k][n - 1] == 0)
					{
						int x = ary[k][n - 1];
						ary[k][n - 1] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k][n - 1] != 0 || ary[k][n - 1] != 4)
					{
						int x = ary[k][n - 1];
						ary[k][n - 1] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ������ ������." << endl;
						cout << endl;
						break;
					}

				}

				else if (n == 0)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash - 1;
					cout << endl;
				}
				else if (ary[k][n - 1] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash - 1;
					cout << endl;
				}
				else if ((ary[k][n - 1] != 0) && (ary[k][n - 2] != 0))
				{
					int x = ary[k][n - 1];
					ary[k][n - 1] = ary[k][n];
					ary[k][n] = x;
				}
				else if ((ary[k][n - 1] != 0) && (ary[k][n - 2] == 0))
				{
					if (n - 1 != 0) {
						int x = ary[k][n - 2];
						ary[k][n - 2] = ary[k][n - 1];
						ary[k][n - 1] = ary[k][n];
						ary[k][n] = x;
					}
					else if (n - 1 == 0)
					{
						int x = ary[k][n - 1];
						ary[k][n - 1] = ary[k][n];
						ary[k][n] = x;
					}
				}
				else if ((ary[k][n - 1] == 0))
				{
					int x = ary[k][n - 1];
					ary[k][n - 1] = ary[k][n];
					ary[k][n] = x;
				}
			}
		}
	}
}

void sort_6(int size1, int size2, int ary[][width]) {
	for (int k = 0; k < size1; k++) {
		for (int n = size2 - 1; n >= 0; n--) {
			if (ary[k][n] == 6) {

				if ((k == 0 && n + 1 == size2 - 1))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash - 10;
					cout << endl;
					break;
				}
				else if ((k == 0 && n + 2 == size2 - 1))
				{


					if (ary[k][n + 1] == 2)
					{

						ary[k][n + 1] = ary[k][n];
						ary[k][n] = 0;
						green_box++;
						cash = cash + 30;
						cout << "\033[92m" << "\t������� ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;

						break;
					}
					else if (ary[k][n + 1] == 0)
					{
						int x = ary[k][n + 1];
						ary[k][n + 1] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k][n + 1] != 0 || ary[k][n + 1] != 2)
					{
						int x = ary[k][n + 1];
						ary[k][n + 1] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ������� ������." << endl;
						cout << endl;
						break;
					}

				}

				if ((k == size1 - 1 && n + 1 == size2 - 1))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash - 10;
					cout << endl;
					break;
				}
				else if ((k == size1 - 1 && n + 2 == size2 - 1))
				{

					if (ary[k][n + 1] == 3)
					{

						ary[k][n + 1] = ary[k][n];
						ary[k][n] = 0;
						blue_box++;
						cash = cash + 30;
						cout << "\033[94m" << "\t����� ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;


						break;

					}
					else if (ary[k][n + 1] == 0) {
						int x = ary[k][n + 1];
						ary[k][n + 1] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k][n + 1] != 0 || ary[k][n + 1] != 3) {
						int x = ary[k][n + 1];
						ary[k][n + 1] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ����� ������." << endl;
						cout << endl;
						break;
					}

				}

				else if (n == size2 - 1)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash - 1;
					cout << endl;
				}
				else if (ary[k][n + 1] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash - 1;
					cout << endl;
				}
				else if ((ary[k][n + 1] != 0) && (ary[k][n + 2] != 0))
				{
					int x = ary[k][n + 1];
					ary[k][n + 1] = ary[k][n];
					ary[k][n] = x;
				}
				else if ((ary[k][n + 1] != 0) && (ary[k][n + 2] == 0))
				{

					if (n + 1 != size2 - 1) {
						int x = ary[k][n + 2];
						ary[k][n + 2] = ary[k][n + 1];
						ary[k][n + 1] = ary[k][n];
						ary[k][n] = x;
					}
					else if (n + 1 == size2 - 1)
					{
						int x = ary[k][n + 1];
						ary[k][n + 1] = ary[k][n];
						ary[k][n] = x;
					}
				}
				else if ((ary[k][n + 1] == 0))
				{
					int x = ary[k][n + 1];
					ary[k][n + 1] = ary[k][n];
					ary[k][n] = x;
				}
			}
		}
	}
}

void show_arr2(int size1, int size2, int ary[][width]) {
	for (int k = -1; k < size1 + 1; k++)
	{
		for (int n = -1; n < size2 + 1; n++)
		{
			cout.width(3);
			/*
			//if (n != -1 && n != size2 && k != -1 && k != size1)
			//{
				// if ((k == 0 && n == 0) ||
					// (k == size1 - 1 && n == 0) ||
					// (k == 0 && n == size2 - 1) ||
					// (k == size1 - 1 && n == size2 - 1) )

				// {
					// ary[k][n] = 0;
				// }

				if (k == 0 && n == 0) {
					ary[k][n] = red_box;
					//cout << "" << "\033[41m" << ary[k][n] << "\033[40m";
				}
				else if (k == size1 - 1 && n == 0) {
					ary[k][n] = yellow_box;
					//cout << "" << "\033[43m" << ary[k][n] << "\033[40m";
				}
				else if (k == 0 && n == size2 - 1) {
					ary[k][n] = green_box;
					//cout << "" << "\033[42m" << ary[k][n] << "\033[40m";
				}
				else if (k == size1 - 1 && n == size2 - 1) {
					ary[k][n] = blue_box;
					//cout << "" << "\033[44m" << ary[k][n] << "\033[40m";
				}

				else if (ary[k][n] == 0)
				{
					//cout << "" << "\033[97m" << char(35) << "\033[97m" << "";
				}
				else if (ary[k][n] == 1) {
					//cout << "" << "\033[91m" << char(3) << "\033[97m" << "";
				}
				else if (ary[k][n] == 2) {
					//cout << "" << "\033[92m" << char(5) << "\033[97m" << "";
				}
				else if (ary[k][n] == 3) {
					//cout << "" << "\033[94m" << char(6) << "\033[97m" << "";
				}
				else if (ary[k][n] == 4) {
					//cout << "" << "\033[93m" << char(4) << "\033[97m" << "";
				}
				else if (ary[k][n] == 5) {
					//cout << "" << "\033[90m" << char(15) << "\033[97m" << "";
				}
				else if (ary[k][n] == 6) {
					//cout << "" << "\033[95m" << char(2) << "\033[97m" << "";
				}


				else if (n == -1)
				{

					cout << "" << "\033[90m" << char(16) << "\033[97m" << "";
				}
				else if (n == size2)
				{

					cout << "" << "\033[90m" << char(17) << "\033[97m" << "";
				}
				else if (k == -1)
				{

					cout << "" << "\033[90m" << char(31) << "\033[97m" << "";
				}
				else if (k == size1)
				{

					cout << "" << "\033[90m" << char(30) << "\033[97m" << "";
				}
			//}
			*/
			cout << ary[k][n];
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}
void show_victoria(int size1, int size2, int ary[][width]) {
	int  number_of_boxes = 0;
	//bool red_box_counter, green_box_counter=true, blue_box_counter=true, yellow_box_counter=true;

	for (int k = 0; k < size1; k++)
	{
		for (int n = 0; n < size2; n++)
		{
			if ((k != 0 && n != 0) ||
				(k != size1 - 1 && n != 0) ||
				(k != 0 && n != size2 - 1) ||
				(k != size1 - 1 && n != size2 - 1))
			{
				if (ary[k][n] == 1)
				{
					red_box_counter++;

				}

				else if (ary[k][n] == 2)
				{
					green_box_counter++;
				}

				else if (ary[k][n] == 3)
				{
					blue_box_counter++;
				}

				else if (ary[k][n] == 4)
				{
					yellow_box_counter++;

				}





			}



		}
	}



	if (red_col == 0)
	{
		if (red_box_counter == 0)
		{
			cout << "\033[91m" << "�������! ��� ������� ����� �� ����� � ����������:" << red_box << "\033[95m" << "   +100" " \033[97m" << endl;
			cash = cash + 100;
			cout << endl;
			red_col++;
		}


		//cout << red_col<< endl;
		//cout << red_box_counter << endl;
	//red_box_counter = 0;

	}
	//red_box_counter = 0;
	if (green_col == 0) {
		if (green_box_counter == 0)
		{
			cout << "\033[92m" << "�������! ��� ������� ����� �� ����� � ����������:" << green_box << "\033[95m" << "   +100""\033[97m" << endl;
			cash = cash + 100;
			cout << endl;
			green_col++;

		}
		//green_box_counter == 0;
	}
	//green_box_counter == 0;


	if (blue_col == 0)
	{
		if (blue_box_counter == 0)
		{
			cout << "\033[94m" << "�������! ��� ����� ����� �� ����� � ����������:" << blue_box << "\033[95m" << "   +100""\033[97m" << endl;
			cash = cash + 100;
			cout << endl;
			blue_col++;

		}
		// blue_box_counter == 0;
	}
	//blue_box_counter == 0;

	if (yellow_coll == 0)
	{
		if (yellow_box_counter == 0)
		{
			cout << "\033[93m" << "�������! ��� ������ ����� �� ����� � ����������:" << yellow_box << "\033[95m" << "   +100""\033[97m" << endl;
			cash = cash + 100;
			cout << endl;
			yellow_coll++;
		}
		//yellow_box_counter == 0;
	}
	//yellow_box_counter == 0;

	if (red_box_counter == 0 && green_box_counter == 0 && blue_box_counter == 0 && yellow_box_counter == 0) {
		number_of_boxes = red_box + green_box + blue_box + yellow_box;
		cash = cash + 1000;
		cout << number_of_boxes << endl;
		cout << "\033[93m" << "�������! ��� ����� �� ����� � ����������:" << number_of_boxes << "\033[95m" << "   +1000" "\033[97m" << endl;
		cout << endl;
	}
	cout << red_col << "--" << green_col << endl;
	cout << yellow_coll << "--" << blue_col << endl;
	cout << endl;
	cout << red_box_counter << "--" << green_box_counter << endl;
	cout << yellow_box_counter << "--" << blue_box_counter << endl;
	red_box_counter = 0;
	green_box_counter = 0;
	blue_box_counter = 0;
	yellow_box_counter = 0;

}

void show_control() {
	cout << "\033[96m" << "\t����������:" << "\033[97m" << endl;
	cout << "\033[93m" << "��������� ����� ������ ���� ���� ����������� �������." << "\033[97m" << endl;
	cout << "\033[93m" << "����� Enter." << "\033[97m" << endl;
	cout << "\033[91m" << "������-8." << "\033[97m" << endl;
	cout << "\033[92m" << "�����-2." << "\033[97m" << endl;
	cout << "\033[93m" << "�����-6." << "\033[97m" << endl;
	cout << "\033[94m" << "����-4." << "\033[97m" << endl;
	cout << "\033[95m" << "������������-5." << "\033[97m" << endl;
	cout << "\033[96m" << "�����-0." << "\033[97m" << endl;
	cout << "\033[96m" << "��������� �������-7." << "\033[97m" << endl;
	cout << "\033[96m" << "������� �������-1." << "\033[97m" << endl;
}
void show_rules() {
	cout << "\033[96m" << "\t������� ������ �� ������:." << endl;
	cout << "\033[96m" << "\t   ������� ��������� ��������� ����� ��� ����� ������ ����� ������� � ��������������� �������.  " << endl;
	cout << "\033[96m" << "\t   ������� ����������� �� ����� ������. " << endl;
	cout << "\033[96m" << "\t   �� ������ ���� ������ ������� ������������ ��������." << endl;
	cout << "\033[96m" << "\t   �� ��������� ������ ����������� ������������ �����.  " << endl;
	cout << "\033[96m" << "\t   ������� ����������� �� ����� ������. " << endl;
	cout << "\033[96m" << "\t   �������� �� ������ ����� ���������!." << endl;
	cout << "\033[96m" << "\t   ������ ��������� � ��������, ������ � �����.  " << endl;
	cout << "\033[93m" << "\t1. ��� ����� � ����� ������� ������� ���� ����� ���������� ������ �� ������, " << endl;
	cout << "\033[93m" << "\t   ���������� ����������� ����,� ���-�� ��������� ������ .  " << endl;
	cout << "\033[92m" << "\t2. �� ������ ��������� ���� �� ��� ����� �� �������: 10.  " << endl;
	cout << "\033[92m" << "\t3. �� ��������� ��������� ������� �� �������: 100.  " << endl;
	cout << "\033[92m" << "\t4. �� ��� ��������� �������� �� �������: 1000.  " << endl;
	cout << "\033[96m" << "\t5. �� ������ ��� �� ���������� ����������� ����:1.  " << endl;
	cout << "\033[91m" << "\t7. �� �������� � ����� �����: 5.  " << endl;
	cout << "\033[91m" << "\t8. �� �������� � ����� �����: 5.  " << endl;
	cout << "\033[91m" << "\t6. �� �������� � ������� �����: 10.  " << endl;

}
void show_menu() {
	cout << "\033[95m" << "������ ����." << endl;
	cout << "\033[96m" << "�������: y" << endl;
	cout << "\033[95m" << "��� ������." << endl;
	cout << "\033[96m" << "�������: �" << endl;
	cout << "\033[95m" << "������� ����." << endl;
	cout << "\033[96m" << "�������: r" << endl;
	cout << "\033[95m" << "�������� ����." << endl;
	cout << "\033[96m" << "�������: n" << endl;
}
void zeroing_out() {
	red_box = 0;
	green_box = 0;
	yellow_box = 0;
	blue_box = 0;
	red_box_counter = 0;
	green_box_counter = 0;
	blue_box_counter = 0;
	yellow_box_counter = 0;
	number_of_boxes = 0;
	red_col = 0;
	green_col = 0;
	blue_col = 0;
	yellow_coll = 0;

}
void add_cash() {
	int add;
	cout << "\033[93m" << "\t������� �������:" << "\033[97m";
	cin >> add;
	cash = cash + add;
	//cout << "\033[93m" << "\t��� �������:" << cash << "\033[97m";
	cout << endl;
	cout << endl;
}
void get_cash() {

	cout << "\033[93m" << "\t��� �������:" << cash << "\033[97m";

}
void logic() {
	//int cash;
	//int payment;
	//int col = 1000;
	int vector;
	int step = 0;
	char start;
	show();
enter1:cout << "" << endl;
	cout << "\033[96m" << "\t����" << endl;
	show_menu();
exit1:cout << "" << endl;
	cin >> start;
	switch (start)
	{
	case 'y':cout << "\033[93m" << "\t���� ��������" << "\033[97m" << endl;
		cout << "\033[96m" << "\t������� �������:" << "\033[97m";
		cin >> cash;
		goto rex;
		break;
	case 'n':cout << "\t����" << endl;
		goto exit;
		break;
	case 'c'://cout << "\t����������" << endl;
		show_control();
		goto enter1;
		break;
	case 'r'://cout << "\t������� ����" << endl;
		show_rules();
		goto enter1;
		break;
	default:cout << "\t�� ���������� ����!";goto exit1; break;
		break;
	}
	// :)
rex:cout << "" << endl;
	gen_arr(heigh, width, matr);
	show_arr2(heigh, width, matr);
	while (cash > 0) {
		if (cash == 1) {
			cout << "\033[91m" << "\t��� ������� ������ � 0." << "\033[97m" << endl;
			cout << "\033[91m" << "\t����������� ��� ���������." << "\033[97m" << endl;
			cout << "\033[91m" << "\t��� ���������� ������� 7." << "\033[97m" << endl;
		}
		//show_victoria(heigh, width, matr);
		step++;

		cout << "\033[92m" << "\t ���-" << step << "\033[96m" << "\t\t\t\t��� �������:" << cash-- << "\033[97m";
		cout << endl;
		cin >> vector;

		cout << endl;
		// �� %>o-:    
		switch (vector)
		{
		case 0:cout << "\t��������!";
			cout << endl;goto exit;
			break;
		case 5:cout << "\033[93m" << "\t������������" << "\033[97m" << endl;
			cout << endl;
			cout << endl;
			zeroing_out();
			show_victoria(heigh, width, matr);
			gen_arr(heigh, width, matr);
			show_arr2(heigh, width, matr);
			break;
		case 8: sort_8(heigh, width, matr);
			show_arr2(heigh, width, matr);
			break;
		case 2: sort_2(heigh, width, matr);
			show_arr2(heigh, width, matr);
			break;
		case 4: sort_4(heigh, width, matr);
			show_arr2(heigh, width, matr);
			break;
		case 6: sort_6(heigh, width, matr);
			show_arr2(heigh, width, matr);
			break;
		case 7:  add_cash();

			break;
		case 1:  get_cash();
			goto exit;
			break;
		default:cout << "\t�� ���������� ����!"; break;
			break;
		}
	}
exit:cout << "" << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	logic();
	system("pause");
	return 0;
}