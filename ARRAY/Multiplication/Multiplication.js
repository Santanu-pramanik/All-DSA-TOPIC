const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Function to read matrix dimensions
function getMatrixDimensions(question) {
    return new Promise(resolve => {
        rl.question(question, input => {
            let values = input.trim().split(" ").map(Number);
            if (values.length !== 2 || values.some(isNaN) || values.some(v => v <= 0)) {
                console.log("❌ Invalid input! Enter exactly TWO positive numbers.");
                resolve(getMatrixDimensions(question)); // Retry input
            } else {
                resolve(values);
            }
        });
    });
}

// Function to read matrix elements
function getMatrix(rows, cols, name) {
    console.log(`Enter elements of ${name} matrix (space-separated, row by row):`);
    return new Promise(resolve => {
        let matrix = [];
        let rowCount = 0;

        const readRow = () => {
            rl.question("", input => {
                let row = input.trim().split(" ").map(Number);
                if (row.length !== cols || row.some(isNaN)) {
                    console.log(`❌ Please enter exactly ${cols} numbers for this row!`);
                    return readRow(); // Retry input
                }
                matrix.push(row);
                rowCount++;

                if (rowCount < rows) readRow();
                else resolve(matrix);
            });
        };

        readRow();
    });
}

// Main function to perform matrix multiplication
async function main() {
    let [m, n] = await getMatrixDimensions("Enter rows and columns of first matrix: ");
    let [n2, p] = await getMatrixDimensions("Enter rows and columns of second matrix: ");

    if (n !== n2) {
        console.log("❌ Matrix multiplication is not possible! Columns of first matrix must match rows of second.");
        rl.close();
        return;
    }

    let A = await getMatrix(m, n, "First");
    let B = await getMatrix(n, p, "Second");

    // Initialize result matrix C
    let C = Array.from({ length: m }, () => Array(p).fill(0));

    // Perform multiplication
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < p; j++) {
            for (let k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    console.log("\n✅ Resultant Matrix:");
    C.forEach(row => console.log(row.join(" ")));

    rl.close();
}

// Run the program
main();
