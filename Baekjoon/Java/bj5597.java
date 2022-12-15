import java.util.Scanner;
import java.util.Arrays;

public class bj5597 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Boolean[] reg_arr = new Boolean[31];
        Arrays.fill(reg_arr, true);
        for (int i = 0; i < 28; i++) {
            reg_arr[sc.nextInt()] = false;
        }
        for (int i = 1; i < 31; i++) {
            if (reg_arr[i]) {
                System.out.println(i);
            }
        }
        sc.close();
    }
}
