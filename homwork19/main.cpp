#include <iostream>;
#include <ctime>
#include <cstdlib>

//Задача 1.
int divider(int num1, int num2) {
	int a;
	if (num1 < num2) num2 -= num1, num1 += num2, num2 = num1 - num2;
	a = num1 % num2;
	if (a == 0)
		return num2;
}

//Задача 2.
int mirror_number(int number) {
	int n = 0;
	while (number)
	{
		n = 10 * n + number % 10;
		number /= 10;
	}
	return n;
}

//Задача 3.
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}

//Задача 4.
void array(int arr[], const int length, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (max - min) + min;
		arr[0] = min;
		arr[9] = max;
		std::cout << arr[i] << "\t";
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1.
	int n, m;
	std::cout << "Задача 1\n Введите первое число -> ";
	std::cin >> n;
	std::cout << "Введите второе число -> ";
	std::cin >> m;
	std::cout << "Максимальный делитель: " << divider(n, m) << std::endl;

	//Задача 2.
	int n1;
	std::cout << "Задача 2\n Введите число -> ";
	std::cin >> n1;
	std::cout << mirror_number(n1) << std::endl;

	//Задача 3.
	int n2;
	std::cout << "Задача 3\n Введите число -> ";
	std::cin >> n2;
	const int size = 6;
	int arr[size]{ 4, 6, 10, 24, 65, 34 };

	int index = search_index(arr, size, n2);

	if (index != -1)
		std::cout << "Позиция числа: " << index << std::endl;
	else
		std::cout << "Данного числа нет в массиве! " << std::endl;

	//Задача 4.
	int n3, m1;
	std::cout << "Задача 4\n Введите первое число -> ";
	std::cin >> n3;
	std::cout << "Введите второе число -> ";
	std::cin >> m1;

	const int size = 10;
	int arr1[size]{};

	std::cout << "Массив:\n";
	array(arr1, size, n3, m1);

	std::cout << std::endl;

	return 0;
}