import java.util.Arrays;

public class bj15596 {
    long sum(int[] a) {
        long ans = (long) Arrays.stream(a).sum();
        return ans;
    }

    public static void main(String[] args) {
        int[] num_arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        bj15596 tmp = new bj15596();
        System.out.println(tmp.sum(num_arr));
    }
}
