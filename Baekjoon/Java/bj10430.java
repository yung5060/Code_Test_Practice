import java.util.Scanner;

public class bj10430 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt(), B = sc.nextInt(), C = sc.nextInt();
        System.out.println((A + B) % C);
        System.out.println((A + B) % C);
        System.out.println((A * B) % C);
        System.out.println((A * B) % C);
        sc.close();
    }
}
