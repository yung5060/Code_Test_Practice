import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class bj3052 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Set<Integer> set = new HashSet<Integer>();
        int tmp;
        for (int i = 0; i < 10; i++) {
            tmp = sc.nextInt();
            set.add(tmp % 42);
        }
        System.out.println(set.size());
        sc.close();
    }
}
