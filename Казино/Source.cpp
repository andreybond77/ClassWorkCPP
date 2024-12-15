#include <iostream>
using namespace std;


int bet, bet1 = 0;

int get_rand(int a, int b) {
	return rand() % (b - a + 1) + a;
}

void show_arr(int size, int arr[])
{
	for (int k = 0; k < size; k++) {
		if (arr[k] == 0) {
			cout << "\t\033[95m" << 0 << " ";

		}
		if (arr[k] == 1) {
			cout << "\t\033[91m" << char(21) << " ";

		}
		if (arr[k] == 2) {
			cout << "\t\033[92m" << char(36) << " ";

		}
		if (arr[k] == 3) {
			cout << "\t\033[94m" << char(38) << " ";

		}
		if (arr[k] == 4) {
			cout << "\t\033[93m" << char(64) << " ";

		}


	}
	cout << "\033[97m" << endl;
}

void gen_arr(int size, int arr[]) {
	for (int k = 0; k < size; k++) {
		arr[k] = get_rand(0, 4);
	}

}
void comparison(int size, int arr[]) {
	for (int k = 0; k < size; k++) {
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			bet1 = bet;
			cout << "\t\033[95m" << 0 << "Ставка возвращается игроку" << endl;
			break;
		}
		if (arr[0] == 1 && arr[1] == 1 && arr[2] == 1) {
			bet1 = bet * 3;
			cout << "\t\033[91m" << char(21) << "Ставка умножается на 3" << endl;
			break;
		}
		if (arr[0] == 2 && arr[1] == 2 && arr[2] == 2) {
			bet1 = bet * 5;
			cout << "\t\033[92m" << char(36) << "Ставка умножается на 5" << endl;
			break;
		}
		if (arr[0] == 3 && arr[1] == 3 && arr[2] == 3) {
			bet1 = bet * 10;
			cout << "\t\033[94m" << char(38) << "Ставка умножается на 10" << endl;
			break;
		}
		if (arr[0] == 4 && arr[1] == 4 && arr[2] == 4) {
			bet1 = bet * 100;
			cout << "\t\033[93m" << char(64) << "Ставка умножается на 100" << endl;
			break;
		}


	}

}
void arrays_1() {

	const int size = 3;
	int vects1[size];
	char start;
	cout << "\033[95m" << "Начать игру  JACKPOT" << endl;
	cout << "\033[96m" << "Нажмите: y" << endl;
	cin >> start;
	if (start == 'y') {
		goto rex;
	}
	else {
		cout << "Не корректный ввод!" << endl;
		goto enter1;
	}
rex:cout << "" << endl;

	int  sum1;
start:cout << "\033[96m" << "Введите депозит ";
	cin >> sum1;
	while (sum1 != 0) {

		cout << "\033[93m" << "\t\t\tJACKPOT" << endl;
	rex1:cout << "\033[96m" << "Введите ставку" << endl;
		cout << "\033[90m" << "Выход: 0" << endl;
		cout << "\033[97m" << "";
		cin >> bet;
		if (bet == 0) {
			cout << "\033[90m" << "Выход" << endl;
			goto exit;
		}
		if (sum1 < bet) {
			cout << "\t\033[91m" << "Нехватает средств" << endl;

			goto rex1;
		}
		cout << "" << endl;
		cout << "\033[96m" << "--------------------------------------" << endl;
		cout << "\033[95m" << "| " << 0 << " " << 0 << " " << 0 << " - Ставка возвращается игроку |" << endl;
		cout << "\033[91m" << "| " << char(21) << " " << char(21) << " " << char(21) << " - Ставка умножается на 3     |" << endl;
		cout << "\033[92m" << "| " << char(36) << " " << char(36) << " " << char(36) << " - Ставка умножается на 5     |" << endl;
		cout << "\033[94m" << "| " << char(38) << " " << char(38) << " " << char(38) << " - Ставка умножается на 10    |" << endl;
		cout << "\033[93m" << "| " << char(64) << " " << char(64) << " " << char(64) << " - Ставка умножается на 100   |" << endl;
		cout << "\033[96m" << "--------------------------------------" << endl;
		gen_arr(size, vects1);
		cout << "\033[96m" << "\t-------------------" << endl;
		show_arr(size, vects1);
		cout << "\033[96m" << "\t-------------------" << endl;
		comparison(size, vects1);
		sum1 = sum1 - bet + bet1;
		cout << "\033[97m" << "Ваш депозит:" << sum1 << endl;



		if (sum1 <= 0) {
			cout << "\t\033[91m" << "Ваш депозит мал. Введите депозит" << endl;
			goto start;
		}

	}
exit:cout << "\033[97m" << "Ваш выигрыш:" << sum1 << endl;
enter1:cout << "" << endl;
}







int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	arrays_1();
	system("pause");
	return 0;
}