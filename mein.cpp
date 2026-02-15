// the calculator program

#include <iostream>

int main() {
#include <iostream>
	using namespace std;

	int main() {
		double a, b;   // Переменные для двух чисел
		char op;       // Переменная для оператора (+, -, *, /)

		// Просим пользователя ввести выражение
		cout << "Введите выражение (например: 2 + 3): ";

		// Считываем: число, оператор, число
		cin >> a >> op >> b;

		// Выбираем действие в зависимости от введённого оператора
		switch (op) {
		case '+':   // Если пользователь ввёл '+'
			cout << "Результат: " << a + b << endl;
			break;

		case '-':   // Если '-'
			cout << "Результат: " << a - b << endl;
			break;

		case '*':   // Если '*'
			cout << "Результат: " << a * b << endl;
			break;

		case '/':   // Если '/'
			if (b != 0) {  // Проверяем деление на ноль
				cout << "Результат: " << a / b << endl;
			}
			else {
				cout << "Ошибка: деление на ноль невозможно!" << endl;
			}
			break;

		default:    // Если введён неизвестный оператор
			cout << "Ошибка: неизвестная операция!" << endl;
		}

		system("pause");
	}


}