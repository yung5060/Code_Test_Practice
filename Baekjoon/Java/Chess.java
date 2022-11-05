import java.util.Scanner;

public class Chess {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        System.out.println(1 - A);
        A = sc.nextInt();
        System.out.println(1 - A);
        A = sc.nextInt();
        System.out.println(2 - A);
        A = sc.nextInt();
        System.out.println(2 - A);
        A = sc.nextInt();
        System.out.println(2 - A);
        A = sc.nextInt();
        System.out.println(8 - A);
        sc.close();
    }
}
