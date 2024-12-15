
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
	cout << "\033[93m" << "\t\t\t\tСклад" << endl;
	cout << "\033[92m" << "\tПривет. Хочеш заработать?" << endl;
	cout << "\033[92m" << "\tКто-то раскидал коробки на складе! " << endl;
	cout << "\033[92m" << "\tНаведите порядок, отсортируйте коробки по полкам так, " << endl;
	cout << "\033[92m" << "\tчтобы на стеллажах были коробки одного цвета." << "\033[97m" << endl;
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
					cout << "\033[95m" << "\tОсторожно стеллаж! -10 " << "\033[97m" << endl;
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
							cout << "\033[91m" << "\tКрасный ящик на месте. +30" << "\033[97m" << endl;
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
							 cout << "\tВход закрыт! Только для красных ящиков." << endl;
							 cout << endl;
							 break;
						}

					}

				if ((k - 1 == 1 && n == size2-2))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tОсторожно стеллаж! -10 " << "\033[97m" << endl;
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
						cout << "\033[92m" << "\tЗеленый ящик на месте. +30" << "\033[97m" << endl;
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
						cout << "\tВход закрыт! Только для зеленых ящиков." << "\033[97m" << endl;
						cout << endl;
						break;
					}

				}
			        else if (k == 1)
					{						
							ary[k][n] = ary[k][n];
							cout << "\033[95m" << "\tЗдесь стена! -5" << "\033[97m" << endl;
							cash = cash - 5;
							cout << endl;
							break;						
					}
					else if (ary[k-1][n] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tЗдесь столб! -5" << "\033[97m" << endl;
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
					cout << "\033[95m" << "\tОсторожно стеллаж! -10 " << "\033[97m" << endl;
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
						cout << "\033[93m" << "\tЖелтый ящик на месте. +30" << "\033[97m" << endl;
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
						cout << "\tВход закрыт! Только для желтых ящиков." << endl;
						cout << endl;
						break;
					}
				}				
				if ((k + 1 == size1 - 2 && n == size2 - 2))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tОсторожно стеллаж! -10 " << "\033[97m" << endl;
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
						cout << "\033[94m" << "\tСиний ящик на месте. +30" << "\033[97m" << endl;
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
						cout << "\tВход закрыт! Только для синих ящиков." << endl;
						cout << endl;
						break;
					}
				}		
				else if (k == size1-2)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tЗдесь стена! -5" << "\033[97m" << endl;
					cash = cash -1;
					cout << endl;
				}	
				else if (ary[k+1][n] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tЗдесь столб! -5" << "\033[97m" << endl;
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
					cout << "\033[95m" << "\tОсторожно стеллаж! -10 " << "\033[97m" << endl;
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
						cout << "\033[91m" << "\tКрасный ящик на месте. +30" << "\033[97m" << endl;
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
						cout << "\tВход закрыт! Только для красных ящиков." << endl;
						cout << endl;
						break;
					}
				}				
				if ((k  == size1 - 2 && n-1 == 1))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tОсторожно стеллаж! -10 " << "\033[97m" << endl;
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
						cout << "\033[93m" << "\tЖелтый ящик на месте. +30" << "\033[97m" << endl;
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
						cout << "\tВход закрыт! Только для желтых ящиков." << endl;
						cout << endl;
						break;
					}
				}				
				else if (n == 1)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tЗдесь стена! -5" << "\033[97m" << endl;
					cash = cash -1;
					cout << endl;
				}
				else if (ary[k ][n-1] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tЗдесь столб! -5" << "\033[97m" << endl;
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
					cout << "\033[95m" << "\tОсторожно стеллаж! -10 " << "\033[97m" << endl;
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
						cout << "\033[92m" << "\tЗеленый ящик на месте. +30" << "\033[97m" << endl;
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
						cout << "\tВход закрыт! Только для зеленых ящиков." << endl;
						cout << endl;
						break;
					}
				}
				
				if ((k  == size1 - 2 && n+1 == size2 - 2))
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tОсторожно стеллаж! -10 " << "\033[97m" << endl;
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
						cout << "\033[94m" << "\tСиний ящик на месте. +30" << "\033[97m" << endl;
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
						cout << "\tВход закрыт! Только для синих ящиков." << endl;
						cout << endl;
						break;
					}
				}				
				else if (n == size2 - 2)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tЗдесь стена! -5" << "\033[97m" << endl;
					cash = cash -1;
					cout << endl;
				}
				else if (ary[k][n + 1] == 5)
				{
					ary[k][n] = ary[k][n];
					cout << "\033[95m" << "\tЗдесь столб! -5" << "\033[97m" << endl;
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
			cout << "\033[91m" << "Молодец! Все красные ящики на месте в количестве:" << red_box << "\033[95m" << "   +100" " \033[97m" << endl;
			cash = cash + 100;
			cout << endl;
			red_col++;
		}
	}

	 if (green_col == 0) {
			 if (green_box_counter == 0)
			 {
			   cout << "\033[92m" << "Молодец! Все зеленые ящики на месте в количестве:" << green_box << "\033[95m" << "   +100""\033[97m" << endl;
			   cash = cash + 100;
			   cout << endl;
			   green_col++;
		 
		     }			
	 }	

	 if (blue_col == 0) 
	 {
					 if (blue_box_counter == 0)
					 {
					  cout << "\033[94m" << "Молодец! Все синии ящики на месте в количестве:" << blue_box << "\033[95m" << "   +100""\033[97m" << endl;
					  cash = cash + 100;
					  cout << endl;
					  blue_col++;

				     }			
	 }	

	 if (yellow_coll == 0) 
				 {
					 if (yellow_box_counter == 0)
					 {
					  cout << "\033[93m" << "Молодец! Все желтые ящики на месте в количестве:" << yellow_box << "\033[95m" << "   +100""\033[97m" << endl;
					  cash = cash + 100;
					  cout << endl;
					  yellow_coll++;
			         }
					
	 }

	 if (red_box_counter == 0 && green_box_counter == 0 && blue_box_counter == 0 && yellow_box_counter == 0) {
				number_of_boxes = red_box + green_box + blue_box + yellow_box;
				cash = cash + 1000;
				cout << number_of_boxes << endl;
				cout << "\033[93m" << "Молодец! Все ящики на месте в количестве:" << number_of_boxes << "\033[95m" << "   +1000" "\033[97m" << endl;
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
	cout << "\033[96m" << "\tУправление:" << "\033[97m" << endl;
	cout << "\033[93m" << "Нажимайте цифру курсор куда надо переместить коробку." << "\033[97m" << endl;
	cout << "\033[93m" << "Далее Enter." << "\033[97m" << endl;
	cout << "\033[91m" << "Вперед-8." << "\033[97m" << endl;
	cout << "\033[92m" << "Назад-2." << "\033[97m" << endl;
	cout << "\033[93m" << "Право-6." << "\033[97m" << endl;
	cout << "\033[94m" << "Лево-4." << "\033[97m" << endl;
	cout << "\033[95m" << "Перезагрузка-5." << "\033[97m" << endl;
	cout << "\033[96m" << "Выход-0." << "\033[97m" << endl;
	cout << "\033[96m" << "Пополнить депозит-7." << "\033[97m" << endl;
	cout << "\033[96m" << "Забрать депозит-1." << "\033[97m" << endl;
}
void show_rules() {
	cout << "\033[96m" << "\tПравила роботы на складе:." << endl;
	cout << "\033[96m" << "\t   Стеллаж считается собранным когда все ящики одного цвета собраны в соответствующий стеллаж.  " << endl;
	cout << "\033[96m" << "\t   Стелажи расположены по углам склада. " << endl;
	cout << "\033[96m" << "\t   На складе есть столбы которые препятствуют движению." << endl;
	cout << "\033[96m" << "\t   По периметру склада расположена непроходимая стена.  " << endl;
	cout << "\033[96m" << "\t   Стелажи расположены по углам склада. " << endl;
	cout << "\033[96m" << "\t   Работать на складе нужно аккуратно!." << endl;
	cout << "\033[96m" << "\t   Нельзя врезаться в стеллажи, столбы и стены.  " << endl;
	cout << "\033[93m" << "\t1. Для входа в склад внесите депозит куда будет зачислятся оплата за работу, " << endl;
	cout << "\033[93m" << "\t   вычитаться профсоюзный сбор,а так-же взыматься штрафы .  " << endl;
	cout << "\033[93m" << "\t2. Можно перейти в другое помещение." << endl;
	cout << "\033[92m" << "\t3. За каждый сложенный ящик на своё место ты получиш: 10.  " << endl;
	cout << "\033[92m" << "\t4. За полностью собранный стеллаж ты получиш: 100.  " << endl;
	cout << "\033[92m" << "\t5. За все собранные стеллажи ты получиш: 1000.  " << endl;
	cout << "\033[96m" << "\t6. За каждый ход ты оплачиваеш профсоюзный сбор:1.  " << endl;
	cout << "\033[91m" << "\t7. За врезаеие в столб штраф: 5.  " << endl;
	cout << "\033[91m" << "\t8. За врезаеие в стену штраф: 5.  " << endl;
	cout << "\033[91m" << "\t9. За врезаеие в стеллаж штраф: 10.  " << endl;
	cout << "\033[95m" << "\t10. За переход вдругое помещение взымается сбор: 30.  " << endl;
}
void show_menu() {
	cout << "\033[95m" << "Начать игру." << endl;
	cout << "\033[96m" << "Нажмите: y" << endl;
	cout << "\033[95m" << "Как играть." << endl;
	cout << "\033[96m" << "Нажмите: с" << endl;
	cout << "\033[95m" << "Правила игры." << endl;
	cout << "\033[96m" << "Нажмите: r" << endl;
	cout << "\033[95m" << "Покинуть игру." << endl;
	cout << "\033[96m" << "Нажмите: n" << endl;
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
	cout << "\033[93m" << "\tВы перешли в другое помещение -30"  << "\033[97m";
	cout << endl;
	cout << endl;
}
void add_cash() {
	int add;
	cout << "\033[93m" << "\tДобавте депозит:" << "\033[97m";
	cin >> add;
	cash = cash + add;
	cout << endl;
	cout << endl;
}
void get_cash() {
cout << "\033[93m" << "\tВаш депозит:" << cash << "\033[97m";
}
void logic() {
	int vector;
	int step = 0;
	char start;
	show();
enter1:cout << "" << endl;
	cout << "\033[96m" << "\tМеню" << endl;
	show_menu();
exit1:cout << "" << endl;
	cin >> start;	
	switch (start)
	{
	case 'y':cout << "\033[93m" << "\tИгра началась" << "\033[97m" << endl;
	cout << "\033[96m" << "\tВведите депозит:" << "\033[97m" ;
	cin >> cash;
	goto rex;
	break;
	case 'n':cout << "\tПока" << endl;
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
	default:cout << "\tНе корректный ввод!";goto exit1; break;
		break;
	}
rex:cout << "" << endl;
	gen_arr(heigh, width, matr);
	show_arr2(heigh, width, matr);
	while ( cash>0 ) {
		if (cash == 1) {
			cout << "\033[91m" << "\tВаш депозит близок к 0."  << "\033[97m" << endl;
			cout << "\033[91m" << "\tРекомендуем его пополнить." << "\033[97m" << endl;
			cout << "\033[91m" << "\tДля пополнения нажмите 7." << "\033[97m" << endl;
		}
		show_victoria(heigh, width, matr);
		step++;
		cout << "\033[92m" << "\t Ход-"<<step << "\033[96m" << "\t\t\t\tВаш депозит:" << cash-- << "\033[97m";
		cout << endl;
		cin >> vector;	
		cout << endl;   
		switch (vector)
		{
		case 0:cout << "\tУвидимся!";
			cout << endl;goto exit;
			break;
		case 5:cout << "\033[93m" << "\tПерезагрузка" << "\033[97m" << endl;
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
		default:cout << "\tНе корректный ввод!"; break;
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
