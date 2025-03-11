const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let rows, cols, matrix = [];

// Function to take user input for matrix dimensions
function askDimensions() {
    rl.question("Enter the number of rows: ", (rowInput) => {
        rows = parseInt(rowInput);
        rl.question("Enter the number of columns: ", (colInput) => {
            cols = parseInt(colInput);
            
            if (isNaN(rows) || isNaN(cols) || rows <= 0 || cols <= 0) {
                console.log("Please enter valid numbers for rows and columns.");
                rl.close();
                return;
            }

            console.log(`You can enter a total of ${rows * cols} elements.`);
            askMatrixInput(0);
        });
    });
}

// Function to take user input for matrix elements row by row
function askMatrixInput(currentRow) {
    if (currentRow === rows) {
        displayMatrix();
        rl.close();
        return;
    }

    rl.question(`Enter ${cols} space-separated numbers for row ${currentRow + 1}: `, (rowData) => {
        let row = rowData.trim().split(" ").map(Number);

        if (row.length !== cols || row.some(isNaN)) {
            console.log(`Please enter exactly ${cols} valid numbers.`);
            askMatrixInput(currentRow);
        } else {
            matrix.push(row);
            askMatrixInput(currentRow + 1);
        }
    });
}

// Function to display the matrix
function displayMatrix() {
    console.log("\nThe entered matrix is:");
    matrix.forEach(row => console.log(row.join(" ")));
}

// Start the input process
askDimensions();
