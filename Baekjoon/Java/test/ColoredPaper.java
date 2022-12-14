import java.util.Scanner;
import java.util.Arrays;

public class ColoredPaper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Boolean[][] wallpaper = new Boolean[100][100];
        for (int i = 0; i < 100; i++) {
            Arrays.fill(wallpaper[i], false);
        }
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            int a = sc.nextInt(), b = sc.nextInt();
            for (int j = a; j < a + 10; j++) {
                for (int k = b; k < b + 10; k++) {
                    wallpaper[j][k] = true;
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                if (wallpaper[i][j]) {
                    cnt++;
                }
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}
