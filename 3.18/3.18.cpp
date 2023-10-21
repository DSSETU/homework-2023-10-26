#include <iostream>
using namespace std;

int main() {
	double weeklySales;
	double weeklyIncome;

	cout << "請輸入本周的總銷售額（美元）： ";
	cin >> weeklySales;

	weeklyIncome = 200.0 + (0.09 * weeklySales);

	cout << "銷售人員本周的總收入為： $" << weeklyIncome << endl;

	return 0;
}
