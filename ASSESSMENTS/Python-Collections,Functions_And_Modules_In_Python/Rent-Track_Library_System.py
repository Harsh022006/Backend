# RentTrack - Library Book Rental System
# Author: Harsh
# Modules: Python Fundamentals + Collections + Functions

from datetime import datetime

# Global list to store all rentals
rentals = []

# Fixed late fee per day
LATE_FEE_PER_DAY = 10

# Function to add a new rental
def rent_book():
    print("\n--- New Book Rental ---")
    customer = input("Enter Customer Name: ").strip()
    book = input("Enter Book Title: ").strip()
    rent_date = input("Enter Rent Date (DD-MM-YYYY): ").strip()
    return_date = input("Enter Expected Return Date (DD-MM-YYYY): ").strip()

    rental = {
        "customer": customer,
        "book": book,
        "rent_date": rent_date,
        "return_date": return_date,
        "returned": False
    }
    rentals.append(rental)
    print(f"\nBook '{book}' rented successfully to {customer}!")

# Function to return a rented book
def return_book():
    print("\n--- Book Return ---")
    customer = input("Enter Customer Name: ").strip()
    book = input("Enter Book Title: ").strip()

    # Search rental record
    for rental in rentals:
        if rental["customer"] == customer and rental["book"] == book and not rental["returned"]:
            actual_return = input("Enter Actual Return Date (DD-MM-YYYY): ").strip()

            # Calculate late fee
            expected = datetime.strptime(rental["return_date"], "%d-%m-%Y")
            actual = datetime.strptime(actual_return, "%d-%m-%Y")

            days_late = (actual - expected).days
            late_fee = LATE_FEE_PER_DAY * days_late if days_late > 0 else 0

            # Mark as returned
            rental["returned"] = True
            rental["actual_return"] = actual_return
            rental["late_fee"] = late_fee

            print("\n--- Return Receipt ---")
            print(f"Customer Name : {customer}")
            print(f"Book Title     : {book}")
            print(f"Expected Date  : {rental['return_date']}")
            print(f"Actual Date    : {actual_return}")
            print(f"Late Fee       : ₹{late_fee}")
            print("---------------------------")
            return

    print(" No active rental found for this customer/book!")

# Function to show all rentals
def show_summary():
    print("\n--- Rental Summary ---")
    if not rentals:
        print("No rentals found.")
        return

    for r in rentals:
        status = "Returned" if r.get("returned") else "Not Returned"
        print(f"Customer: {r['customer']} | Book: {r['book']} | Status: {status}")

# Main menu loop
def main():
    while True:
        print("\n==== RentTrack Library System ====")
        print("1. Rent a Book")
        print("2. Return a Book")
        print("3. Show All Rentals")
        print("4. Exit")

        choice = input("Enter your choice (1-4): ")

        if choice == "1":
            rent_book()
        elif choice == "2":
            return_book()
        elif choice == "3":
            show_summary()
        elif choice == "4":
            print("Exiting RentTrack... Goodbye!")
            break
        else:
            print("Invalid choice! Please try again.")

# Run the program
main()
