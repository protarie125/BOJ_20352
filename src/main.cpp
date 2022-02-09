#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double s;
	cin >> s;

	constexpr double pi = 3.14159265358979323846;

	auto r = sqrt(s / pi);
	auto l = 2 * pi * r;

	cout << fixed << setprecision(8) << l;

	return 0;
}