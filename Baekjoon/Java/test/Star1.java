import java.util.Scanner;

public class Star1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "";
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            s += "*";
            System.out.println(s);
        }
        sc.close();
    }
}
