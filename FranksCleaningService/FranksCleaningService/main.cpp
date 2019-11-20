//
//  main.cpp
//  FranksCleaningService
//
//  Created by will whitworth on 11/20/19.
//  Copyright © 2019 will whitworth. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    const double cost_per_small_room {25.0};
    const double cost_per_large_room {35.0};
    const double tax_rate {0.06};
    const double num_days_valid {30};
    
    cout << "Welcome to Frank's Carpet Cleaning Service!\n\n";
    cout << "How many small rooms would you like cleaned? ";
    
    short small_rooms {0};
    cin >> small_rooms;
    
    cout << "How many large rooms would you like cleaned? ";
    short large_rooms {0};
    cin >> large_rooms;
    
    double cost {small_rooms * cost_per_small_room + large_rooms * cost_per_large_room};
    double tax = cost * tax_rate;
    
    cout << "Estimate for carpet cleaning service.";
    cout << "\nNumber of small rooms: " << small_rooms;
    cout << "\nNumber of large rooms: " << large_rooms;
    cout << "\nPrice per small rooms: $" << cost_per_small_room;
    cout << "\nPrice per large rooms: $" << cost_per_large_room;
    cout << "\nCost: $" << cost;
    cout << "\nTax: $" << tax;
    cout << "\n=====================================";
    cout << "\nTotal estimate: $" << cost + tax;
    cout << "\nThe estimate is valid for " << num_days_valid << " days." << endl << endl;
    
    return 0;
}
