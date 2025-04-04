<!DOCTYPE html>
<html>
<body>
<h1>The N-Queens Problem</h1>
<p>The program solves the classic "N-Queens Problem" for an N x N board, specifically 8 x 8. According to the rules of chess, the queen is the most powerful piece. It threatens all squares located on the same column, row, or diagonal as the square it occupies. Therefore, each column of the chessboard can contain only one queen. Additionally, a queen attacks the row, column, and the two diagonals it is placed on.</p>
<img src="poze\tabla_sah.jpg"width="500">
<p>Thus, the goal is to find a solution where no two queens are on the same row, column, or diagonal. The eight queens problem is just a particular case of the general problem, which involves placing n queens on an n×n chessboard under the same conditions.  
The problem can be quite computationally expensive since there are 4,426,165,368 possible arrangements of the eight queens on an 8×8 board, but only 92 valid solutions.  
Optimization techniques can be applied to reduce computational requirements, or approximate rules can be used to avoid brute-force searching. For example, by applying a simple rule that restricts each queen to its own column or row, even though brute-force searching is still considered, the number of possibilities can be significantly reduced.</p>
<img src="poze\8regine.jpg" width="500">

<h2>Backtracking Method</h2>
<p>The Backtracking method involves progressively generating only potential solution results. It starts from an empty solution and adds elements from left to right as long as internal conditions are met. If at some point there are no chances of reaching a valid solution, the generation of that prefix (partial solution) ends, and the algorithm backtracks to reassign the previous element. This is where the name of the method—backtracking—comes from.</p>
<p>The backtracking technique is essential for solving the N-Queens problem because it allows us to recursively explore all possibilities and backtrack when an invalid state is reached. In the context of this problem, backtracking is used to place queens on the chessboard so that no conflicts occur between them.</p>
<p>The <b>noAttack</b> function ensures that a queen placed in a particular position does not attack any other queen on the same row, column, or diagonal.</p>
<p>The <b>solveBoard</b> function recursively iterates through columns and attempts to place queens in each column.</p>
<p>The program displays the chessboard for each valid solution found and the total number of possible solutions.</p>

<h2>References:</h2>
<p>https://science.hotnews.ro/stiri-tehnologie-21984078-cel-care-rezolva-puzzle-printr-cod-computerizat-poate-castiga-1-milion-dolari.htm</p>
<p>https://www.scrigroup.com/calculatoare/algoritmi/Metoda-Backtracking-Exemplu-pr52764.php</p>
<p>https://en.wikipedia.org/wiki/Eight_queens_puzzle</p>
</body>
</html>
