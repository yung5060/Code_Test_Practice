import java.util.Scanner;

public class Quadrant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt();
        if (x * y > 0) {
            if (x > 0) {
                System.out.println(1);
            } else {
                System.out.println(3);
            }
        } else {
            if (x > 0) {
                System.out.println(4);
            } else {
                System.out.println(2);
            }
        }
        sc.close();
    }
}
