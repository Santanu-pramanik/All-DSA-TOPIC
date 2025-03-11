function quickSort(arr) {
    if (arr.length <= 1) {
        return arr;
    }
    let pivot = arr[arr.length - 1];
    let left = arr.slice(0, -1).filter(x => x < pivot);
    let right = arr.slice(0, -1).filter(x => x >= pivot);
    return [...quickSort(left), pivot, ...quickSort(right)];
}

const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter numbers separated by spaces: ", input => {
    let arr = input.split(" ").map(Number);
    console.log("Sorted array:", quickSort(arr));
    rl.close();
});
