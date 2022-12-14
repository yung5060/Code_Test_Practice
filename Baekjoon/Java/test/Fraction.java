import java.util.Scanner;

public class Fraction {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt(), i = 0, stage = 1;
        while (i < X) {
            i += stage;
            stage++;
        }
        if (stage % 2 == 0) {
            System.out.print((1 + (i - X)) + "/" + (stage - 1 - (i - X)));
        } else {
            System.out.print((stage - 1 - (i - X)) + "/" + (1 + (i - X)));
        }
        sc.close();
    }
}
