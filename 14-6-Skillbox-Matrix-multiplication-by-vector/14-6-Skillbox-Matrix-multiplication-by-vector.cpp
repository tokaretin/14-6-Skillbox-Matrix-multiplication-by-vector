/*Задание 4. Умножение матрицы на вектор
Реализуйте частный случай умножения матрицы на матрицу, а именно умножение вектора на матрицу.
Эта операция распространена в компьютерной индустрии в целом и в компьютерной графике в частности,
поэтому это будет хорошим упражнением.

Итак, у нас есть четырёхкомпонентный вектор b, представленный с помощью массива, и матрица a размером 4 × 4,
представленная в виде двумерного массива.Их произведением будет новый четырёхэлементный вектор c.Его компоненты
будут суммой произведений элемента вектора b на строку матрицы a.Индекс столбца при этом равен индексу соответствующей
компоненты вектора b, который мы и рассчитываем.

Все входные данные, матрица a и вектор b вносятся из пользовательского ввода.Итоговый вектор c надо вывести в
консоль(std::cout).Тип данных элементов — всегда float.Желательно реализовать этот алгоритм с помощью вложенного
цикла на умножение колонки.


Советы и рекомендации
Во внутреннем цикле потребуется аккумулятор, накапливающий значение очередной ячейки результирующего вектора.
Каждый раз не забывайте его обнулять до начала расчётов.

Что оценивается
Программа вычисляет результирующий вектор в соответствии с формулой перемножения матрицы на вектор.*/

#include <iostream>

int const SIZE = 4;

// Функция умножения вектора на матрицу
void vectorMultiplication(float matrix[SIZE][SIZE], float vector[SIZE], float result[SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			result[i] += matrix[i][j] * vector[j];
		}
	}
}

// Функция вывода vectorС
void vectorScreenDisplay(float vector[SIZE])
{
	std::cout << "Screen display:\n";
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << vector[i] << " ";
	}
	std::cout << '\n';
}

int main()
{
	float matrixA[SIZE][SIZE];
	float vectorB[SIZE];
	float vectorC[SIZE] = { 0 };
	
	std::cout << "Inter the matrix A 4*4:\n";
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			std::cin >> matrixA[i][j];
		}
	}

	std::cout << "Inter the matrix B 4*1:\n";
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> vectorB[i];
	}

	// Умножение вектора на матрицу
	vectorMultiplication(matrixA, vectorB, vectorC);

	/*Сделал функцию vectorMultiplication
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			vectorC[i] += matrixA[i][j] * vectorB[j];
		}
	}*/
	
	// Вывод vectorС
	vectorScreenDisplay(vectorC);

	/* Сделал функцию vectorЫcreenВisplay
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << vectorC[i] << " ";
	}
	std::cout << '\n';*/
	
	return 0;

}