import java.util.Scanner;

public class Oven {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        if ((b + c) / 60 >= 1) {
            a += (b + c) / 60;
            if (a >= 24) {
                a -= 24;
            }
            System.out.println(a + " " + ((b + c) % 60));
        } else {
            System.out.println(a + " " + (b + c));
        }
        sc.close();
    }
}
