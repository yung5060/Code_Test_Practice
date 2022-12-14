import java.util.Scanner;

public class HoneyComb {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i = 1, N = sc.nextInt(), cnt = 1;
        while (i < N) {
            i += cnt * 6;
            cnt++;
        }
        System.out.println(cnt);
        sc.close();
    }
}
