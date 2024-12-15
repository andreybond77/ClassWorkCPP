
#include <iostream>
using namespace std;

int a = 0, b = 0, c = 0, d = 0, f = 0, r = 0;
int red_box = 0, green_box = 0, yellow_box = 0, blue_box = 0;
int red_col = 0, green_col = 0, blue_col = 0, yellow_coll = 0;
int red_box_counter = 0, green_box_counter = 0, blue_box_counter = 0, yellow_box_counter = 0, number_of_boxes = 0;
const int  width = 7;
const int  heigh = 7;
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
	for (int k = 0; k < size1; k++)
	{
		for (int n = 0; n < size2; n++) 			
		{	
			ary[k][n] = get_rand(0, 5);	
			if (n == 0 ||
				k == 0 ||
				n == size2-1 ||
			    k == size1-1 ||
				(k == 1 && n == 1) ||
				(k == size1 - 2 && n == 1) ||
				(k == 1 && n == size2 - 2) ||
				(k == size1 - 2 && n == size2 - 2))
			{
				ary[k][n] = 0;
			}
			else if (k == size1 / 2 && n == size2 / 2)
			{
				ary[k][n] = 6;
			}			
		}		
	}	
}

void sort_8(int size1, int size2, int ary[][width]) {
	for (int k = 1; k < size1-1; k++) 
	{
		for (int n = 1; n < size2-1; n++) 
		{
			if (ary[k][n] == 6) 
			{
				if ((k - 1 == 1 && n == 1) )
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash -10;
					cout << endl;
					break;
				}
					else if ((k - 2 == 1 && n == 1) )
					{						 
						 if (ary[k - 1][n] == 1) 
						 {							
							ary[k -1][n] = ary[k][n];
							ary[k][n] = 0;							
							red_box++;
							cash = cash +30;
							cout << "\033[91m" << "\t������� ���� �� �����. +30" << "\033[97m" << endl;
							cout << endl;							
							break;
						 }
						else if (ary[k - 1][n] == 0  )
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

				if ((k - 1 == 1 && n == size2-2))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash - 10;
					cout << endl;
					break;
				}
				else if ((k - 2 == 1 && n == size2-2))
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
			        else if (k == 1)
					{						
							ary[k][n] = ary[k][n];
							cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
							cash = cash - 5;
							cout << endl;
							break;						
					}
					else if (ary[k-1][n] == 5)
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
							if (k - 1 != 1) {
								int x = ary[k - 2][n];
								ary[k - 2][n] = ary[k - 1][n];
								ary[k - 1][n] = ary[k][n];
								ary[k][n] = x;
								break;
							}
							else if (k - 1 == 1)
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
	for (int k = size1-2; k >= 1; k--) 
	{
		for (int n = 1; n < size2-1; n++) 
		{		
			if (ary[k][n] == 6) 
			{
				if ((k + 1 == size1-2 && n == 1))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash -10;
					cout << endl;
					break;
				}
				else if ((k + 2 == size1-2 && n == 1))
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
				if ((k + 1 == size1 - 2 && n == size2 - 2))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash -10;
					cout << endl;
					break;
				}
				else if ((k + 2 == size1 - 2 && n == size2 - 2))
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
					else if (ary[k + 1][n] != 0 || ary[k +1][n] != 4) {
						int x = ary[k + 1][n];
						ary[k + 1][n] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ����� ������." << endl;
						cout << endl;
						break;
					}
				}		
				else if (k == size1-2)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash -1;
					cout << endl;
				}	
				else if (ary[k+1][n] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash -1;
					cout << endl;
				}
				else if ((ary[k + 1][n]!=0)&&(ary[k + 2][n] != 0))
				{
					int x = ary[k + 1][n];
					ary[k + 1][n] = ary[k][n];
					ary[k][n] = x;					
				}
				else if ((ary[k + 1][n] != 0) && (ary[k + 2][n] == 0))
				{
					if (k + 1 != size1-2) {
						int x = ary[k + 2][n];
						ary[k + 2][n] = ary[k + 1][n];
						ary[k + 1][n] = ary[k][n];
						ary[k][n] = x;
					}
					else if (k + 1 == size1-2)
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
	for (int k = 1; k < size1-1; k++) 
	{
		for (int n = 1; n < size2-1; n++) 
		{
			if (ary[k][n] == 6) {
				
				if ((k  == 1 && n-1 == 1))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash -10;
					cout << endl;
					break;
				}
				else if ((k  == 1 && n-2 == 1))
				{
					if (ary[k ][n-1] == 1)
					{
						ary[k ][n-1] = ary[k][n];
						ary[k][n] = 0;
						red_box++;
						cash = cash + 30;
						cout << "\033[91m" << "\t������� ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;						
						break;
					}
					else if (ary[k ][n-1] == 0)
					{
						int x = ary[k][n-1];
						ary[k ][n-1] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k ][n-1] != 0 || ary[k][n-1] != 1)
					{
						int x = ary[k][n-1];
						ary[k][n-1] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ������� ������." << endl;
						cout << endl;
						break;
					}
				}				
				if ((k  == size1 - 2 && n-1 == 1))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash -10;
					cout << endl;
					break;
				}
				else if ((k == size1 - 2 && n-2 == 1))
				{
					if (ary[k ][n-1] == 4)
					{
						ary[k ][n-1] = ary[k][n];
						ary[k][n] = 0;
						yellow_box++;
						cash = cash + 30;
						cout << "\033[93m" << "\t������ ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;						
						break;
					}
					else if (ary[k ][n-1] == 0)
					{
						int x = ary[k ][n-1];
						ary[k ][n-1] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k ][n-1] != 0 || ary[k][n-1] != 4)
					{
						int x = ary[k ][n-1];
						ary[k ][n-1] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ������ ������." << endl;
						cout << endl;
						break;
					}
				}				
				else if (n == 1)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash -1;
					cout << endl;
				}
				else if (ary[k ][n-1] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash -1;
					cout << endl;
				}
				else if ((ary[k][n-1] != 0) && (ary[k ][n-2] != 0))
				{
					int x = ary[k][n - 1];
					ary[k][n - 1] = ary[k][n];
					ary[k][n] = x;
				}
				else if ((ary[k][n-1] != 0) && (ary[k][n-2] == 0))
				{					
					if (n - 1 != 1) {
						int x = ary[k][n - 2];
						ary[k][n - 2] = ary[k][n - 1];
						ary[k][n - 1] = ary[k][n];
						ary[k][n] = x;
					}
					else if (n - 1 == 1)
					{
						int x = ary[k][n - 1];
						ary[k][n - 1] = ary[k][n];
						ary[k][n] = x;
					}
				}
				else if ((ary[k][n-1] == 0))
				{
					int x = ary[k][n-1];
					ary[k][n-1] = ary[k][n];
					ary[k][n] = x;
				}				
			}
		}
	}
}

void sort_6(int size1, int size2, int ary[][width]) {
	for (int k = 1; k < size1-1; k++) {
		for (int n =size2-2; n >=1; n--) {
			if (ary[k][n] == 6) {
				
				if ((k  == 1 && n+1 == size2 - 2))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash -10;
					cout << endl;
					break;
				}
				else if ((k  == 1 && n+2 == size2 - 2))
				{
					if (ary[k ][n+1] == 2)
					{
						ary[k][n+1] = ary[k][n];
						ary[k][n] = 0;
						green_box++;
						cash = cash + 30;
						cout << "\033[92m" << "\t������� ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;				
						break;
					}
					else if (ary[k ][n+1] == 0)
					{
						int x = ary[k][n+1];
						ary[k ][n+1] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k][n+1] != 0 || ary[k][n+1] != 2)
					{
						int x = ary[k][n+1];
						ary[k ][n+1] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ������� ������." << endl;
						cout << endl;
						break;
					}
				}
				
				if ((k  == size1 - 2 && n+1 == size2 - 2))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t��������� �������! -10 " << "\033[97m" << endl;
					cash = cash -10;
					cout << endl;
					break;
				}
				else if ((k  == size1 - 2 && n+2 == size2 - 2))
				{					
					 if (ary[k ][n+1] == 3)
					{
						ary[k ][n+1] = ary[k][n];
						ary[k][n] = 0;
						blue_box++;
						cash = cash + 30;
						cout << "\033[94m" << "\t����� ���� �� �����. +30" << "\033[97m" << endl;
						cout << endl;					
						break;

					}
					else if (ary[k ][n+1] == 0) {
						int x = ary[k][n+1];
						ary[k][n+1] = ary[k][n];
						ary[k][n] = x;
						break;
					}
					else if (ary[k ][n+1] != 0 || ary[k][n+1] != 3) {
						int x = ary[k ][n+1];
						ary[k ][n+1] = ary[k][n];
						ary[k][n] = x;
						cout << "\t���� ������! ������ ��� ����� ������." << endl;
						cout << endl;
						break;
					}
				}				
				else if (n == size2 - 2)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash -1;
					cout << endl;
				}
				else if (ary[k][n + 1] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\t����� �����! -5" << "\033[97m" << endl;
					cash = cash -1;
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
					if (n + 1 != size2 - 2) {
						int x = ary[k ][n+2];
						ary[k ][n+2] = ary[k ][n+1];
						ary[k ][n+1] = ary[k][n];
						ary[k][n] = x;
					}
					else if (n + 1 == size2-2)
					{
						int x = ary[k ][n+1];
						ary[k ][n+1] = ary[k][n];
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
	for (int k = 0; k < size1 ; k++)
	{
		for (int n = 0; n < size2 ; n++)
		{
			cout.width(3);	
			
			if (n != 0 && n != size2 - 1 && k != 0 && k != size1 - 1)
			{
				if ((k == 1 && n == 1) ||
					(k == size1 - 2 && n == 1) ||
					(k == 1 && n == size2 - 2) ||
					(k == size1 - 2 && n == size2 - 2))
				{
					ary[k][n] = 0;
				}
				if (k == 1 && n == 1) {
					ary[k][n] = red_box;
					cout << "" << "\033[41m" << ary[k][n] << "\033[40m";
				}
				else if (k == size1 - 2 && n == 1) {
					ary[k][n] = yellow_box;
					cout << "" << "\033[43m" << ary[k][n] << "\033[40m";
				}
				else if (k == 1 && n == size2 - 2) {
					ary[k][n] = green_box;
					cout << "" << "\033[42m" << ary[k][n] << "\033[40m";
				}
				else if (k == size1 - 2 && n == size2 - 2) {
					ary[k][n] = blue_box;
					cout << "" << "\033[44m" << ary[k][n] << "\033[40m";
				}

				else if (ary[k][n] == 0)
				{
					cout << "" << "\033[97m" << char(35) << "\033[97m" << "";
				}
				else if (ary[k][n] == 1) {
					cout << "" << "\033[91m" << char(3) << "\033[97m" << "";
				}
				else if (ary[k][n] == 2) {
					cout << "" << "\033[92m" << char(5) << "\033[97m" << "";
				}
				else if (ary[k][n] == 3) {
					cout << "" << "\033[94m" << char(6) << "\033[97m" << "";
				}
				else if (ary[k][n] == 4) {
					cout << "" << "\033[93m" << char(4) << "\033[97m" << "";
				}
				else if (ary[k][n] == 5) {
					cout << "" << "\033[90m" << char(15) << "\033[97m" << "";
				}
				else if (ary[k][n] == 6) {
					cout << "" << "\033[95m" << char(2) << "\033[97m" << "";
				}

			}
				 if (n == 0)
				{
					cout << "" << "\033[90m" << char(16) << "\033[97m" << "";
				}
				else if (n == size2-1)
				{
					cout << "" << "\033[90m" << char(17) << "\033[97m" << "";
				}
				else if (k == 0)
				{
					cout << "" << "\033[90m" << char(31) << "\033[97m" << "";
				}
				else if (k == size1-1)
				{
					cout << "" << "\033[90m" << char(30) << "\033[97m" << "";
				}
				 else if ((k == 1 && n == 1) ||
					      (k == size1 - 2 && n == 1) ||
					      (k == 1 && n == size2 - 2) ||
					      (k == size1 - 2 && n == size2 - 2))
				      { 
					      ary[k][n] = 0;
				      } 			
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
	for (int k = 0; k < size1; k++)
	{
		for (int n = 0; n < size2; n++)
		{			
				if ((k != 1 && n != 1) ||
					(k != size1 - 2 && n != 1) ||
					(k != 1 && n != size2 - 2) ||
					(k != size1 - 2 && n != size2 - 2))
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

				if ((k == 1 && n == 1) ||
					(k == size1 - 2 && n == 1) ||
					(k == 1 && n == size2 - 2) ||
					(k == size1 - 2 && n == size2 - 2))
				{
					ary[k][n] = 0;
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
	}

	 if (green_col == 0) {
			 if (green_box_counter == 0)
			 {
			   cout << "\033[92m" << "�������! ��� ������� ����� �� ����� � ����������:" << green_box << "\033[95m" << "   +100""\033[97m" << endl;
			   cash = cash + 100;
			   cout << endl;
			   green_col++;
		 
		     }			
	 }	

	 if (blue_col == 0) 
	 {
					 if (blue_box_counter == 0)
					 {
					  cout << "\033[94m" << "�������! ��� ����� ����� �� ����� � ����������:" << blue_box << "\033[95m" << "   +100""\033[97m" << endl;
					  cash = cash + 100;
					  cout << endl;
					  blue_col++;

				     }			
	 }	

	 if (yellow_coll == 0) 
				 {
					 if (yellow_box_counter == 0)
					 {
					  cout << "\033[93m" << "�������! ��� ������ ����� �� ����� � ����������:" << yellow_box << "\033[95m" << "   +100""\033[97m" << endl;
					  cash = cash + 100;
					  cout << endl;
					  yellow_coll++;
			         }
					
	 }

	 if (red_box_counter == 0 && green_box_counter == 0 && blue_box_counter == 0 && yellow_box_counter == 0) {
				number_of_boxes = red_box + green_box + blue_box + yellow_box;
				cash = cash + 1000;
				cout << number_of_boxes << endl;
				cout << "\033[93m" << "�������! ��� ����� �� ����� � ����������:" << number_of_boxes << "\033[95m" << "   +1000" "\033[97m" << endl;
				cout << endl;
	 }
    cout << endl;
    cout << red_box_counter <<"--"<<green_box_counter << endl;
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
	cout << "\033[93m" << "\t2. ����� ������� � ������ ���������." << endl;
	cout << "\033[92m" << "\t3. �� ������ ��������� ���� �� ��� ����� �� �������: 10.  " << endl;
	cout << "\033[92m" << "\t4. �� ��������� ��������� ������� �� �������: 100.  " << endl;
	cout << "\033[92m" << "\t5. �� ��� ��������� �������� �� �������: 1000.  " << endl;
	cout << "\033[96m" << "\t6. �� ������ ��� �� ���������� ����������� ����:1.  " << endl;
	cout << "\033[91m" << "\t7. �� �������� � ����� �����: 5.  " << endl;
	cout << "\033[91m" << "\t8. �� �������� � ����� �����: 5.  " << endl;
	cout << "\033[91m" << "\t9. �� �������� � ������� �����: 10.  " << endl;
	cout << "\033[95m" << "\t10. �� ������� ������� ��������� ��������� ����: 30.  " << endl;
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
	cash = cash - 30;
	cout << "\033[93m" << "\t�� ������� � ������ ��������� -30"  << "\033[97m";
	cout << endl;
	cout << endl;
}
void add_cash() {
	int add;
	cout << "\033[93m" << "\t������� �������:" << "\033[97m";
	cin >> add;
	cash = cash + add;
	cout << endl;
	cout << endl;
}
void get_cash() {
cout << "\033[93m" << "\t��� �������:" << cash << "\033[97m";
}
void logic() {
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
	cout << "\033[96m" << "\t������� �������:" << "\033[97m" ;
	cin >> cash;
	goto rex;
	break;
	case 'n':cout << "\t����" << endl;
		goto exit;
		break;
	case 'c':
		show_control();
		goto enter1;
		break;
	case 'r':
		show_rules();
		goto enter1;
		break;
	default:cout << "\t�� ���������� ����!";goto exit1; break;
		break;
	}
rex:cout << "" << endl;
	gen_arr(heigh, width, matr);
	show_arr2(heigh, width, matr);
	while ( cash>0 ) {
		if (cash == 1) {
			cout << "\033[91m" << "\t��� ������� ������ � 0."  << "\033[97m" << endl;
			cout << "\033[91m" << "\t����������� ��� ���������." << "\033[97m" << endl;
			cout << "\033[91m" << "\t��� ���������� ������� 7." << "\033[97m" << endl;
		}
		show_victoria(heigh, width, matr);
		step++;
		cout << "\033[92m" << "\t ���-"<<step << "\033[96m" << "\t\t\t\t��� �������:" << cash-- << "\033[97m";
		cout << endl;
		cin >> vector;	
		cout << endl;   
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
		case 8 : sort_8(heigh, width, matr);
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
