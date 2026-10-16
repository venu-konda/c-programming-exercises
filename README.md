# C Programming Exercises

Practice programs written in C (plus one in C++) while learning the language.
They were written on [OnlineGDB](https://www.onlinegdb.com/), exported on
16 October 2026 and reorganised here by topic. Every program is a single,
self-contained source file that reads its input from `stdin`.

## Layout

| Folder | Topic | Files |
| --- | --- | ---: |
| [`arrays/`](arrays/) | One-dimensional integer and character arrays, searching, sorting | 12 |
| [`matrices/`](matrices/) | Two-dimensional arrays | 6 |
| [`strings/`](strings/) | String manipulation with `memmove`, `strstr`, `strtok`, hand-written helpers | 21 |
| [`numbers/`](numbers/) | Digit problems and number/string conversions (`atoi`, `atof`, `ftoa`, binary) | 12 |
| [`recursion/`](recursion/) | Recursive versions of the digit problems | 4 |
| [`bit-manipulation/`](bit-manipulation/) | Bit, nibble and byte swapping, set-bit counting | 3 |
| [`expressions/`](expressions/) | Calculators and infix-to-postfix conversion | 3 |
| [`menu-programs/`](menu-programs/) | Larger menu-driven programs using `char **` / `char ***` and dynamic memory | 3 |
| [`structures/`](structures/) | `struct` basics | 1 |
| [`patterns/`](patterns/) | Printing patterns | 1 |
| [`cpp/`](cpp/) | C++ operator overloading | 1 |
| [`archive/`](archive/) | Earlier drafts that were later rewritten, kept for reference | 6 |

## Building

```sh
make                              # builds every program into build/<topic>/<name>
make build/strings/palindrome     # builds one program
make clean
```

Or compile a file directly:

```sh
gcc -std=gnu99 strings/palindrome.c -o palindrome
./palindrome
```

The code was written against an older toolchain, so a few things are worth knowing:

- Several programs use `gets()`. It is still provided by glibc, but only declared
  when compiling as C99 or older, hence `-std=gnu99` in the Makefile.
- A couple of programs call functions before declaring them. GCC 14 and newer treat
  that as an error, so the Makefile adds `-Wno-error=implicit-function-declaration`.
- `__fpurge()` and `getpid()` are glibc/POSIX, so the programs build on Linux.
- Two files are unfinished drafts and are excluded from `make`:
  `expressions/cmdline_calculator.c` and `bit-manipulation/swap_bits_nibbles_bytes.c`
  (the latter holds four separate snippets in one `main`; compile one block at a time).

## Programs

### arrays/

| File | What it does |
| --- | --- |
| `highest_element.c` | Reads 10 integers and prints the largest. |
| `second_highest.c` | Fills an array with 10 unique random numbers and prints the highest and second highest. |
| `random_array_max_min_sum.c` | Random array of 10 numbers; prints the maximum, minimum and sum. |
| `leaders_in_array.c` | Prints the leaders of an array (elements greater than everything to their right). |
| `repeated_elements.c` | Prints the elements that occur more than once. |
| `repeated_elements_function.c` | Same problem, solved with a separate function. |
| `non_repeated_elements.c` | Prints the elements that occur exactly once. |
| `replace_most_frequent_with_count.c` | Finds the most frequent value and replaces each occurrence with its count. |
| `shift_array.c` | Shifts an array left (`l`) or right (`r`) by a given number of positions, filling with 0. |
| `primes_first_then_sort.c` | Random unique array; moves the primes to the front, then sorts that block ascending and descending. |
| `sorting_algorithms.c` | Bubble, selection and insertion sort on a fixed array. |
| `unique_random_letters.c` | Generates 20 distinct random upper-case letters. |

### matrices/

| File | What it does |
| --- | --- |
| `matrix_addition.c` | Adds two random r x c matrices (r and c read from input). |
| `matrix_multiplication.c` | Product of two random 3 x 4 matrices. |
| `sort_rows_and_columns.c` | Sorts each row, then each column, of a random 3 x 4 matrix in ascending and descending order. |
| `student_marks_analysis.c` | Random 10 x 5 marks table: finds the top-scoring student and the subject with the most failures (marks below 40). |
| `sparse_matrix.c` | Converts a random 5 x 5 matrix into (row, column, value) triplets using `malloc`/`realloc`. |
| `spiral_matrix.c` | Prints a 4 x 4 matrix in spiral order. |

### strings/

| File | What it does |
| --- | --- |
| `reverse_string.c` | Reverses a line of text into a second buffer. |
| `palindrome.c` | Checks whether a string is a palindrome (two earlier approaches kept as comments). |
| `to_uppercase.c` | Converts a hard-coded string to upper case by hand. |
| `insert_star_in_middle.c` | Inserts `*` at the middle of a string with `memmove`. |
| `double_every_occurrence_of_char.c` | Doubles every occurrence of a given character (`hello`, `l` -> `hellllo`). |
| `words_starting_and_ending_with_vowel.c` | Prints the words that both start and end with a vowel (`strtok`). |
| `mask_consecutive_vowels.c` | Replaces every pair of consecutive vowels with `**`. |
| `count_vowels_random_array.c` | Counts the vowels in two random letter arrays. |
| `count_vowels_functions.c` | Counts the vowels in 20 unique random letters, split into input/print/count functions. |
| `insert_string_at_position.c` | Inserts `s2` into `s1` at position `n` using a temporary buffer and a hand-written `strcpy`. |
| `insert_string_at_position_no_temp.c` | Same, without a temporary buffer. |
| `remove_all_occurrences.c` | Removes every occurrence of `s2` from `s1` (first/last-occurrence variants kept as comments). |
| `remove_all_spaces.c` | Deletes all spaces from a string. |
| `remove_extra_spaces.c` | Trims leading/trailing spaces and collapses runs of spaces to one. |
| `remove_duplicate_chars.c` | Keeps only the first occurrence of each character. |
| `remove_first_non_alphabet.c` | Deletes the first non-alphabetic character. |
| `remove_non_alphabets.c` | Deletes every non-alphabetic character. |
| `replace_substring_opposite_case.c` | Replaces every occurrence of `s2` in `s1` with `s2` in the opposite case (`^ 32`). |
| `replace_substring_with_reverse.c` | Replaces every occurrence of `s2` in `s1` with the reverse of `s2`. |
| `replace_word.c` | Replaces every occurrence of one word with another; the words may differ in length. |
| `sum_of_numeric_strings.c` | Validates two numeric strings, converts them with a hand-written `atoi` and prints the sum. |

### numbers/

| File | What it does |
| --- | --- |
| `string_to_integer.c` | Hand-written `atoi` with sign handling and validation. |
| `string_to_float.c` | Hand-written `atof` (digits, sign, decimal point). |
| `float_to_string.c` | Hand-written `ftoa`: sign, integer part and four decimal places. |
| `binary_to_decimal.c` | Validates a binary string and prints its decimal, octal and hexadecimal value. |
| `digits_in_order.c` | Checks whether the digits of a number are in ascending or descending order. |
| `non_repeated_digits.c` | Prints the digits of a number that appear only once. |
| `sequential_digit_numbers.c` | Prints the numbers in `[min, max]` whose digits are consecutive (123, 4567, ...). |
| `replace_zero_digits_with_one.c` | Replaces every 0 digit of a number with 1 (1002 -> 1112). |
| `min_max_digits_via_pointers.c` | Finds the smallest and largest digit and how often each occurs, returned through pointer arguments. |
| `strong_number.c` | Compares a number against the product of the factorials of its digits (strong-number exercise). |
| `is_fibonacci.c` | Checks whether a number belongs to the Fibonacci sequence. |
| `fibonacci_series.c` | Prints the first n Fibonacci numbers. |

### recursion/

| File | What it does |
| --- | --- |
| `factorial.c` | Factorial by recursion. |
| `sum_of_digits.c` | Sum of the digits of a number by recursion. |
| `count_digits.c` | Number of digits by recursion. |
| `digits_in_order.c` | Recursive version of `numbers/digits_in_order.c`. |

### bit-manipulation/

| File | What it does |
| --- | --- |
| `nibble_swap.c` | Swaps two nibbles of `0x12345678`, printing every intermediate mask. |
| `swap_bits_nibbles_bytes.c` | Four snippets in one file: swap two bits, two nibbles, two bytes, two 16-bit halves. Not built by `make`. |
| `even_set_bits_ending_in_4.c` | Prints the numbers in `[min, max]` that end in 4 and have an even number of set bits. |

### expressions/

| File | What it does |
| --- | --- |
| `string_calculator.c` | Evaluates `a op b` typed as one string (`+ - * /`) with input validation. |
| `cmdline_calculator.c` | Calculator over `argv`. Unfinished draft, does not compile; not built by `make`. |
| `infix_to_postfix.c` | Converts an infix expression to postfix using a character stack. |

### menu-programs/

| File | What it does |
| --- | --- |
| `name_list_static.c` | Menu-driven list of names in a `char[10][20]` array: input, print, find, four kinds of sort, delete by index or by name. |
| `name_list_dynamic.c` | Same program on a dynamically grown `char **` array with a `realloc`-based line reader. |
| `contact_book_dynamic.c` | Menu-driven contact book (name, email, phone) in a `char ***` table: insert, print, find, sort and delete by any field. |

### structures/, patterns/, cpp/

| File | What it does |
| --- | --- |
| `structures/product_cart.c` | Array of `Product` structs: add five products and print them as a table. |
| `patterns/number_triangle.c` | Prints n rows of the number n, forming a triangle. |
| `cpp/matrix_operator_overloading.cpp` | 3 x 3 `Matrix` class with an overloaded `+` operator. |

### archive/

Earlier drafts of programs that were rewritten later. They are kept so nothing from
the export is lost, but `make` skips them.

| File | Superseded by | Note |
| --- | --- | --- |
| `is_fibonacci_v1.c` | `numbers/is_fibonacci.c` | Loops forever when the input is not a Fibonacci number. |
| `sorting_algorithms_v1.c` | `arrays/sorting_algorithms.c` | Same code with two of the three sorts commented out. |
| `replace_substring_opposite_case_v1.c` | `strings/replace_substring_opposite_case.c` | Missing brace; does not compile. |
| `remove_first_non_alphabet_v1.c` | `strings/remove_first_non_alphabet.c` | Removes the first character unconditionally. |
| `sum_of_numeric_strings_v1.c` | `strings/sum_of_numeric_strings.c` | Input validation only. |
| `count_digits_v1.c` | `recursion/count_digits.c` | Missing return value. |
