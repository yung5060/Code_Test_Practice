import java.util.Scanner;
import java.util.Arrays;
import java.util.Stack;

public class Voca {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        s = s.toLowerCase();
        int[] arr = new int[26];
        Arrays.fill(arr, 0);
        for (int i = 0; i < s.length(); i++) {
            arr[s.charAt(i) - 97]++;
        }
        int max = 0;
        Stack<Character> charArr = new Stack<>();
        for (int i = 0; i < 26; i++) {
            if (max < arr[i]) {
                max = arr[i];
                if (!charArr.isEmpty()) {
                    charArr.clear();
                }
                charArr.push((char) (i + 65));
            } else if (max == arr[i]) {
                charArr.push((char) (i + 65));
            }
        }
        if (charArr.size() > 1) {
            System.out.println('?');
        } else {
            System.out.println(charArr.lastElement());
        }
        sc.close();
    }
}
