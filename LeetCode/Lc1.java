import java.util.Map;
import java.util.HashMap;

public class Lc1 {
    public int[] twoSum(int[] nums, int target) {
        // int[] ans = new int[2];
        // for (int i = 0; i < nums.length - 1; i++) {
        // for (int j = i + 1; j < nums.length; j++) {
        // if (nums[i] + nums[j] == target) {
        // ans[0] = i;
        // ans[1] = j;
        // break;
        // }
        // }
        // }
        // return ans;
        Map<Integer, Integer> numMap = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            numMap.put(nums[i], i);
        }
        for (int i = 0; i < nums.length; i++) {
            int cmp = target - nums[i];
            if (numMap.containsKey(cmp) && numMap.get(cmp) != i) {
                return new int[] { i, numMap.get(cmp) };
            }
        }
        return null;
    }

    public static void main(String[] args) {
        int[] nums = { 3, 2, 4 };
        Lc1 tmp = new Lc1();
        for (int i : tmp.twoSum(nums, 6)) {
            System.out.println(i);
        }
    }
}
