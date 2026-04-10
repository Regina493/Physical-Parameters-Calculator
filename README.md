# BMI Calculation Utility

A professional C++ console application designed for high-precision Body Mass Index (BMI) calculation, featuring robust input handling and a user-friendly interface.

---

## ## Technical Description
The utility provides a continuous calculation loop, allowing users to process multiple metrics in one session. It includes logic to identify unrealistic physiological data and provides a safe exit mechanism to prevent software errors.

### ### Prerequisites
*   *A C++ compiler* (such as GCC, Clang, or MSVC).
*   *Standard C++ libraries* (iostream, string, cmath, iomanip).

### ### Build and Execution Instructions
1.  *Compile* the source code:
    bash
    g++ main.cpp -o BMI_Calculator
    
2.  *Run* the application:
    bash
    ./BMI…
# BMI Calculation Utility

A professional C++ console application designed for high-precision Body Mass Index (BMI) calculation, featuring robust input handling and UTF-8 support.

---

## Technical Specifications

*   Programming Language: C++
*   Character Encoding: UTF-8 (via SetConsoleOutputCP/SetConsoleCP 65001)
*   Data Handling: Uses double-precision floating-point variables for all calculations.
*   Input Validation: Custom getSafeDouble function ensures only positive numeric values are processed.
*   Standard Libraries: iostream, string, limits, iomanip, cmath.

---

## Build and Execution Instructions

1.  Compile the source code:
    bash
    g++ main.cpp -o BMI_Calculator
    

2.  Run the application:
    bash
    ./BMI_Calculator
    

---

## User Manual

### Data Entry
Follow the on-screen prompts to enter the required information:
1.  Enter your Name (supports spaces and UTF-8 characters).
2.  Enter your Weight (in kilograms).
3.  Enter your Height (in meters).

### BMI Classification Logic
The program automatically categorizes your result:
*   Underweight: BMI < 18.5
*   Normal weight: 18.5 <= BMI < 25.0
*   Overweight: 25.0 <= BMI < 30.0
*   Obesity: BMI >= 30.0

### Program Termination
The application runs in a continuous loop for convenience. To exit the program, type 'exit' or 'выход' when prompted for the user name. This will safely break the loop and terminate the process.