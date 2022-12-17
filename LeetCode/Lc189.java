import java.util.Arrays;
import java.util.stream.IntStream;

public class Lc189 {
    public void rotate(int[] nums, int k) {
        k = k % nums.length;
        k = nums.length - k;
        int[] arr1 = Arrays.copyOfRange(nums, 0, k);
        int[] arr2 = Arrays.copyOfRange(nums, k, nums.length);
        int[] ans = IntStream.concat(Arrays.stream(arr2), Arrays.stream(arr1)).toArray();
        for (int i = 0; i < nums.length; i++) {
            nums[i] = ans[i];
        }
    }

    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 4, 5, 6, 7 };
        Lc189 tmp = new Lc189();
        tmp.rotate(nums, 3);
        System.out.println(Arrays.toString(nums));
    }
}
