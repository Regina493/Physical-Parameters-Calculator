# BMI-Calculator Technical Documentation

This C++ command-line application, titled BMI-Calculator, is a high-precision tool engineered for processing body metrics to calculate the Body Mass Index (BMI). The software architecture is built upon standard libraries—iostream, string, limits, iomanip, and cmath—to ensure robust data handling and support for UTF-8 character encoding during string input. The system implements double-precision floating-point arithmetic with the output strictly formatted to two decimal places using the iomanip library to maintain scientific accuracy. The application includes a specialized validation layer that processes only positive numerical values and is programmed to terminate the session immediately if the user inputs the "exit" command. This project is distributed under the MIT License, allowing for open-source modification and distribution. To compile the source code and initiate the binary, execute the following command sequence in the terminal:

g.c++ mainpp -o BMI_Calculator
./BMI_Calculaor

The first command invokes the compiler to generate the "BMI_Calculator" executable from the "main.cpp" source file, while the second command launches the program for immediate data entry. The application remains active until the user specifies termination by entering "exit" during the input phase.