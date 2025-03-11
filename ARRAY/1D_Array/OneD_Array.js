const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter the size of the array: ", function(size) {
    size = parseInt(size);

    rl.question(`Enter ${size} numbers separated by space: `, function(input) {
        let arr = input.split(" ").map(Number).slice(0, size);  // Fix: Slice array to exact size
        console.log("Array elements:", arr);
        
        rl.close();
    });
});
