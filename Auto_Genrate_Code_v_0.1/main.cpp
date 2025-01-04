#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
// Clear the console screen (optional and platform-specific)
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    // Check if the required filename argument is passed
    if (argc < 2)
    {
        cerr << "Usage: " << argv[0] << " <output_filename>" << endl;
        return EXIT_FAILURE;
    }

    char answer;             // Variable to store user's response
    vector<string> included; // Vector to store additional library names

    cout << "Do you want to add more libraries? (Y/N): ";
    cin >> answer;

    while (answer == 'Y' || answer == 'y')
    {
        string lib_Name;
        cout << "Enter the library name (without <>): ";
        cin >> lib_Name;

        // Add library to the list
        included.push_back(lib_Name);

        cout << lib_Name << " included successfully!\n";
        cout << "Do you want to add more libraries? (Y/N): ";
        cin >> answer;
    }

    string FileName = argv[1]; // Name of the file to generate

    // Open the file for writing
    ofstream File(FileName, ios::out);
    if (!File)
    {
        cerr << "Error: Could not open file '" << FileName << "' for writing." << endl;
        return EXIT_FAILURE;
    }

    // Write default includes
    File << "#include <iostream>\n";

    // Write additional includes if provided
    for (const string &lib : included)
    {
        File << "#include <" << lib << ">\n";
    }

    // Write the rest of the file
    File << "using namespace std;\n\n";
    File << "int main()\n{\n";
    File << "    // Your code here\n";
    File << "    return EXIT_SUCCESS;\n";
    File << "}\n";

    File.close();
    cout << "File '" << FileName << "' generated successfully!\n" << endl;

    return EXIT_SUCCESS;
}
