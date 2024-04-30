#include <iostream>
#include <string>

int main() {
    int rows, cols;

    // Prompt user to enter dimensions of the array
    do {
        std::cout << "Enter the number of rows (max 3): ";
        std::cin >> rows;
        if (rows > 3) {
            std::cout << "Dimensions cannot exceed 3. Please try again.\n";
        rows--;}
    } while (rows > 3);

    do {
        std::cout << "Enter the number of columns (max 3): ";
        std::cin >> cols;
        if (cols > 3) {
            std::cout << "Dimensions cannot exceed 3. Please try again.\n";
        rows--;}
    } while (cols > 3);

    // Dynamically allocate memory for the 2D array
    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }

    // Assign values to each element of the array using nested loops
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }

    // Output the elements of the array
    std::cout << "\nArray elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}