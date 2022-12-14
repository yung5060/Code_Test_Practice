import java.util.Scanner;

public class AplusB4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextInt()) {
            int a = sc.nextInt(), b = sc.nextInt();
            System.out.println(a + b);
        }
        sc.close();
    }
}
