#pragma once

class matrix //класс матрицы
{
private:

	float** matrix_creator(unsigned int n, unsigned int m); //создаЄт матрицу n на m
	float* array_creator(unsigned int n); //создаЄт массив, размерностью n

	unsigned int nl = 0; //строки
	unsigned int ml = 0; //столбцы

	float GetRandomNumber(int min, int max);

public:

	const int ncl = nl;
	const int mcl = ml; //херн€, переделывай, надо get,set

	float** M = nullptr; //указатель на матрицу
	float* A = nullptr; //указатель на массив
	
	matrix(unsigned int, unsigned int); //конструктор матрицы
	matrix(unsigned int); //конструктор массива
	matrix();

	float& operator () (int x, int y = -1); //оператор получени€ значени€ по индексу
	matrix& operator = (const matrix& R); //оператор присваивани€
	matrix& operator* (const float x); // ќператор умножени€ на скал€р
	matrix& operator* (matrix& I); // ќператор умножени€ на матрицу
	matrix& operator/ (matrix& I); // ќператор делени€ на матрицу
	matrix& operator- (matrix& I); // -
	matrix& operator-= (matrix& I); // -=
	void operator >> (float inp); //оператор заполнени€ всей матрицы одним числом
	void operator << (const matrix& R); // оператор вывода матрицы
	void operator << (matrix& R);

	void clean(); //очищает конструкцию 

	void randomize(int min, int max); //рандомайзер матрицы
	void randomize_advanced(int min, int max); //рандомайзер матрицы
	float AMult(); //перемножает числа в массиве
	std::string tos(); //выводит на экран и в строку массив/матрицу
	void diag_antizero(unsigned int n, unsigned int m);
	void diag_replace(unsigned int n, unsigned int m, double x = 0);

	//todo: умножение и прочие операции
	//resize
	// += -= /= *= на все элементы
	//шаблоны и перегрузка под двадцатый стандарт
};

static matrix m;
