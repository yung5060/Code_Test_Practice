import java.util.Scanner;
import java.util.ArrayList;

public class SmallerElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), tmp = sc.nextInt();
        ArrayList<Integer> array = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            int e = sc.nextInt();
            if (e < tmp) {
                array.add(e);
            }
        }
        for (int ele : array) {
            System.out.print(ele + " ");
        }
        sc.close();
    }
}
