#include <iostream>
using namespace std;

int main() {

    
    // PART 1: 1D ARRAY - WEEKLY REVENUE
    

    double revenue[7];
    double totalRevenue = 0.0;

    cout << "===== WEEKLY REVENUE =====" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];

        totalRevenue += revenue[i];
    }

    double averageRevenue = totalRevenue / 7.0;


    cout << "\nTotal weekly revenue: "
         << totalRevenue << endl;

    cout << "Average daily revenue: "
         << averageRevenue << endl;


    // ==========================================
    // PART 2: 2D ARRAY - ONE BRANCH
    // 5 FLOORS × 10 ROOMS
    // ==========================================

    int occupancy[5][10];

    cout << "\n===== ROOM OCCUPANCY =====" << endl;
    cout << "Enter 1 for occupied and 0 for vacant." << endl;

    for (int floor = 0; floor < 5; floor++) {

        for (int room = 0; room < 10; room++) {

            cout << "Floor " << floor + 1
                 << ", Room " << room + 1
                 << ": ";

            cin >> occupancy[floor][room];

            // ensure only 0 or 1 is entered
            while (occupancy[floor][room] != 0 &&
                   occupancy[floor][room] != 1) {

                cout << "Please enter only 0 or 1: ";
                cin >> occupancy[floor][room];
            }
        }
    }

    // Display occupied and vacant rooms per floor
    cout << "\n===== FLOOR OCCUPANCY =====" << endl;

    for (int floor = 0; floor < 5; floor++) {

        int occupied = 0;

        for (int room = 0; room < 10; room++) {
            occupied += occupancy[floor][room];
        }

        int vacant = 10 - occupied;

        cout << "Floor " << floor + 1
             << " -> Occupied: " << occupied
             << ", Vacant: " << vacant << endl;
    }


    
    // PART 3: 3D ARRAY - MULTIPLE BRANCHES
    // 3 BRANCHES × 5 FLOORS × 10 ROOMS
    
    int chain[3][5][10];

    int totalOccupied = 0;

    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate random occupancy
    for (int branch = 0; branch < 3; branch++) {

        for (int floor = 0; floor < 5; floor++) {

            for (int room = 0; room < 10; room++) {

                chain[branch][floor][room] = rand() % 2;

                totalOccupied += chain[branch][floor][room];
            }
        }
    }

    cout << "\n===== MULTIPLE BRANCHES =====" << endl;

    cout << "Total occupied rooms across all branches: "
         << totalOccupied << endl;

    return 0;
}