import java.util.Scanner;
import java.util.Collections;
import java.util.List;
import java.util.Arrays;
import java.lang.Math;

public class Statistics {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Integer[] arr = new Integer[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }
        List<Integer> list = Arrays.asList(arr);
        Collections.sort(list);
        System.out.println((int) Math.round((double) list.stream().mapToInt(Integer::intValue).sum() / N));
        System.out.println(list.get(N / 2));
        int j = 0, cnt = -1;
        Boolean flag = false;
        int mode = list.get(N / 2);
        while (j < N - 1) {
            int num = list.get(j);
            int tmp = 0;
            while (list.get(j) == num) {
                if (j >= N - 1) {
                    tmp++;
                    break;
                }
                j++;
                tmp++;
            }
            if (tmp > cnt) {
                cnt = tmp;
                mode = num;
                flag = true;
            } else if (tmp == cnt && flag == true) {
                mode = num;
                flag = false;
            }
        }
        System.out.println(mode);
        System.out.println(list.get(N - 1) - list.get(0));
        sc.close();
    }
}
