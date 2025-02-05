// Compute - takes some inputs and produces some output. 
// The input can come from a keyboard, from a mouse, from a touch screen etc.
// To deal with input, a program usually contains some data, referred to as its data structures or its state.

/*For the calender, the main inputs are the requests to see the months and days you ask for and the appointments you give it to keep track of. Output is the display of calendars and appointments*/

//Output can be to a screen, to files, to network connections, to other output devices, to other programs, and to other parts of a program.
//The abbreviation I/O stands for "input/output". In this case, the output from one part of code is the input for the next part.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Structure to store an appointment (date + description)
struct Appointment {
    string date;      // e.g., "2025-01-30"
    string description;  // e.g., "Doctor's appointment"
};

// Function to display all scheduled appointments
void displayAppointments(const vector<Appointment>& appointments) {
    cout << "\n--- Scheduled Appointments ---\n";
    if (appointments.empty()) {
        cout << "No appointments scheduled.\n";
        return;
    }

    for (const auto& appointment : appointments) {
        cout << "Date: " << appointment.date << " | Description: " << appointment.description << "\n";
    }
}

int main() {
    vector<Appointment> appointments;  // Store multiple appointments
    char choice;

    cout << "Welcome to the Simple Appointment Scheduler!\n";

    do {
        // Get user input for a new appointment
        Appointment newAppointment;
        cout << "\nEnter the date of the appointment (YYYY-MM-DD): ";
        cin >> newAppointment.date;
        cin.ignore();  // Ignore newline left in buffer

        cout << "Enter the description of the appointment: ";
        getline(cin, newAppointment.description);  // Get full input including spaces

        // Store the new appointment
        appointments.push_back(newAppointment);
        cout << "Appointment added successfully!\n";

        // Ask the user if they want to add more appointments
        cout << "Would you like to add another appointment? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Display all stored appointments
    displayAppointments(appointments);

    return 0;
}