

void generateBill() {
    int customerID;
    cout << "Enter your customer ID to generate the bill: ";
    cin >> customerID;

    // Validate customer ID
    while (customerID <= 0 || customerID > totalCustomers || customers[customerID - 1] == "CANCELLED") {
        cout << "Invalid Customer ID. Please try again: ";
        cin >> customerID;
    }

    // Retrieve booking details
    int roomType = bookingHistory[customerID - 1][1];
    int nights = bookingHistory[customerID - 1][2];
    int price = (roomType == 1 ? singleroomprice : roomType == 2 ? doubleroomprice : suiteroomprice);
    int totalPrice = price * nights;

    // Display bill
    cout << "\n----- Bill -----\n";
    cout << "Customer Name: " << customers[customerID - 1] << "\n";
    cout << "Room Type: " << (roomType == 1 ? "Single" : roomType == 2 ? "Double" : "Suite") << "\n";
    cout << "Nights: " << nights << "\n";
    cout << "Total Price: Rs. “<< totalPrice << "\n";
    cout << "-----------------\n";
}


                cout << 
