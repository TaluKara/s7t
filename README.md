### `s7t.h` Library Documentation

The `s7t.h` library provides a set of input functions for different data types with robust error handling. These functions prompt the user for input and validate it, ensuring the input matches the expected data type. If an invalid input is provided, the user is prompted again until a valid input is received.

#### Functions:

- **`int inpi(const std::string& prompt)`**
  - Prompts the user for an integer.
  - Parameters:
    - `prompt`: A `std::string` that contains the message displayed to the user.
  - Returns:
    - An `int` value entered by the user.
  - Example Usage:
    ```cpp
    int age = inpi("Enter your age: ");
    ```

- **`double inpd(const std::string& prompt)`**
  - Prompts the user for a double-precision floating-point number.
  - Parameters:
    - `prompt`: A `std::string` that contains the message displayed to the user.
  - Returns:
    - A `double` value entered by the user.
  - Example Usage:
    ```cpp
    double weight = inpd("Enter your weight: ");
    ```

- **`float inpf(const std::string& prompt)`**
  - Prompts the user for a single-precision floating-point number.
  - Parameters:
    - `prompt`: A `std::string` that contains the message displayed to the user.
  - Returns:
    - A `float` value entered by the user.
  - Example Usage:
    ```cpp
    float height = inpf("Enter your height: ");
    ```

- **`long inpl(const std::string& prompt)`**
  - Prompts the user for a long integer.
  - Parameters:
    - `prompt`: A `std::string` that contains the message displayed to the user.
  - Returns:
    - A `long` value entered by the user.
  - Example Usage:
    ```cpp
    long distance = inpl("Enter the distance: ");
    ```

- **`std::string inps(const std::string& prompt)`**
  - Prompts the user for a string.
  - Parameters:
    - `prompt`: A `std::string` that contains the message displayed to the user.
  - Returns:
    - A `std::string` value entered by the user.
  - Example Usage:
    ```cpp
    std::string name = inps("Enter your name: ");
    ```

- **`char inpc(const std::string& prompt)`**
  - Prompts the user for a single character.
  - Parameters:
    - `prompt`: A `std::string` that contains the message displayed to the user.
  - Returns:
    - A `char` value entered by the user.
  - Example Usage:
    ```cpp
    char initial = inpc("Enter your initial: ");
    ```

- **`int opt(std::initializer_list<std::string> options)`**
  - Displays a menu of options and prompts the user to choose one.
  - Parameters:
    - `options`: An `std::initializer_list<std::string>` containing the list of option strings.
  - Returns:
    - An `int` representing the index of the chosen option (1-based index).
  - Error Handling:
    - If the user enters a non-integer or an integer outside the range of options, they are prompted again.
  - Example Usage:
    ```cpp
    int choice = opt({"Option 1", "Option 2", "Option 3"});
    ```

#### Error Handling:

Each input function uses `std::istringstream` to convert the string input to the desired data type. If the conversion fails or additional characters are present after the expected input, an error message is printed, and the user is prompted to enter the data again. This loop continues until a valid input is received. The `opt` function also checks if the user's choice is within the range of provided options and prompts the user until a valid choice is made.

### Notes:

- For `char` inputs, the function ensures only a single character is entered.
- For `std::string` inputs, the entire line is accepted, including spaces.
- The functions discard any extra input or characters after the desired input for non-string types.
