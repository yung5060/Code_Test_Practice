import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class MaxNum {
    // public static void main(String[] args) {
    // Scanner sc = new Scanner(System.in);
    // int max = sc.nextInt(), idx = 1;
    // for (int i = 2; i <= 9; i++) {
    // int tmp = sc.nextInt();
    // if (tmp > max) {
    // max = tmp;
    // idx = i;
    // }
    // }
    // System.out.print(max + "\n" + idx);
    // sc.close();
    // }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> array = new ArrayList<>();
        for (int i = 0; i < 9; i++) {
            int ele = sc.nextInt();
            array.add(ele);
        }
        System.out.println(Collections.max(array));
        System.out.println(array.indexOf(Collections.max(array)) + 1);
        sc.close();
    }
}
