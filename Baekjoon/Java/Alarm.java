import java.util.Scanner;

public class Alarm {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt();
        if (b < 45) {
            if (a == 0) {
                a = 23;
            } else {
                a--;
            }
            System.out.print(a);
            System.out.print(" ");
            System.out.println(60 + (b - 45));
        } else {
            System.out.print(a);
            System.out.print(" ");
            System.out.println(b - 45);
        }
        sc.close();
    }
}
