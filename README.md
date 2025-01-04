# C++ File Generator

## Overview
The **C++ File Generator** is a command-line tool designed to automate the creation of starter `.cpp` files. It streamlines the process of setting up a new C++ program by allowing users to specify the output file name and include additional libraries interactively. The program generates a clean and organized boilerplate file with a basic `main()` function template.

## Features
- **Command-Line Arguments**: Specify the output file name directly via command-line arguments.
- **Interactive Library Inclusion**: Add custom libraries to the generated file through user prompts.
- **Boilerplate Code**: Automatically includes `#include <iostream>` and a basic `main()` function template.
- **Cross-Platform Compatibility**: Uses platform-specific commands for clearing the console.
- **Error Handling**: Handles missing arguments and file creation errors gracefully.

## Usage
1. **Compile the Program**
   Use a C++ compiler to build the executable:
   ```bash
   g++ -o cpp_generator cpp_generator.cpp
   ```

2. **Run the Program**
   Provide the output file name as an argument:
   ```bash
   ./cpp_generator output_file.cpp
   ```

3. **Interactive Prompts**
   - Follow the prompts to add additional libraries (optional).
   - The program generates the specified `.cpp` file with the chosen libraries.

## Example
**Input:**
```bash
./cpp_generator my_program.cpp
```

**Interactive Prompts:**
```
do you want to add more libraries? (Y/N): Y
enter the library name (without <>): vector
vector included successfully!
do you want to add more libraries? (Y/N): N
```

**Generated File (`my_program.cpp`):**
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code here
    return EXIT_SUCCESS;
}
```

## Requirements
- A C++ compiler (e.g., GCC, Clang).
- Compatible with UNIX-like systems and Windows.

## Contributing
Contributions are welcome! Feel free to open an issue or submit a pull request if you have ideas for improvement or bug fixes.

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.

## Copyright
&copy; 2025 Ahmed Benhamma

