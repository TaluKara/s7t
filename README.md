### `s7t.h` Library Documentation

The `s7t.h` library offers a collection of robust input functions for various data types, ensuring error-free user interaction. These functions prompt users for input, validate it, and loop until valid input is provided, enhancing the reliability of user input handling.

#### Functions:

- **`int inpi(const std::string& prompt)`**
  - Prompts for an integer input.
  - **Parameters:** `prompt` (String): Message displayed to the user.
  - **Returns:** User-input integer.
  - **Example Usage:** `int age = inpi("Enter your age: ");`

- **`double inpd(const std::string& prompt)`**
  - Prompts for a double input.
  - **Parameters:** `prompt` (String): Message displayed to the user.
  - **Returns:** User-input double.
  - **Example Usage:** `double weight = inpd("Enter your weight: ");`

- **`float inpf(const std::string& prompt)`**
  - Prompts for a float input.
  - **Parameters:** `prompt` (String): Message displayed to the user.
  - **Returns:** User-input float.
  - **Example Usage:** `float height = inpf("Enter your height: ");`

- **`long inpl(const std::string& prompt)`**
  - Prompts for a long integer input.
  - **Parameters:** `prompt` (String): Message displayed to the user.
  - **Returns:** User-input long integer.
  - **Example Usage:** `long distance = inpl("Enter the distance: ");`

- **`std::string inps(const std::string& prompt)`**
  - Prompts for a string input.
  - **Parameters:** `prompt` (String): Message displayed to the user.
  - **Returns:** User-input string.
  - **Example Usage:** `std::string name = inps("Enter your name: ");`

- **`char inpc(const std::string& prompt)`**
  - Prompts for a single character input.
  - **Parameters:** `prompt` (String): Message displayed to the user.
  - **Returns:** User-input character.
  - **Example Usage:** `char initial = inpc("Enter your initial: ");`

- **`int opt(std::initializer_list<std::string> options)`**
  - Displays a menu of options and prompts the user to choose one.
  - **Parameters:** `options` (Initializer List of Strings): List of option strings.
  - **Returns:** Index of the chosen option (1-based index).
  - **Example Usage:** `int choice = opt({"Option 1", "Option 2", "Option 3"});`
 
    Certainly, let's document all the additional features of the `s7t.h` library:

- **`upper(const std::string& input)`**
   - Converts the input string to uppercase and returns it.
   - **Parameters:** `input` (String): The string to be converted to uppercase.
   - **Returns:** Uppercase version of the input string.
   - **Example Usage:** `std::string nameUpper = upper("john");`

- **`lower(const std::string& input)`**
   - Converts the input string to lowercase and returns it.
   - **Parameters:** `input` (String): The string to be converted to lowercase.
   - **Returns:** Lowercase version of the input string.
   - **Example Usage:** `std::string nameLower = lower("JOHN");`

- **`factorial(int n)`**
   - Calculates the factorial of a non-negative integer n and returns the result.
   - **Parameters:** `n` (Integer): The number to calculate the factorial of.
   - **Returns:** Factorial of n.
   - **Example Usage:** `unsigned long long fact = factorial(5);`

- **`loopa(int n, const std::function<void()>& func)`**
   - Executes a given function n times in a loop.
   - **Parameters:** 
     - `n` (Integer): Number of times to execute the function.
     - `func` (Function): The function to be executed.
   - **Example Usage:** 
     ```cpp
     loopa(3, [](){
         std::cout << "Hello, World!" << std::endl;
     });
     ```

- **`loopb(int n, const std::function<void(int)>& func)`**
   - Executes a given function with an integer parameter n times in a loop.
   - **Parameters:** 
     - `n` (Integer): Number of times to execute the function.
     - `func` (Function): The function to be executed, which takes an integer parameter.
   - **Example Usage:** 
     ```cpp
     loopb(5, [](int i){
         std::cout << "Iteration: " << i + 1 << std::endl;
     });
     ```

- **`createFile(const std::string& path)`**
   - Creates a new file with the specified path.
   - **Parameters:** `path` (String): The path of the file to be created.
   - **Example Usage:** `createFile("example.txt");`

- **`writeFile(const std::string& path, const std::string& content)`**
   - Appends the provided content to the file specified by the path.
   - **Parameters:** 
     - `path` (String): The path of the file to write to.
     - `content` (String): The content to append to the file.
   - **Example Usage:** `writeFile("example.txt", "Hello, World!\n");`

- **`readFile(const std::string& path)`**
   - Reads the content of the file specified by the path and returns it as a string.
   - **Parameters:** `path` (String): The path of the file to read.
   - **Returns:** Content of the file as a string.
   - **Example Usage:** `std::string content = readFile("example.txt");`



#### Error Handling:

All input functions utilize `std::istringstream` for conversion and continuously prompt users until valid input is provided. The `opt` function ensures the user's choice falls within the range of options.

#### Notes:

- For character inputs, only single characters are accepted.
- For string inputs, entire lines are accepted, including spaces.
- Additional input characters beyond the expected input are discarded for non-string types.
