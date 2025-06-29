public class MatrixAddition {
    public static void main(String[] args) {
        int[][] matrix1={
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        int[][] matrix2={
            {10,20,30},
            {40,50,60},
            {70,80,90}
        };
        if (matrix1.length != matrix2.length  ||  matrix1[0].length != matrix2[0].length){
        System.out.print("Matrices cannot be added");
        return;
        }
        int[][] result = new int[matrix1.length][matrix1[0].length];
        for(int i =0; i<matrix1.length; i++){
            for(int j =0; j<matrix1[0].length; j++){
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        System.out.println("Resultant Matrix: ");
        for(int[] row: result){
            for(int element : row){
                System.out.print(element + " ");
            }
            System.out.println();
        }
    }
}
