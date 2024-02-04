//#include <stdio.h>
//
//void algorithm(int n) {
//    printf("%d ", n); // Print the initial value of n
//
//    while (n != 1) {
//        if (n % 2 == 0) {
//            n /= 2; // Divide n by 2 if it's even
//        } else {
//            n = n * 3 + 1; // Multiply n by 3 and add 1 if it's odd
//        }
//        printf("%d ", n); // Print the current value of n
//    }
//}
//
//int main() {
//    int n;
//    scanf("%d", &n); // Read the input value of n
//
//    algorithm(n); // Call the algorithm function
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n); // Read the value of n
//
//    int sum = 0;
//    int i;
//    for ( i = 1; i <= n - 1; i++) {
//        int num;
//        scanf("%d", &num); // Read each number
//
//        sum += num; // Calculate the sum of the given numbers
//    }
//
//    // Calculate the sum of numbers from 1 to n
//    int totalSum = (n * (n + 1)) / 2;
//
//    // The missing number is the difference between the total sum and the sum of given numbers
//    int missingNumber = totalSum - sum;
//
//    printf("%d\n", missingNumber); // Print the missing number
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int longestRepetition(char* sequence) {
//    int n = strlen(sequence);
//    int maxLength = 1; // Initialize the maximum length to 1
//    int currentLength = 1; // Initialize the current length to 1
//     int i;
//    for ( i = 1; i < n; i++) {
//        if (sequence[i] == sequence[i - 1]) {
//            currentLength++; // Increment the current length if the current character matches the previous character
//            if (currentLength > maxLength) {
//                maxLength = currentLength; // Update the maximum length if the current length is greater
//            }
//        } else {
//            currentLength = 1; // Reset the current length to 1 if the current character is different from the previous character
//        }
//    }
//
//    return maxLength;
//}
//
//int main() {
//    char sequence[1000005];
//    scanf("%s", sequence); // Read the DNA sequence
//
//    int length = longestRepetition(sequence); // Call the function to find the length of the longest repetition
//
//    printf("%d\n", length); // Print the length of the longest repetition
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n); // Read the size of the array
//
//    int array[200005];
//    int i;
//    for ( i = 0; i < n; i++) {
//        scanf("%d", &array[i]); // Read the array elements
//    }
//
//    int moves = 0;
//    for (i = 1; i < n; i++) {
//        if (array[i] < array[i - 1]) {
//            moves += array[i - 1] - array[i]; // Add the difference between the current element and the previous element to the moves
//            array[i] = array[i - 1]; // Update the current element to be at least as large as the previous element
//        }
//    }
//
//    printf("%d\n", moves); // Print the minimum number of moves
//
//    return 0;
//}
//#include<stdio.h>
//void main()
//{
//    int a=3,b=2,c;
//    //a+b=c;
//     c=a+b;
//    printf("sum of two numbers is %d\n", c); 
//}

//#include<stdio.h>
//
//void main() {
//    char str[] = "The small value assigned.";
//    int val = 10;
//    printf(val > 10 ? "The large value assigned." : "%s", str);
//}

#include<stdio.h>

void main() {
    int a = 0;
    a = printf("5");
    printf("%d", a);
}
