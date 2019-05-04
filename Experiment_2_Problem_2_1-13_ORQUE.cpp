#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	int gallons;
	cout << "Enter Gallons Consumed: "; cin >> gallons;

	float WaterDemandCharge = 35, ConsumptionCharge = 1.10, TotalCharge = WaterDemandCharge + (ConsumptionCharge * gallons), TotalLateCharge = TotalCharge + 20, AmountPaid;

	cout << "Total Charge: " << TotalCharge << endl;
	cout << "Enter Amount of Payment: "; cin >> AmountPaid;

	if (AmountPaid < TotalCharge)
	{
		cout << "Your water bill costs: " << TotalLateCharge << ", including an additional late charge fee of P20." "\n" "Please pay proper amount: "; cin >> AmountPaid;

		if (AmountPaid < TotalLateCharge)
		{
			cout << "Invalid. Please pay enough amount." << endl;
		}
		else
		{
			cout << "Payment accepted! You have a total change of " << AmountPaid - TotalLateCharge << "." << endl;
		}
	}
	else
	{
		cout << "Payment accepted! Your water bill costs " << TotalCharge << " with a total change of " << AmountPaid - TotalCharge << "." << endl;
	}

	cout << "Thank You!";

	_getch();
	return 0;
}