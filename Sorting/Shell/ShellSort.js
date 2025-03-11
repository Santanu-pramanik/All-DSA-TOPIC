const readline = require("readline");

// Function to perform Shell Sort
function shellSort(arr) {
    let n = arr.length;
    let gap = Math.floor(n / 2);

    while (gap > 0) {
        for (let i = gap; i < n; i++) {
            let temp = arr[i];
            let j = i;

            // Shift elements until the correct position for temp is found
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp; // Place temp at its correct position
        }
        gap = Math.floor(gap / 2); // Reduce the gap
    }
}

// Create an interface for user input
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask for user input
rl.question("Enter numbers separated by spaces: ", (input) => {
    let arr = input.split(" ").map(Number); // Convert input to an array of numbers

    console.log("Original Array:", arr);

    // Sorting the array
    shellSort(arr);

    console.log("Sorted Array:", arr);

    rl.close(); // Close the input stream
});
