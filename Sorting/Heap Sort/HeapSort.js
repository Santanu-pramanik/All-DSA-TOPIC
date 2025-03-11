const readline = require("readline");

class HeapSort {
    constructor(arr) {
        this.arr = arr;
        this.n = arr.length;
    }

    heapify(n, i) {
        let largest = i; // Root
        let left = 2 * i + 1; // Left child index
        let right = 2 * i + 2; // Right child index

        // Check if left child exists and is greater than root
        if (left < n && this.arr[left] > this.arr[largest]) {
            largest = left;
        }

        // Check if right child exists and is greater than largest so far
        if (right < n && this.arr[right] > this.arr[largest]) {
            largest = right;
        }

        // If largest is not root, swap and continue heapifying
        if (largest !== i) {
            [this.arr[i], this.arr[largest]] = [this.arr[largest], this.arr[i]];
            this.heapify(n, largest);
        }
    }

    sort() {
        // Build a max heap
        for (let i = Math.floor(this.n / 2) - 1; i >= 0; i--) {
            this.heapify(this.n, i);
        }

        // Extract elements from the heap one by one
        for (let i = this.n - 1; i > 0; i--) {
            [this.arr[i], this.arr[0]] = [this.arr[0], this.arr[i]]; // Swap max with last element
            this.heapify(i, 0); // Heapify the reduced heap
        }
    }

    getSortedArray() {
        return this.arr;
    }
}

// Create interface for user input
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask for user input
rl.question("Enter numbers separated by spaces: ", (input) => {
    const arr = input.split(" ").map(Number); // Convert input to array of numbers

    // Sort using HeapSort class
    const heapSorter = new HeapSort(arr);
    heapSorter.sort();

    // Display result
    console.log("Sorted array:", heapSorter.getSortedArray());

    rl.close(); // Close input stream
});
