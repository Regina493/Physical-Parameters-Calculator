# BMI Calculation Utility


This application is a C++ based console utility designed for the calculation and automated analysis of human physical health indicators, specifically the Body Mass Index (BMI).

## Core Functionalities
* BMI Calculation: The algorithm computes the Body Mass Index based on user-provided metrics: weight (kg), height (m), and age.
* Automated Data Analysis: The system performs a comparative analysis of the results against established medical standards to provide a clinical interpretation (Underweight, Normal, or Overweight).
* Data Validation Protocols: Implementation of input verification to ensure data integrity. The system flags physiological anomalies (e.g., height values outside the 50–250 cm range) and non-numeric input errors.

---

## 3. User Guide
Follow these instructions to calculate your Body Mass Index (BMI) using this utility:

1. Launch the application: Execute the compiled binary file in your terminal or command prompt.
2. Enter Stature: When prompted, input your height in meters. Use a decimal point to separate the fractional part.
   * Example: 1.75
3. Enter Mass: Input your current weight in kilograms.
   * Example: 70
4. Enter Age: Input your current age in years.
5. Review Results: The system will immediately display your calculated BMI, its medical classification, and a personalized health recommendation.

---

## Technical Description
This project serves as a demonstration of clean C++ programming, focusing on computational precision, memory efficiency, and robust input handling.

### Prerequisites
* A C++ compiler (such as GCC, Clang, or MSVC).
* Standard C++ libraries (iostream, string, cmath).

### Build and Execution Instructions
1. Download the main.cpp source file.
2. Compile the source code using a C++ compiler:
   g++ main.cpp -o BMI_Calculator
3. Run the application:
   ```bash
   ./BMI_Calculator


### Technical Implementation Details
* Input Validation: The application includes logic to identify and flag unrealistic physiological inputs, ensuring the reliability of the output and preventing software errors from incorrect data.
* Precision and Data Types: The utility utilizes double data types for floating-point calculations to maintain high accuracy in health metrics.
* Code Architecture: The program is structured for readability and maintainability, utilizing standard I/O streams and optimized logic to ensure a minimal memory footprint.
