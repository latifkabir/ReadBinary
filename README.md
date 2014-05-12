ReadBinary
==========

1. The ReadBinary class can read binary data produced by Data Acquisition system and give you the corresponding decimal value which is the very first step of any kind of analysis done in Physics or other fields. 

2. How To Use
  ------------
In your your analysis script --
Include the header called ReadBinary.h 
Define an ReadBinary object with the binary file as argument in your analysis. 
Call GetValue member function to get the corresponding vale.
GetVale can take two arguments : i. The ADC channel number ii. The entry number.
Write codes for what ever analysis or plotting you want to do in C or C++.
Save the script as .cpp file in the same directory.
From the directory where you have makefile just do: make 
Run the binary "Program" that is produced. 



3. What are the advantages:
   i. Do the analysis in a programmer's style.
   ii. Core analysis (except plotting) independent of ROOT.
   iii. Better stability and error message (since independent of ROOT).
   iv. Can be integrated to any other library or ROOT class easily.
 
4. To run the example(scan.cpp) included 
    From the directory where you have Makefile do:`make`
    Run the executable `scan` 
    Enter the channel number,starting point and number of entries to be printed
    This will print the values for the desired entries
