import java.util.Scanner;

public class Star2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String s = " ";
        s = s.repeat(N);
        for (int i = 0; i < N; i++) {
            s += "*";
            s = s.substring(1);
            System.out.println(s);
        }
        sc.close();
    }
}
