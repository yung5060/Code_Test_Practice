import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class CoordinateSort2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[][] arr = new int[N][2];
        for (int i = 0; i < N; i++) {
            arr[i][0] = sc.nextInt();
            arr[i][1] = sc.nextInt();
        }
        Arrays.sort(arr, new Comparator<int[]>() {
            @Override
            public int compare(int[] i1, int[] i2) {
                if (i1[1] == i2[1]) {
                    return i1[0] - i2[0];
                }
                return i1[1] - i2[1];
            }
        });
        for (int[] it : arr) {
            System.out.println(it[0] + " " + it[1]);
        }
        sc.close();
    }
}
