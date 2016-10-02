#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    //declare vars

    string firstName, lastName, dateWritten;
    int months;
    double amount, flatServiceCharge, svcCharge2, svcCharge5, serviceCharge;
    const double TWO_PERCENT = .02;

    cout << "******  Service Charge Calculator  ******" << endl;
    cout << "\n Enter FIRST name on check: ";
    cin >> firstName;
    cout << "\n Enter LAST name on check: ";
    cin >> lastName;
    cout << "\n \n How many months late is this check: ";
    cin >> months;
    cout << "\n Enter check amount: $";
    cin >> amount;

    // calc it
    flatServiceCharge = 20.00;
    svcCharge2 = amount * TWO_PERCENT;
    svcCharge5 = months * 5.00;
    serviceCharge = flatServiceCharge + svcCharge2 + svcCharge5;

    // Report it
    cout << "\n \n \n" << firstName << " " << lastName <<"'s late charge is: $" << serviceCharge << endl;
    cout << "\n      Do you want to send out a hit ?" << endl;
    cout << ":)\n\n\n";



    // ***************************************************
    // Car Rental
    // ***************************************************

    // declare vars

    double fee, amountPerMile, mileagePRE, mileagePOST, PerMileEarnings;

    cout << "******  Per Mile Earnings Calculator  ******" << endl;
    cout << "\n Enter BEGININNG mileage: ";
    cin >> mileagePRE;
    cout << "\n Enter ENDING mileage: ";
    cin >> mileagePOST;
    cout << "\n \n What FEE was charged: ";
    cin >> fee;

    // calc it

    PerMileEarnings = fee / (mileagePOST - mileagePRE);

    // report it

    cout << "\n\nThis rental earned us: $" << PerMileEarnings << " per mile.";
    cout << "\nThis rental showed " << mileagePOST - mileagePRE << " total miles traveled for the $" << fee << " earned.";
    cout << "\n\n";



    // ***************************************************
    // Summer Camp
    // ***************************************************

    // declare vars

    int swim, tennis, horse, crafts, total;

    cout << "******  Camper Skill Level  ******" << endl;
    cout << "\n Enter camper's skill level in swimming: ";
    cin >> swim;
    cout << "\n Enter camper's skill level in tennis: ";
    cin >> tennis;
    cout << "\n Enter camper's skill level in horsemanship: ";
    cin >> horse;
    cout << "\n Enter camper's skill level in crafts: ";
    cin >> crafts;

    // calc it

    total = swim + tennis + horse + crafts;

    // report it

    cout << "\n\nThis camper's total skill level is: " << total << endl;
    cout << "\n\n";



    // ***************************************************
    // Bookcases
    // ***************************************************

    // declare vars

    int width, height, totalFootage;
    const int TIMES2 = 2;
    const int TIMES5 = 5;

    cout << "******  Total Board Footage Calculator  ******" << endl;
    cout << "\n Enter the HEIGHT of your new bookcase: ";
    cin >> height;
    cout << "\n Enter the WIDTH of your new bookcase: ";
    cin >> width;

    // calc it

    totalFootage = (width * TIMES5) + (height * TIMES2);

    // report it

    cout << "The total footage needed for your bookcase is: " << totalFootage;
    cout << "\n\n";

    return 0;
}
