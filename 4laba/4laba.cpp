#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	unsigned int N;
	double x_0;

	cout << "Введите N: ";
	cin >> N;
	cout << "Введите x_0: ";
	cin >> x_0;

	double Ln_N_x_0 = 0; // N = 0

	for (int i = 1; i < N; ++i) {
		Ln_N_x_0 += 2.0 * pow((x_0 - 1), 2 * i - 1) / (pow((x_0 + 1), 2 * i - 1) * (2 * i - 1));
	}


	cout << abs(log(x_0) - Ln_N_x_0) << endl;

	cout << abs(abs(log(x_0) - Ln_N_x_0) - 2.0 * pow((x_0 - 1), 2 * N - 1) / (pow((x_0 + 1), 2 * N - 1) * (2 * N - 1))) << endl;

	Ln_N_x_0 = 0;

	double E;

	cout << "Введите E: ";
	cin >> E;

	int i = 1;
	while (2.0 * pow((x_0 - 1), 2 * i - 1) / (pow((x_0 + 1), 2 * i - 1) * ((2 * i - 1))) > E) {
		Ln_N_x_0 += 2.0 * pow((x_0 - 1), 2 * i - 1) / (pow((x_0 + 1), 2 * i - 1) * (2 * i - 1));
		++i;
	}

	cout << Ln_N_x_0 << " " << i - 1 << endl;

	Ln_N_x_0 = 0;

	i = 1;
	while (2.0 * pow((x_0 - 1), 2 * i - 1) / (pow((x_0 + 1), 2 * i - 1) * (2 * i - 1)) > E * 10) {
		Ln_N_x_0 += 2.0 * pow((x_0 - 1), 2 * i - 1) / (pow((x_0 + 1), 2 * i - 1) * (2 * i - 1));
		++i;
	}



	cout << Ln_N_x_0 << " " << i - 1 << endl;


	Ln_N_x_0 = 0;


	i = 1;
	while (2.0 * pow((x_0 - 1), 2 * i - 1) / (pow((x_0 + 1), 2 * i - 1) * (2 * i - 1)) > E / 10) {
		Ln_N_x_0 += 2.0 * pow((x_0 - 1), 2 * i - 1) / (pow((x_0 + 1), 2 * i - 1) * (2 * i - 1));
		++i;
	}

	cout << Ln_N_x_0 << " " << i - 1 << endl;
}
