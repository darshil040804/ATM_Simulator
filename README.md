Project Title: **ATM SIMULATOR**

**Project Description:**

The "ATM SIMULATOR" is a console-based application that simulates the basic functionalities of an Automated Teller Machine (ATM). This project is designed to provide a user-friendly interface for customers to interact with their bank accounts, including checking their balance, withdrawing cash, viewing user details, and updating their mobile number. This project is an example of object-oriented programming and showcases the principles of encapsulation, inheritance, and user input validation.

**Features:**

1. **User Authentication:**
   - To ensure the security of the ATM system, the user is required to provide their account number and Personal Identification Number (PIN) for authentication.

2. **Account Management:**
   - The system allows users to create an account with their account number, name, PIN, initial balance, and mobile number. These details are stored securely within the system.
   - Users can also update their mobile number by providing their old mobile number and specifying the new one.

3. **Balance Inquiry:**
   - Users can check their account balance by selecting the "Check Balance" option from the menu. The system displays their current account balance.

4. **Cash Withdrawal:**
   - Users can withdraw cash from their account by specifying the amount they wish to withdraw. The system checks if the requested amount is within their account balance and dispenses the cash if the conditions are met.

5. **User Details Display:**
   - The system provides an option for users to view their account details, including their account number, name, balance, and mobile number.

6. **Security Measures:**
   - The system includes security measures to protect user data. Users must enter the correct account number and PIN to access their account and perform transactions.
   - Mobile number updates require verification with the old mobile number to prevent unauthorized changes.

7. **Error Handling:**
   - The system includes error handling to manage invalid inputs and ensure a smooth user experience. It provides informative messages to guide users.

**How the Program Works:**

1. **User Authentication:**
   - The program starts by requesting the user's account number and PIN for authentication.
   - If the provided account number and PIN match the stored data, the user gains access to their account. Otherwise, they receive an error message.

2. **Main Menu:**
   - After successful authentication, the program presents a main menu with various options.
   - Users can choose options such as checking their balance, withdrawing cash, viewing user details, updating their mobile number, or exiting the program.

3. **Balance Inquiry:**
   - When the user selects the "Check Balance" option, the program displays their account balance.

4. **Cash Withdrawal:**
   - If the user selects the "Cash Withdrawal" option, they can specify the amount they want to withdraw.
   - The program checks if the requested amount is valid and within their account balance. If it is, the transaction proceeds, and the balance is updated accordingly.

5. **User Details Display:**
   - Choosing the "Show User Details" option allows the user to view their account details, including account number, name, balance, and mobile number.

6. **Mobile Number Update:**
   - To update their mobile number, the user must provide their old mobile number and specify the new one.
   - The program verifies the old mobile number before updating the information.

7. **Security and Error Handling:**
   - The program incorporates security features to safeguard user data and provides clear error messages in case of invalid inputs or unauthorized access.

**Benefits and Applications:**

The "ATM SIMULATOR" serves as an educational project that can help individuals learn about object-oriented programming concepts, such as classes and encapsulation. Additionally, it demonstrates how to create a console-based user interface and handle user input. While this is a simplified version of an ATM system, it provides a foundation for more complex banking applications.

**Future Enhancements:**

This ATM project can be expanded and enhanced in various ways, including:
- Adding support for multiple user accounts and account creation.
- Implementing deposit functionality.
- Enhancing security with additional authentication methods.
- Creating a graphical user interface (GUI) for a more user-friendly experience.
- Connecting to a real bank database for data storage and retrieval.

**Conclusion:**

The "ATM SIMULATOR" project provides a practical example of a console-based application for simulating basic ATM functionalities. It is a valuable learning resource for aspiring programmers to understand object-oriented programming and develop fundamental skills in C++. With further development, it can serve as a basis for more advanced and real-world banking applications.
