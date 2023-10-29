#pragma once

class matrix //����� �������
{
private:

	float** matrix_creator(unsigned int n, unsigned int m); //������ ������� n �� m
	float* array_creator(unsigned int n); //������ ������, ������������ n

	unsigned int nl = 0; //������
	unsigned int ml = 0; //�������

	float GetRandomNumber(int min, int max);

public:

	const int ncl = nl;
	const int mcl = ml; //�����, �����������, ���� get,set

	float** M = nullptr; //��������� �� �������
	float* A = nullptr; //��������� �� ������
	
	matrix(unsigned int, unsigned int); //����������� �������
	matrix(unsigned int); //����������� �������
	matrix();

	float& operator () (int x, int y = -1); //�������� ��������� �������� �� �������
	matrix& operator = (const matrix& R); //�������� ������������
	matrix& operator* (const float x); // �������� ��������� �� ������
	matrix& operator* (matrix& I); // �������� ��������� �� �������
	matrix& operator/ (matrix& I); // �������� ������� �� �������
	matrix& operator- (matrix& I); // -
	matrix& operator-= (matrix& I); // -=
	void operator >> (float inp); //�������� ���������� ���� ������� ����� ������
	void operator << (const matrix& R); // �������� ������ �������
	void operator << (matrix& R);

	void clean(); //������� ����������� 

	void randomize(int min, int max); //����������� �������
	void randomize_advanced(int min, int max); //����������� �������
	float AMult(); //����������� ����� � �������
	std::string tos(); //������� �� ����� � � ������ ������/�������
	void diag_antizero(unsigned int n, unsigned int m);
	void diag_replace(unsigned int n, unsigned int m, double x = 0);

	//todo: ��������� � ������ ��������
	//resize
	// += -= /= *= �� ��� ��������
	//������� � ���������� ��� ��������� ��������
};

static matrix m;
