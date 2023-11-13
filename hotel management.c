11.13 10:08 PM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structures for hotel entities
struct Room {
    int roomNumber;
    int capacity;
    float price;
    int isOccupied;
    // Add more room-related attributes as needed
};

struct Guest {
    char name[50];
    int age;
    char address[100];
    int roomNumber;
    // Add more guest-related attributes as needed
};

// Function to book a room
void bookRoom(struct Room rooms[], int roomNumber, struct Guest guest) {
    for (int i = 0; i < totalRooms; i++) {
        if (rooms[i].roomNumber == roomNumber) {
            if (rooms[i].isOccupied == 0) {
                rooms[i].isOccupied = 1;
                guest.roomNumber = roomNumber;
                // Add guest to guest list or handle accordingly
                printf("Room booked successfully for guest %s\n", guest.name);
                return;
            } else {
                printf("Room already occupied\n");
                return;
            }
        }
    }
    printf("Room not found\n");
}

// Function to display available rooms
void displayAvailableRooms(struct Room rooms[], int totalRooms) {
    printf("Available Rooms:\n");
    for (int i = 0; i < totalRooms; i++) {
        if (rooms[i].isOccupied == 0) {
            printf("Room Number: %d, Capacity: %d, Price: %.2f\n", rooms[i].roomNumber, rooms[i].capacity, rooms[i].price);
        }
    }
}

// Function to check out a guest
void checkOut(struct Room rooms[], struct Guest guests[], int roomNumber, int totalRooms, int totalGuests) {
    for (int i = 0; i < totalRooms; i++) {
        if (rooms[i].roomNumber == roomNumber) {
            rooms[i].isOccupied = 0;
            for (int j = 0; j < totalGuests; j++) {
                if (guests[j].roomNumber == roomNumber) {
                    // Perform check-out operations like billing, etc.
                    guests[j].roomNumber = -1;
                    printf("Guest checked out successfully from room %d\n", roomNumber);
                    return;
                }
            }
        }
    }
    printf("Room not found or no guest in the room\n");
}

// Add more functions for check-in, billing, room status, guest details, etc.

int main() {
    struct Room rooms[100]; // Assuming 100 rooms in the hotel
    int totalRooms = 100;
    // Initialize rooms with default values or read from a file

    struct Guest guests[100]; // Assuming a maximum of 100 guests 
    int totalGuests = 0;

    // Your main program loop goes here
    // Use functions like bookRoom, displayAvailableRooms, checkOut, etc.

    return 0;
}

