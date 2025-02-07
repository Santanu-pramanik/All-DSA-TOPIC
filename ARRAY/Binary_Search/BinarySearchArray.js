function binarySearch(arr, x) {
    let low = 0, high = arr.length - 1;
    while (low <= high) {
        let mid = Math.floor(low + (high - low) / 2);
        // Check if x is present at mid
        if (arr[mid] === x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question('Enter the number of elements in the array: ', n => {
    n = parseInt(n);
    let arr = [];

    readline.question(`Enter ${n} sorted elements: \n`, elements => {
        arr = elements.split(' ').map(Number);
        
        readline.question('Enter the element to search for: ', x => {
            x = parseInt(x);
            let result = binarySearch(arr, x);
            if (result === -1) {
                console.log('Element is not found in this array');
            } else {
                console.log(`Element is present at index ${result}`);
            }
            readline.close();
        });
    });
});
