def get_matrix_dimensions(prompt):
    while True:
        try:
            values = input(prompt).split()
            if len(values) != 2:
                print("Please enter exactly TWO numbers separated by a space (e.g., '2 3')")
                continue  # Ask for input again
            m, n = map(int, values)
            if m <= 0 or n <= 0:
                print(" Dimensions must be positive integers! Try again.")
                continue
            return m, n
        except ValueError:
            print("Invalid input! Enter valid integers (e.g., '2 3').")

# Get matrix dimensions
m, n = get_matrix_dimensions("Enter rows and columns of first matrix: ")
p = int(input("Enter columns of second matrix: "))

# Ensure p is a valid integer
while p <= 0:
    print("Matrix dimensions must be positive integers! Try again.")
    p = int(input("Enter columns of second matrix: "))

print(f"Matrix 1: {m}x{n}, Matrix 2: {n}x{p}")

# Function to input a matrix
def input_matrix(rows, cols, name):
    print(f"Enter elements of {name} matrix ({rows}x{cols}):")
    matrix = []
    for i in range(rows):
        row = list(map(int, input().split()))
        while len(row) != cols:  # Ensure correct number of elements
            print(f"Please enter exactly {cols} numbers for row {i+1}!")
            row = list(map(int, input().split()))
        matrix.append(row)
    return matrix

# Read matrices
A = input_matrix(m, n, "First")
B = input_matrix(n, p, "Second")

# Perform matrix multiplication
C = [[0] * p for _ in range(m)]  # Initialize result matrix

for i in range(m):
    for j in range(p):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]

# Display Resultant Matrix
print(" Resultant Matrix (Product):")
for row in C:
    print(" ".join(map(str, row)))
