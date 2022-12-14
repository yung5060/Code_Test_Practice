import java.util.Scanner;

public class bj2439 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String s = "";
        for (int i = 0; i < N; i++) {
            s += " ";
        }
        for (int i = 0; i < N; i++) {
            s += "*";
            s = s.substring(1, N + 1);
            System.out.println(s);
        }
        sc.close();
    }
}
