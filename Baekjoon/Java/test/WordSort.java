import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;
import java.util.LinkedHashSet;

public class WordSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String[] arr = new String[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.next();
        }
        Arrays.sort(arr, new Comparator<String>() {
            @Override
            public int compare(String i1, String i2) {
                if (i1.length() == i2.length()) {
                    return i1.compareTo(i2);
                }
                return i1.length() - i2.length();
            }
        });
        LinkedHashSet<String> linkedHashSet = new LinkedHashSet<>(Arrays.asList(arr));
        for (String s : linkedHashSet) {
            System.out.println(s);
        }
        sc.close();
    }
}
