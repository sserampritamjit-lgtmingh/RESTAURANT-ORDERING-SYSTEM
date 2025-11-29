// =========================================================
//                RESTAURANT ORDERING SYSTEM
// =========================================================
// Course: B.Tech CSE(IBM) - 1st Semester
// Subject: C++ Programming
// Project Title: Restaurant Ordering System
// Submitted By:
// 1. Seram Pritamjit Singh 		- ADTU/0/2025-29/BCSM/036
// 2. Moirangthem Rakhawa Meetei 	- ADTU/0/2025-29/BCSM/086
// 3. Tejdajit Yengkhom 			- ADTU/0/2025-29/BCSM/004
// 4. Supratik Das 					- ADTU/0/2025-29/BCSM/029
// 5. Samajhli jecinta Sema 		- ADTU/0/2025-20/BCSM/046
// 6. Md. Abdul Rajak				- ADTU/0/2025-20/BCSM/059
// Teacher: Ashwin Sir
// College: Assam Down Town University (ADTU)
// =========================================================

#include <iostream>
using namespace std;

int main() {
    int choice, quantity;
    char again;
    int Mimi_SingjuQty = 0, Smoked_PorkQty = 0, Chakhao_KheerQty = 0, Nga_AtoibaQty = 0, Rice_WineQty = 0;
    int total = 0; 

    cout << "===== WELCOME TO MEIKAPPI RESTAURANT =====\n";

    do {
        cout << "\n------- MENU -------\n";
        cout << "1. Mimi Singju      - Rs.100 \n";
        cout << "2. Smoked Pork      - Rs.250 \n";
        cout << "3. Chakhao Kheer    - Rs.150 \n";
        cout << "4. Nga Atoiba       - Rs.120 \n";
        cout << "5. Rice Wine        - Rs.70  \n";
        cout << "--------------------\n";

        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice! Please select from 1 to 5.\n";
            continue; 
        }

        cout << "Enter quantity: ";
        cin >> quantity;
        cout << endl;
        

        if (quantity <= 0) {
            cout << "Invalid quantity! Must be positive.\n";
            continue;
        }

        switch (choice) {
            case 1: Mimi_SingjuQty += quantity; total += 100 * quantity; break;
            case 2: Smoked_PorkQty += quantity; total += 250 * quantity; break;
            case 3: Chakhao_KheerQty += quantity; total += 150 * quantity; break;
            case 4: Nga_AtoibaQty += quantity; total += 120 * quantity; break;
            case 5: Rice_WineQty += quantity; total += 70 * quantity; break;
        }

        cout << "Do you want to order more? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\n===== BILL SUMMARY =====\n";
    if (Mimi_SingjuQty > 0) cout << "Mimi Singju x " << Mimi_SingjuQty << " = Rs." << Mimi_SingjuQty * 100 << endl;
    if (Smoked_PorkQty > 0) cout << "Smoked Pork x " << Smoked_PorkQty << " = Rs." << Smoked_PorkQty * 250 << endl;
    if (Chakhao_KheerQty > 0) cout << "Chakhao Kheer x " << Chakhao_KheerQty << " = Rs." << Chakhao_KheerQty * 150 << endl;
    if (Nga_AtoibaQty > 0) cout << "Nga Atoiba x " << Nga_AtoibaQty << " = Rs." << Nga_AtoibaQty * 120 << endl;
    if (Rice_WineQty > 0) cout << "Rice Wine x " << Rice_WineQty << " = Rs." << Rice_WineQty * 70 << endl;

    cout << "----------------------------\n";
    cout << "Total Amount: Rs." << total << "\n";
    cout << "Thank you for visiting Meikappi Restaurant! \n";

    return 0;
}


