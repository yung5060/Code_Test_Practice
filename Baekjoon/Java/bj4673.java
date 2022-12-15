import java.util.Arrays;

public class bj4673 {
    public static void main(String[] args) {
        boolean[] slf_num = new boolean[10001];
        Arrays.fill(slf_num, true);
        for (int i = 1; i < 10000; i++) {
            int tmp = i, num = i;
            while (tmp > 0) {
                num += (tmp % 10);
                tmp /= 10;
            }
            if (num > 10000) {
                continue;
            }
            slf_num[num] = false;
        }
        for (int i = 1; i < 10001; i++) {
            if (slf_num[i]) {
                System.out.println(i);
            }
        }
    }
}
