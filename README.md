
# Physical Parameters Calculator (BMI Edition)

## Abstract
This application is a C++ based console utility designed for the calculation and automated analysis of human physical health indicators, specifically the Body Mass Index (BMI).

## Core Functionalities
* *BMI Calculation:* The algorithm computes the Body Mass Index based on user-provided metrics: weight (kg), height (m), and age.
* *Automated Data Analysis:* The system performs a comparative analysis of the results against established medical standards to provide a clinical interpretation (Underweight, Normal, or Overweight).
* *Data Validation Protocols:* Implementation of input verification to ensure data integrity. The system flags physiological anomalies (e.g., height values outside the 50вЂ“250 cm range) and non-numeric input errors.
* *Numerical Precision:* Utilization of the double data type ensures high-precision floating-point calculations for scientific accuracy.

## Operational Instructions
1. *Stature Input:* Enter height in meters using a decimal point (e.g., 1.75).
2. *Mass Input:* Enter body weight in kilograms.
3. *Age Specification:* Provide the chronological age of the subject.
4. *Output Generation:* Review the calculated index and the subsequent personalized physiological recommendation.

## Technical Specifications
* *Programming Language:* C++
* *Standard Libraries:* <iostream> (Standard Input/Output Streams Library)
* *Error Handling:* Implemented via conditional logic (if-else structures) and iterative loops to ensure robust user interaction and data re-entry.

---
This project was developed for educational purposes to demonstrate the application of logical operators and data validation techniques in C++.