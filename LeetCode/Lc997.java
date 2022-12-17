import java.util.Arrays;

public class Lc997 {
    public int[] sortedSquares(int[] nums) {
        int left = 0, right = nums.length - 1, idx = right;
        int[] ans = new int[nums.length];
        while (left <= right) {
            int leftSqr = nums[left] * nums[left];
            int rightSqr = nums[right] * nums[right];
            if (leftSqr > rightSqr) {
                ans[idx] = leftSqr;
                left++;
            } else {
                ans[idx] = rightSqr;
                right--;
            }
            idx--;
        }
        return ans;
    }

    public static void main(String[] args) {
        int[] nums = { -4, -1, 0, 3, 10 };
        Lc997 tmp = new Lc997();
        System.out.println(Arrays.toString(tmp.sortedSquares(nums)));
    }
}
