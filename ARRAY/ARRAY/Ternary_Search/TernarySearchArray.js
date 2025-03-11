function ternarySearch(left, right, key, arr) {
    if (right >= left) {
        let mid1 = left + Math.floor((right - left) / 3);
        let mid2 = right - Math.floor((right - left) / 3);
        
        if (arr[mid1] === key) {
            return mid1;
        }
        if (arr[mid2] === key) {
            return mid2;
        }
        if (key < arr[mid1]) {
            return ternarySearch(left, mid1 - 1, key, arr);
        } else if (key > arr[mid2]) {
            return ternarySearch(mid2 + 1, right, key, arr);
        } else {
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr);
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

    readline.question(`Enter ${n} sorted elements:\n`, elements => {
        arr = elements.split(' ').map(Number);
        
        readline.question('Enter the key to be searched: ', key => {
            key = parseInt(key);
            let left = 0;
            let right = n - 1;
            let p = ternarySearch(left, right, key, arr);
            
            if (p === -1) {
                console.log(`Key ${key} not found in the array.`);
            } else {
                console.log(`Key ${key} is found at index ${p}.`);
            }
            readline.close();
        });
    });
});
