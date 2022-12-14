import java.util.Scanner;

public class bj2438 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String s = "";
        for (int i = 0; i < N; i++) {
            s += "*";
            System.out.println(s);
        }
        sc.close();
    }
}
