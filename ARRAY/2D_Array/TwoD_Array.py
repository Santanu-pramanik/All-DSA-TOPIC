# Asking the user for number of rows and columns
rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))

# Calculate total elements
total_elements = rows * cols
print(f"You can enter a total of {total_elements} elements.")

# Create the 2D array
matrix = []

# Taking user input for elements
print("Enter the elements of the matrix:")
for i in range(rows):
    row = list(map(int, input().split()))  # Taking space-separated input for each row
    matrix.append(row)

# Printing the matrix
print("The entered matrix is:")
for row in matrix:
    print(" ".join(map(str, row)))
