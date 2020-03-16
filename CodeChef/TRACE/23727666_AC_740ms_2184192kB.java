import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sf = new Scanner(System.in);
        int T = sf.nextInt();
        while(T!=0){
            int N = sf.nextInt();
            int[][] A = new int[N][N];
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    A[i][j] = sf.nextInt();
                }
            }
            T--;
            System.out.println(maxSum(A));
        }
        sf.close();
    }
    static int maxSum(int[][] a) {
        int maxSum = 0;
        for (int j = 0; j < a.length; j++) {
            maxSum = Math.max(maxSum, diagonalSum(a, 0, j));
        }
        for (int i = 0; i < a.length; i++) {
            maxSum = Math.max(maxSum, diagonalSum(a, i, 0));
        }
        return maxSum;
    }
    static int diagonalSum(int[][] a, int r, int c) {
        int diagonalSum = 0;
        for (int i = r, j = c; i < a.length && j < a.length; i++, j++) {
            diagonalSum = diagonalSum + a[i][j];
        }
        return diagonalSum;
    }
}