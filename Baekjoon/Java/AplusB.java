import java.util.Scanner;

public class AplusB {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A = in.nextInt(), B = in.nextInt();
        System.out.println(A + B);
        in.close();
    }
}