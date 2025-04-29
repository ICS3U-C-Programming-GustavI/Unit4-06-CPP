// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 14, 2025
// This program asks executes a for loop for RGB selections.

#include <iostream>

int main() {
    // Loop through red, green, and blue values in steps of 85
    for (int r = 0; r <= 255; r += 85) {   // Red
        for (int g = 0; g <= 255; g += 85) {   // Green
            for (int b = 0; b <= 255; b += 85) {   // Blue
                // Print the RGB value with the corresponding text color
                std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m"
                          << "RGB(" << r << ", " << g << ", " << b << ")"
                          << "\033[0m" << std::endl;
            }
        }
    }

    return 0;
}
