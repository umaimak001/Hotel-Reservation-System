void bookRoom() {
    string name;
    int roomType, nights;

    // Get customer name
    cout << "Enter your first name : ";
    cin >> name;

    // Choose room type
    do {
        cout << "Enter room type (1 for Single, 2 for Double, 3 for Suite): ";
        cin >> roomType;

        if (roomType < 1 || roomType > 3) {
            cout << "Invalid room type. Please try again.\n";
        } else if (availableRooms[roomType - 1] <= 0) {
            cout << "Sorry, no rooms available in this category. Choose another room type.\n";
            roomType = -1;  // Force another iteration
        }
    } while (roomType < 1 || roomType > 3);

    // Get number of nights
    cout << "Enter number of nights: ";
    cin >> nights;

    // Calculate total price
    int price = (roomType == 1 ? singleroomprice : roomType == 2 ? doubleroomprice : suiteroomprice);
    int totalPrice = price * nights;

    // Deduct room from availability
    availableRooms[roomType - 1]--;

    // Add to booking history
    customers[totalCustomers] = name;
    bookingHistory[totalCustomers][0] = totalCustomers + 1; // Customer ID
    bookingHistory[totalCustomers][1] = roomType;           // Room Type
    bookingHistory[totalCustomers][2] = nights;            // Nights
    totalCustomers++;
/ Display booking details
    cout << "Booking successful! Your Customer ID is " << totalCustomers << ".\n";
    cout << "Total Price: $" << totalPrice << "\n";
}


    // Display booking details
    cout << "Booking successful! Your Customer ID is " << totalCustomers << ".\n";
    cout << "Total Price: $" << totalPrice << "\n";
