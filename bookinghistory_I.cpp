void showBookingHistory() {
    cout << "\nBooking History:\n";
    for (int i = 0; i < totalCustomers; i++) {
        if (customers[i] == "CANCELLED") continue;

        int roomType = bookingHistory[i][1];
        int nights = bookingHistory[i][2];
        cout << "Customer ID: " << i + 1 << ", Name: " << customers[i]
             << ", Room Type: " << (roomType == 1 ? "Single" : roomType == 2 ? "Double" : "Suite")
             << ", Nights: " << nights << "\n";
    }
}
