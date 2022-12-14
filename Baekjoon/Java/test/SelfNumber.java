import java.util.Arrays;

public class SelfNumber {
    public static void main(String[] args) {
        Boolean[] arr = new Boolean[10001];
        Arrays.fill(arr, true);
        for (int i = 1; i < 10001; i++) {
            String s = String.valueOf(i);
            int n = i;
            for (int j = 0; j < s.length(); j++) {
                n += s.charAt(j) - 48;
            }
            if (n > 10000) {
                continue;
            }
            arr[n] = false;
        }
        for (int i = 1; i < 10001; i++) {
            if (arr[i]) {
                System.out.println(i);
            }
        }
    }
}
