function search(arr, x) {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === x) {
            return i; // Return if element is found
        }
    }
    return -1; // Return -1 if element is not found
}

const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question('Enter the size of the array: ', n => {
    n = parseInt(n);
    let arr = [];

    readline.question(`Enter ${n} elements:\n`, elements => {
        arr = elements.split(' ').map(Number);
        
        readline.question('Enter the target element to Search: ', x => {
            x = parseInt(x);
            let result = search(arr, x);
            if (result === -1) {
                console.log('Element is not present in array');
            } else {
                console.log(`Element found at index ${result}`);
            }
            readline.close();
        });
    });
});
