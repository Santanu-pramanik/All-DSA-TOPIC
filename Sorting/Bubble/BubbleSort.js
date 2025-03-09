const readline = require("readline");

// Creating an interface for user input
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// User-defined function for Bubble Sort
function bubbleSort(arr) {
    let n = arr.length;
    let swapped;
    for (let i = 0; i < n - 1; i++) {
        swapped = false;
        for (let j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
                swapped = true;
            }
        }
        // If no swapping happened, array is already sorted
        if (!swapped) break;
    }
}

// User-defined function to print an array
function printArray(arr) {
    console.log(arr.join(" "));
}

// Taking input from the user in Node.js
rl.question("Enter numbers separated by spaces: ", (input) => {
    let arr = input.split(" ").map(Number);

    console.log("Unsorted array:");
    printArray(arr);

    // Calling the user-defined function for Bubble Sort
    bubbleSort(arr);

    console.log("Sorted array:");
    printArray(arr);

    rl.close();
});
