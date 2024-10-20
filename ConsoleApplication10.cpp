#include <iostream>

using namespace std;

//int main() {
	//1
//    char symbol;
//
//    cout << "Enter a symbol: ";
//    cin >> symbol;
//
//    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
//        cout << "It's a letter." << endl;
//    }
//
//    if (symbol >= '0' && symbol <= '9') {
//        cout << "It's a digit." << endl;
//    }
//
//    if ((symbol >= 33 && symbol <= 47) || (symbol >= 58 && symbol <= 64) ||
//        (symbol >= 91 && symbol <= 96) || (symbol >= 123 && symbol <= 126)) {
//        cout << "It's a punctuation mark." << endl;
//    }
//
//    if (!((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') ||
//        (symbol >= '0' && symbol <= '9') ||
//        ((symbol >= 33 && symbol <= 47) || (symbol >= 58 && symbol <= 64) ||
//            (symbol >= 91 && symbol <= 96) || (symbol >= 123 && symbol <= 126)))) {
//        cout << "It's another symbol." << endl;
//    }
//}

//2
    //double calculateCost(double costPerMinute, double duration) {
    //    return costPerMinute * duration;
    //}
    //int main() {
    //    cout << "Select the operator you are calling from:\n";
    //    cout << "1. Operator A\n";
    //    cout << "2. Operator B\n";
    //    cout << "3. Operator C\n";

    //    int operatorFrom;
    //    cout << "Your choice (1-3): ";
    //    cin >> operatorFrom;

    //    cout << "Select the operator you are calling to:\n";
    //    cout << "1. Operator A\n";
    //    cout << "2. Operator B\n";
    //    cout << "3. Operator C\n";

    //    int operatorTo;
    //    cout << "Your choice (1-3): ";
    //    cin >> operatorTo;

    //    double duration;
    //    cout << "Enter the duration of the call in minutes: ";
    //    cin >> duration;

    //    double rates[3][3] = {
    //        {0.5, 0.7, 1.0}, 
    //        {0.6, 0.4, 1.1}, 
    //        {0.8, 1.0, 0.5}  
    //    };

    //    double costPerMinute = rates[operatorFrom - 1][operatorTo - 1];

    //    if (costPerMinute == 0) {
    //        cout << "Invalid operator selection.\n";
    //    }
    //    else {
    //        double totalCost = calculateCost(costPerMinute, duration);
    //        cout << "The cost of the call: " << totalCost << " currency units\n";
    //    }

    //}
