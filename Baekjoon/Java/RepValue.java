import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class RepValue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            arr.add(sc.nextInt());
        }
        Collections.sort(arr);
        System.out.println(arr.stream().mapToInt(Integer::intValue).sum() / 5);
        System.out.println(arr.get(2));
        sc.close();
    }
}
