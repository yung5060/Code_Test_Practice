import java.util.Scanner;

public class Mult {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        String b = sc.next();
        int B = Integer.parseInt(b);
        for (int i = b.length() - 1; i >= 0; i--) {
            System.out.println(A * (b.charAt(i) - 48));
        }
        System.out.println(A * B);
        sc.close();
    }
}
