<script>
// JavaScript program for subtraction  of two matrices

// The order of the matrix is 3 x 3
let size1 = 3;
let size2 = 3;

// Function to subtract matrices mat1[][] & mat2[][],
// and store the result in matrix result[][]
function subtractMatrices(mat1, mat2, result) {
	for (let i = 0; i < size1; i++) {
        for (let j = 0; j < size2; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Driver code

// 1st Matrix
mat1 = [ [9, 8, 7],
	     [6, 8, 0],
	     [5, 9, 2]]

// 2nd Matrix
mat2 = [ [4, 7, 6],
	     [8, 8, 2],
	     [7, 3, 5]]

// Matrix to store the result
let result = new Array(size1);

for (let k = 0; k < size1; k++) {
    result[k] = new Array(size2);
}

// Calling the subtractMatrices function
subtractMatrices(mat1, mat2, result);

document.write("mat1 - mat2 = <br>")

// Printing the difference of the 2 matrices (mat1 - mat2)
for (let i = 0; i < size1; i++) {
	for (let j = 0; j < size2; j++) {
        document.write(result[i][j] + " ");
    }
	document.write("<br>");
}

</script>
