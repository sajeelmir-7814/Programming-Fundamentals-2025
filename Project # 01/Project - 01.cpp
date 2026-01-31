#include <iostream>
using namespace std;
int main()
{
    int choice;
    bool again;
    int N, S, X, Y;
    int bill = 0;
    int *billPtr = &bill;
    
    do {
    cout << "\n Welcome To " << endl;
    cout << " ======== Muzaffarabad ShowRoom ========= " << endl;
    cout << " 1. Sedan  " << endl;
    cout << " 2. SUVs " << endl;
    cout << " 3. 4X4 " << endl;
    cout << " 4. Hybrids " << endl;

    cout << " Select The Car Type You Want: ";
    cin >> choice;

    if (choice == 1) {
    cout << " 1. Toyota Corolla 1.8  " << endl;
    cout << " 2. Honda Civic Turbo  " << endl;
    cout << " 3. Toyota Grande 1.8X  " << endl;
    cout << " 4. Mark X  " << endl;
    cout << " Select your Desire Car: ";
    cin >> N;
    
    switch (N) {
    case 1:
    cout << " Model: 2012\n Fuel: Petrol\n Color: Black\n Location: Islamabad\n Price: 450000\n";
    (*billPtr) += 450000;
    break;
    case 2:
    cout << " Model: 2025\n Fuel: Petrol\n Color: White\n Location: Lahore\n Price: 10000000\n";
    (*billPtr) += 10000000;
    break;
    case 3:
    cout << " Model: 2020\n Fuel: Petrol\n Color: Black\n Location: Sindh\n Price: 550000\n";
    (*billPtr) += 550000;
    break;
    case 4:
    cout << " Model: 2015\n Fuel: Petrol\n Color: Black\n Location: Islamabad\n Price: 600000\n";
    (*billPtr) += 600000;
    break;
    default:
    cout << " Invalid Input!\n";
    }
    }

    else if (choice == 2) {
    cout << " 1. Haval " << endl;
    cout << " 2. KIA Sportage " << endl;
    cout << " 3. Fortuner " << endl;
    cout << " 4. Land Cruiser V8 " << endl;
    cout << " Select your Desire Car: ";
    cin >> S;
    
    switch (S) {
    case 1:
    cout << " Model: 2023\n Fuel: Petrol\n Color: Black\n Location: Karachi\n Price: 900000\n";
   (*billPtr) += 900000;
    break;
    case 2:
    cout << " Model: 2022\n Fuel: Petrol\n Color: Red\n Location: Islamabad\n Price: 850000\n";
   (*billPtr) += 850000;
    break;
    case 3:
    cout << " Model: 2023\n Fuel: Petrol\n Color: Black\n Location: Muzaffarabad\n Price: 15000000\n";
    (*billPtr) += 15000000;
    break;
    case 4:
    cout << " Model: 2024\n Fuel: Deisel\n Color: White\n Location: Punjab\n Price: 18000000\n";
    (*billPtr) += 18000000;
    break;
    default:
   cout << " Invalid Input!\n";
    }
    }

    else if (choice == 3) {
    cout << " 1. Potohar Jeep " << endl;
    cout << " 2. Jeep CJ 5 " << endl;
    cout << " 3. Suzuki Jimny " << endl;
    cout << " 4. Vigo 4x4 " << endl;
    cout << " Select your Desire Car: ";
    cin >> X;

    switch (X) {
    case 1:
    cout << " Model: 1989\n Fuel: Petrol\n Color: White\n Location: Sindh\n Price: 150000\n";
    (*billPtr) += 150000;
    break;
    case 2:
    cout << " Model: 1974\n Fuel: Deisel\n Color: Black\n Location: Islamabad\n Price: 190000\n";
    (*billPtr) += 190000;
    break;
    case 3:
    cout << " Model: 2024\n Fuel: Petrol\n Color: Green\n Location: Islamabad\n Price: 350000\n";
   (*billPtr) += 350000;
    break;
    case 4:
    cout << " Model: 2017\n Fuel: Deisel\n Color: White\n Location: Hyderabad\n Price: 550000\n";
   (*billPtr) += 550000;
    break;
    default:
    cout << " Invalid Input!\n";
    }
    }

    else if (choice == 4) {
    cout << " 1. Elantra " << endl;
    cout << " 2. Sonata " << endl;
    cout << " 3. Prius " << endl;
    cout << " 4. Raize " << endl;
    cout << " Select your Desire Car: ";
    cin >> Y;

    switch (Y) {
    case 1:
    cout << " Model: 2015\n Fuel: Petrol\n Color: White\n Location: Islamabad\n Price: 800000\n";
   (*billPtr)+= 800000;
    break;
    case 2:
    cout << " Model: 2023\n Fuel: Petrol\n Color: Black\n Location: Lahore\n Price: 900000\n";
    (*billPtr) += 900000;
    break;
   case 3:
    cout << " Model: 2009\n Fuel: Petrol\n Color: White\n Location: Rawalpindi\n Price: 450000\n";
    (*billPtr) += 450000;
    break;
    case 4:
    cout << " Model: 2019\n Fuel: Petrol\n Color: Red\n Location: Islamabad\n Price: 620000\n";
    (*billPtr) += 620000;
    break;
    default:
    cout << " Invalid Input!\n";
    }
}

    else {
    cout << " Invalid Car Type!\n";
    }
    cout<<"----------------------------------";
    cout << "\n Total Estimated Bill : " << *billPtr << " PKR" << endl;
    cout<<"----------------------------------"<<endl;
    cout << " Do you want to continue? (1 = Yes, 0 = No): ";
    cin >> again;

    } while (again == 1);
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
    cout << " Final Bill: " << *billPtr << " PKR";
    cout << "\n Thank you for visiting Muzaffarabad Showroom ."<<endl;
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
    

    return 0;
}


