# 100 Days of Code Challenge

[!\[C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C\_(programming\_language))
[!\[License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

This repository contains solutions to 150 C programming problems completed as part of a 100-day coding consistency challenge. The problems cover fundamental concepts from basic I/O to advanced data structures and algorithms.

## 📋 Table of Contents

* [About](#about)
* [Structure](#structure)
* [Topics Covered](#topics-covered)
* [Question List](#question-list)

  * [Basic Programs (Q1-10)](#basic-programs-q1-10)
  * [Conditional Statements (Q11-20)](#conditional-statements-q11-20)
  * [Loops \& Control Flow (Q21-30)](#loops--control-flow-q21-30)
  * [Number Properties (Q31-40)](#number-properties-q31-40)
  * [Patterns \& Series (Q41-50)](#patterns--series-q41-50)
  * [Arrays - Basic (Q51-60)](#arrays---basic-q51-60)
  * [Arrays - Advanced (Q61-70)](#arrays---advanced-q61-70)
  * [2D Arrays/Matrices (Q71-80)](#2d-arraysmatrices-q71-80)
  * [String Operations (Q81-100)](#string-operations-q81-100)
  * [Advanced Algorithms (Q101-120)](#advanced-algorithms-q101-120)
  * [File I/O (Q121-130)](#file-io-q121-130)
  * [Enumerations (Q131-140)](#enumerations-q131-140)
  * [Structures (Q141-150)](#structures-q141-150)

* [How to Run](#how-to-run)
* [Contributing](#contributing)
* [License](#license)

## 🎯 About

This challenge focuses on building strong foundations in C programming through daily practice. Each day features a unique problem that progressively increases in complexity, covering:

* Basic input/output operations
* Conditional statements and loops
* Arrays and strings
* File handling
* Data structures (enums, structs)
* Algorithmic problem-solving

## 📁 Structure

Solutions are organized in folders containing 10 questions each:

```
100\\\_days\\\_of\\\_code/
├── q\\\_1\\\_to\\\_q\\\_10/
├── q\\\_11\\\_to\\\_q\\\_20/
├── ...
└── q\\\_141\\\_to\\\_q\\\_150/
```

Each file is named as `q{number}\\\_{description}.c` for easy identification.

## 🏷️ Topics Covered

* **Basic Programs (Q1-10)**: Arithmetic operations, area calculations, temperature conversion
* **Conditional Statements (Q11-20)**: Even/odd checks, leap year, character classification
* **Loops \& Control Flow (Q21-30)**: Factorials, series, electricity bills
* **Number Properties (Q31-40)**: Armstrong numbers, prime checks, HCF/LCM
* **Patterns \& Series (Q41-50)**: Printing patterns, series summation
* **Arrays - Basic (Q51-60)**: 1D array operations, searching, sorting
* **Arrays - Advanced (Q61-70)**: Binary search, insertion, rotation
* **2D Arrays/Matrices (Q71-80)**: Matrix operations, transpose, symmetry
* **String Operations (Q81-100)**: String manipulation, anagrams, file I/O
* **Advanced Algorithms (Q101-120)**: Sliding window, Kadane's algorithm
* **File I/O (Q121-130)**: Reading/writing files, text processing
* **Enumerations (Q131-140)**: Enum usage, traffic lights, user roles
* **Structures (Q141-150)**: Struct definitions, nested structs, file storage

## 📝 Question List

### Basic Programs (Q1-10)

These programs introduce basic input/output and simple calculations.

|Q#|Description|File|
|-|-|-|
|1|Input two numbers and display their sum (integer only)|[q1\_sum.c](q_1_to_q_10/q1_sum.c)|
|2|Input two numbers and display sum, difference, product, and quotient (integer only)|[q2\_arithmetic.c](q_1_to_q_10/q2_arithmetic.c)|
|3|Calculate the area and perimeter of a rectangle given length and breadth (integer only)|[q3\_rectangle.c](q_1_to_q_10/q3_rectangle.c)|
|4|Calculate the area and circumference of a circle given its radius (real numbers)|[q4\_circle.c](q_1_to_q_10/q4_circle.c)|
|5|Convert temperature from Celsius to Fahrenheit (real numbers)|[q5\_temparature.c](q_1_to_q_10/q5_temparature.c)|
|6|Swap two numbers using a third variable (integer only)|[q6\_swap.c](q_1_to_q_10/q6_swap.c)|
|7|Swap two numbers without using a third variable (integer only)|[q7\_swap2.c](q_1_to_q_10/q7_swap2.c)|
|8|Find and display the sum of the first n natural numbers|[q8\_summation.c](q_1_to_q_10/q8_summation.c)|
|9|Calculate simple and compound interest for given principal, rate, and time|[q9\_interest.c](q_1_to_q_10/q9_interest.c)|
|10|Input time in seconds and convert to hours:minutes:seconds format|[q10\_time.c](q_1_to_q_10/q10_time.c)|

### Conditional Statements (Q11-20)

Programs using if-else and switch statements for decision making.

|Q#|Description|File|
|-|-|-|
|11|Input an integer and check if it is even or odd|[q11\_even\_odd.c](q_11_to_q_20/q11_even_odd.c)|
|12|Check if an integer is positive, negative, or zero using nested if-else|[q12\_sign.c](q_11_to_q_20/q12_sign.c)|
|13|Input a year and check if it is a leap year|[q13\_leap\_year.c](q_11_to_q_20/q13_leap_year.c)|
|14|Input a character and check if it is a vowel or consonant|[q14\_alphabet.c](q_11_to_q_20/q14_alphabet.c)|
|15|Input a character and check if it is uppercase, lowercase, digit, or special character|[q15\_check.c](q_11_to_q_20/q15_check.c)|
|16|Input three numbers and find the largest using if-else|[q16\_max.c](q_11_to_q_20/q16_max.c)|
|17|Solve quadratic equation (find roots)|[q17\_quadratic.c](q_11_to_q_20/q17_quadratic.c)|
|18|Assign grades based on percentage input|[q18\_grade.c](q_11_to_q_20/q18_grade.c)|
|19|Classify a triangle as Equilateral, Isosceles, or Scalene|[q19\_triangle.c](q_11_to_q_20/q19_triangle.c)|
|20|Display the day of the week based on a number (1-7) using switch-case|[q20\_week.c](q_11_to_q_20/q20_week.c)|

### Loops \& Control Flow (Q21-30)

Programs demonstrating loops and basic logic operations.

|Q#|Description|File|
|-|-|-|
|21|Display month name and number of days using switch-case|[q21\_month.c](q_21_to_q_30/q21_month.c)|
|22|Create a simple calculator with addition, subtraction, multiplication, division, and modulus|[q22\_calculator.c](q_21_to_q_30/q22_calculator.c)|
|23|Calculate electricity bill based on units consumed|[q23\_electricity.c](q_21_to_q_30/q23_electricity.c)|
|24|Find the factorial of a number|[q24\_factorial.c](q_21_to_q_30/q24_factorial.c)|
|25|Calculate library fine based on number of late days|[q25\_library.c](q_21_to_q_30/q25_library.c)|
|26|Find the product of first n even numbers|[q26\_n\_even.c](q_21_to_q_30/q26_n_even.c)|
|27|Print numbers from 1 to n|[q27\_n\_number.c](q_21_to_q_30/q27_n_number.c)|
|28|Find the sum of first n odd numbers|[q28\_n\_odd.c](q_21_to_q_30/q28_n_odd.c)|
|29|Reverse a number using do-while loop|[q29\_reverse.c](q_21_to_q_30/q29_reverse.c)|
|30|Find profit or loss percentage given cost price and selling price|[q30\_sales.c](q_21_to_q_30/q30_sales.c)|

### Number Properties (Q31-40)

Programs checking various mathematical properties of numbers.

|Q#|Description|File|
|-|-|-|
|31|Check if a number is an Armstrong number|[q31\_armstrong.c](q_31_to_q_40/q31_armstrong.c)|
|32|Convert a decimal number to binary|[q32\_binary.c](q_31_to_q_40/q32_binary.c)|
|33|Find the complement of a binary number|[q33\_co\_binary.c](q_31_to_q_40/q33_co_binary.c)|
|34|Find all factors of a number|[q34\_factors.c](q_31_to_q_40/q34_factors.c)|
|35|Find the HCF (Highest Common Factor) of two numbers|[q35\_hcf.c](q_31_to_q_40/q35_hcf.c)|
|36|Find the LCM (Least Common Multiple) of two numbers|[q36\_lcm.c](q_31_to_q_40/q36_lcm.c)|
|37|Find the product of odd digits in a number|[q37\_odd\_pro.c](q_31_to_q_40/q37_odd_pro.c)|
|38|Check if a number is a palindrome|[q38\_palindrome.c](q_31_to_q_40/q38_palindrome.c)|
|39|Check if a number is prime|[q39\_prime.c](q_31_to_q_40/q39_prime.c)|
|40|Find the sum of unit digits (sum of digits) of a number|[q40\_u\_sum.c](q_31_to_q_40/q40_u_sum.c)|

### Patterns \& Series (Q41-50)

Programs for printing patterns and calculating mathematical series.

|Q#|Description|File|
|-|-|-|
|41|Swap the first and last digit of a number|[q41\_FL\_swap.c](q_41_to_q_50/q41_FL_swap.c)|
|42|Print a triangular pattern of numbers (1, 12, 123, 1234, 12345)|[q42\_pattern1.c](q_41_to_q_50/q42_pattern1.c)|
|43|Print a right-angled triangle pattern of asterisks|[q43\_pattern2.c](q_41_to_q_50/q43_pattern2.c)|
|44|Print an inverted right-angled triangle pattern of asterisks|[q44\_pattern3.c](q_41_to_q_50/q44_pattern3.c)|
|45|Print a number pyramid pattern (5, 45, 345, 2345, 12345)|[q45\_pattern4.c](q_41_to_q_50/q45_pattern4.c)|
|46|Print a diamond and reverse pattern of asterisks|[q46\_pattern5.c](q_41_to_q_50/q46_pattern5.c)|
|47|Check if a number is a perfect number|[q47\_perfect.c](q_41_to_q_50/q47_perfect.c)|
|48|Find the sum of series 1 + 3/4 + 5/6 + 7/8 + ... up to n terms|[q48\_series1.c](q_41_to_q_50/q48_series1.c)|
|49|Find the sum of series 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms|[q49\_series2.c](q_41_to_q_50/q49_series2.c)|
|50|Check if a number is a strong number|[q50\_strong.c](q_41_to_q_50/q50_strong.c)|

### Arrays - Basic (Q51-60)

Introduction to one-dimensional arrays and basic operations.

|Q#|Description|File|
|-|-|-|
|51|Read and print elements of a one-dimensional array|[q51\_1d\_array.c](q_51_to_q_60/q51_1d_array.c)|
|52|Find the maximum and minimum element in an array|[q52\_comp\_array.c](q_51_to_q_60/q52_comp_array.c)|
|53|Count even and odd numbers in an array|[q53\_eo\_array.c](q_51_to_q_60/q53_eo_array.c)|
|54|Print a diamond pattern with varying rows|[q54\_pattern6.c](q_51_to_q_60/q54_pattern6.c)|
|55|Print an inverted diamond pattern|[q55\_pattern7.c](q_51_to_q_60/q55_pattern7.c)|
|56|Print a complex diamond pattern (expanding then contracting)|[q56\_pattern8.c](q_51_to_q_60/q56_pattern8.c)|
|57|Print a centered diamond pattern of asterisks|[q57\_pattern9.c](q_51_to_q_60/q57_pattern9.c)|
|58|Print all prime numbers from 1 to n|[q58\_prime\_fa.c](q_51_to_q_60/q58_prime_fa.c)|
|59|Count positive, negative, and zero elements in an array|[q59\_sign\_array.c](q_51_to_q_60/q59_sign_array.c)|
|60|Find the sum of array elements|[q60\_sum\_array.c](q_51_to_q_60/q60_sum_array.c)|

### Arrays - Advanced (Q61-70)

Advanced array operations including searching and sorting algorithms.

|Q#|Description|File|
|-|-|-|
|61|Search for an element in an array using binary search|[q61\_binary\_array.c](q_61_to_q_70/q61_binary_array.c)|
|62|Delete an element from an array|[q62\_delete\_array.c](q_61_to_q_70/q62_delete_array.c)|
|63|Search for an element using linear search and return its index|[q63\_index\_array.c](q_61_to_q_70/q63_index_array.c)|
|64|Insert an element in a sorted array at the appropriate position|[q64\_insert\_array.c](q_61_to_q_70/q64_insert_array.c)|
|65|Merge two arrays|[q65\_merge\_array.c](q_61_to_q_70/q65_merge_array.c)|
|66|Insert an element in an array at a given position|[q66\_position\_array.c](q_61_to_q_70/q66_position_array.c)|
|67|Reverse an array without taking extra space|[q67\_reverse\_array.c](q_61_to_q_70/q67_reverse_array.c)|
|68|Rotate an array to the right by k positions|[q68\_rotate\_array.c](q_61_to_q_70/q68_rotate_array.c)|
|69|Find the second largest element in an array|[q69\_seclargest\_array.c](q_61_to_q_70/q69_seclargest_array.c)|
|70|Find the digit that occurs the most times in an array of integers|[q70\_tdigits\_array.c](q_61_to_q_70/q70_tdigits_array.c)|

### 2D Arrays/Matrices (Q71-80)

Working with two-dimensional arrays and matrix operations.

|Q#|Description|File|
|-|-|-|
|71|Read and print a matrix|[q71\_2d\_array.c](q_71_to_q_80/q71_2d_array.c)|
|72|Add two matrices|[q72\_add\_2darray.c](q_71_to_q_80/q72_add_2darray.c)|
|73|Find the sum of main diagonal elements for a square matrix|[q73\_dsum\_array.c](q_71_to_q_80/q73_dsum_array.c)|
|74|Check if the diagonal elements of a matrix are distinct|[q74\_ddistinct\_array.c](q_71_to_q_80/q74_ddistinct_array.c)|
|75|Find the sum of all elements in a matrix|[q75\_esum\_array.c](q_71_to_q_80/q75_esum_array.c)|
|76|Multiply two matrices|[q76\_product\_matrix.c](q_71_to_q_80/q76_product_matrix.c)|
|77|Find the sum of each row of a matrix and store in an array|[q77\_rowsum\_array.c](q_71_to_q_80/q77_rowsum_array.c)|
|78|Check if a matrix is symmetric|[q78\_symmetric\_array.c](q_71_to_q_80/q78_symmetric_array.c)|
|79|Find the transpose of a matrix|[q79\_transpose\_array.c](q_71_to_q_80/q79_transpose_array.c)|
|80|Perform diagonal traversal of a matrix|[q80\_traversal\_array.c](q_71_to_q_80/q80_traversal_array.c)|

### String Operations (Q81-100)

String manipulation and text processing programs.

|Q#|Description|File|
|-|-|-|
|81|Count vowels and consonants in a string|[q81\_alphabet\_string.c](q_81_to_q_90/q81_alphabet_string.c)|
|82|Count frequency of a given character in a string|[q82\_frequency\_string.c](q_81_to_q_90/q82_frequency_string.c)|
|83|Replace spaces with hyphens in a string|[q83\_hypens\_String.c](q_81_to_q_90/q83_hypens_String.c)|
|84|Count characters in a string without using built-in length functions|[q84\_length\_string.c](q_81_to_q_90/q84_length_string.c)|
|85|Print each character of a string on a new line|[q85\_line\_String.c](q_81_to_q_90/q85_line_String.c)|
|86|Check if a string is a palindrome|[q86\_palindrome\_string.c](q_81_to_q_90/q86_palindrome_string.c)|
|87|Reverse a string|[q87\_reverse\_string.c](q_81_to_q_90/q87_reverse_string.c)|
|88|Count spaces, digits, and special characters in a string|[q88\_special\_string.c](q_81_to_q_90/q88_special_string.c)|
|89|Toggle case of each character in a string|[q89\_toggle\_string.c](q_81_to_q_90/q89_toggle_string.c)|
|90|Convert lowercase string to uppercase without built-in functions|[q90\_uppercase\_string.c](q_81_to_q_90/q90_uppercase_string.c)|
|91|Check if two strings are anagrams of each other|[q91\_anagrams\_string.c](q_91_to_q_100/q91_anagrams_string.c)|
|92|Change date format from dd/mm/yyyy to dd-Mon-yyyy|[q92\_date\_string.c](q_91_to_q_100/q92_date_string.c)|
|93|Print the initials of a name|[q93\_initials\_string.c](q_91_to_q_100/q93_initials_string.c)|
|94|Remove all vowels from a string|[q94\_remove\_string.c](q_91_to_q_100/q94_remove_string.c)|
|95|Find the first repeating lowercase alphabet in a string|[q95\_repeating\_string.c](q_91_to_q_100/q95_repeating_string.c)|
|96|Check if one string is a rotation of another|[q96\_rotation\_string.c](q_91_to_q_100/q96_rotation_string.c)|
|97|Reverse each word in a sentence without changing word order|[q97\_rsentence\_string.c](q_91_to_q_100/q97_rsentence_string.c)|
|98|Find the longest word in a sentence|[q98\_sentence\_string.c](q_91_to_q_100/q98_sentence_string.c)|
|99|Print all sub-strings of a string|[q99\_sub\_string.c](q_91_to_q_100/q99_sub_string.c)|
|100|Print initials with surname displayed in full|[q100\_surname\_string.c](q_91_to_q_100/q100_surname_string.c)|

### Advanced Algorithms (Q101-120)

Complex algorithmic problems and data structure challenges.

|Q#|Description|File|
|-|-|-|
|101|Find first and last occurrence of target in sorted array|[q101\_occurrence\_array.c](q_101_to_q_110/q101_occurrence_array.c)|
|102|Find index of smallest element >= x (ceiling) in sorted array|[q102\_smallest\_occurrence.c](q_101_to_q_110/q102_smallest_occurrence.c)|
|103|Find pivot index where left sum equals right sum|[q103\_pivot\_index.c](q_101_to_q_110/q103_pivot_index.c)|
|104|Find pivot integer x where sum(1 to x) = sum(x to n)|[q104\_pivot\_integer.c](q_101_to_q_110/q104_pivot_integer.c)|
|105|Find majority element appearing > n/2 times|[q105\_majority\_element.c](q_101_to_q_110/q105_majority_element.c)|
|106|Find next greater element for each array element|[q106\_greater\_element.c](q_101_to_q_110/q106_greater_element.c)|
|107|Find previous greater element for each array element|[q107\_pgreater\_element.c](q_101_to_q_110/q107_pgreater_element.c)|
|108|Find maximum sum of subarrays of size k (sliding window)|[q108\_maximum\_subarray.c](q_101_to_q_110/q108_maximum_subarray.c)|
|109|Find maximum element in each subarray of size k|[q109\_emaximum\_subarray.c](q_101_to_q_110/q109_emaximum_subarray.c)|
|110|Find product of all elements except current element|[q110\_product\_element.c](q_101_to_q_110/q110_product_element.c)|
|111|Find first negative integer in each subarray of size k|[q111\_negative\_subarray.c](q_111_to_q_120/q111_negative_subarray.c)|
|112|Find maximum sum of contiguous subarray using Kadane's algorithm|[q112\_kadanes\_subarray.c](q_111_to_q_120/q112_kadanes_subarray.c)|
|113|Find the kth smallest element in an array|[q113\_nsmallest\_array.c](q_111_to_q_120/q113_nsmallest_array.c)|
|114|Find the repeated element in array (O(n) complexity)|[q114\_repeat\_element.c](q_111_to_q_120/q114_repeat_element.c)|
|115|Determine if two strings are valid anagrams|[q115\_lowercase\_anagrams.c](q_111_to_q_120/q115_lowercase_anagrams.c)|
|116|Find two distinct indices where nums\[i] + nums\[j] = target|[q116\_distinct\_indices.c](q_111_to_q_120/q116_distinct_indices.c)|
|117|Merge two sorted arrays into one sorted array|[q117\_msorted\_array.c](q_111_to_q_120/q117_msorted_array.c)|
|118|Find missing number in array containing integers 0 to n|[q118\_missing\_number.c](q_111_to_q_120/q118_missing_number.c)|
|119|Find length of longest substring without repeating characters|[q119\_longest\_substring.c](q_111_to_q_120/q119_longest_substring.c)|
|120|Convert string to sentence case (capitalize first letter of each word)|[q120\_sentence\_case.c](q_111_to_q_120/q120_sentence_case.c)|

### File I/O (Q121-130)

Programs demonstrating file input/output operations.

|Q#|Description|File|
|-|-|-|
|121|Create text file and write user name/age using fprintf()|[q121\_message\_file.c](q_121_to_q_130/q121_message_file.c)|
|122|Open and read file contents using fgets()|[q122\_info\_file.c](q_121_to_q_130/q122_info_file.c)|
|123|Count characters, words, and lines in a text file|[q123\_count\_file.c](q_121_to_q_130/q123_count_file.c)|
|124|Copy contents from source to destination file using fgetc/fputc|[q124\_copy\_file.c](q_121_to_q_130/q124_copy_file.c)|
|125|Append text to existing file without overwriting|[q125\_append\_file.c](q_121_to_q_130/q125_append_file.c)|
|126|Check if file exists and display contents if it does|[q126\_search\_file.c](q_121_to_q_130/q126_search_file.c)|
|127|Convert text to uppercase and write to output file|[q127\_uppercase\_file.c](q_121_to_q_130/q127_uppercase_file.c)|
|128|Count vowels and consonants in a file|[q128\_alphabet\_file.c](q_121_to_q_130/q128_alphabet_file.c)|
|129|Read integers from file, compute sum and average|[q129\_add\_file.c](q_121_to_q_130/q129_add_file.c)|
|130|Store and read student records using fprintf/fscanf|[q130\_record\_file.c](q_121_to_q_130/q130_record_file.c)|

### Enumerations (Q131-140)

Programs using enumerated types (enums) in C.

|Q#|Description|File|
|-|-|-|
|131|Create enum for days and print each with integer value|[q131\_week\_enum.c](q_131_to_q_140/q131_week_enum.c)|
|132|Enum for traffic lights (RED, YELLOW, GREEN) with actions|[q132\_traffic\_enum.c](q_131_to_q_140/q132_traffic_enum.c)|
|133|Enum for months and print days in each month|[q133\_month\_enum.c](q_131_to_q_140/q133_month_enum.c)|
|134|Enum with SUCCESS, FAILURE, TIMEOUT and print messages|[q134\_message\_enum.c](q_131_to_q_140/q134_message_enum.c)|
|135|Assign explicit enum values starting from 10 and print|[q135\_explicit\_enum.c](q_131_to_q_140/q135_explicit_enum.c)|
|136|Enum for arithmetic operations (ADD, SUBTRACT, MULTIPLY) with switch|[q136\_arithmetic\_enum.c](q_131_to_q_140/q136_arithmetic_enum.c)|
|137|Enum for user roles (ADMIN, USER, GUEST) with messages|[q137\_users\_enum.c](q_131_to_q_140/q137_users_enum.c)|
|138|Print all enum names and integer values using loop|[q138\_integer\_enum.c](q_131_to_q_140/q138_integer_enum.c)|
|139|Show that enums store integers (print enum values)|[q139\_assigned\_enum.c](q_131_to_q_140/q139_assigned_enum.c)|
|140|Struct with enum Gender member and print person's gender|[q140\_gender\_enum.c](q_131_to_q_140/q140_gender_enum.c)|

### Structures (Q141-150)

Programs using structures (structs) for data organization.

|Q#|Description|File|
|-|-|-|
|141|Define Student struct with name, roll\_no, marks - read and print|[q141\_student\_struct.c](q_141_to_q_150/q141_student_struct.c)|
|142|Store details of 5 students in array of structures and print all|[q142\_multiple\_struct.c](q_141_to_q_150/q142_multiple_struct.c)|
|143|Find and print student with highest marks|[q143\_highest\_struct.c](q_141_to_q_150/q143_highest_struct.c)|
|144|Function that accepts struct as parameter and prints members|[q144\_parameter\_struct.c](q_141_to_q_150/q144_parameter_struct.c)|
|145|Return structure containing top student's details from function|[q145\_topper\_struct.c](q_141_to_q_150/q145_topper_struct.c)|
|146|Employee struct with nested Date struct for joining date|[q146\_employee\_struct.c](q_141_to_q_150/q146_employee_struct.c)|
|147|Store employee data in binary file using fwrite/fread|[q147\_rb\_struct.c](q_141_to_q_150/q147_rb_struct.c)|
|148|Check if two structs are identical|[q148\_identical\_struct.c](q_141_to_q_150/q148_identical_struct.c)|
|149|Use malloc() to allocate structure memory dynamically|[q149\_dynamic\_struct.c](q_141_to_q_150/q149_dynamic_struct.c)|
|150|Use pointer to struct to modify/display data with -> operator|[q150\_modify\_struct.c](q_141_to_q_150/q150_modify_struct.c)|

## 🚀 How to Run

### Prerequisites

* GCC compiler installed
* Basic knowledge of command line

### Compilation

```bash
gcc filename.c -o output
```

### Execution

```bash
./output
```

For file I/O programs (Q121-130), ensure input files exist in the same directory.

## 🤝 Contributing

Feel free to:

* Report bugs
* Suggest improvements
* Add more problems
* Optimize existing solutions

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
