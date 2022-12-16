public class Lc35 {
    public int searchInsert(int[] nums, int target) {
        int left = 0, right = nums.length - 1, mid, last = 0;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                right = mid - 1;
                last = right + 1;
            } else {
                left = mid + 1;
                last = left;
            }
        }
        return last;
    }

    public static void main(String[] args) {
        int[] nums = { 1, 3, 5, 6 };
        Lc35 tmp = new Lc35();
        System.out.println(tmp.searchInsert(nums, 5));
        System.out.println(tmp.searchInsert(nums, 2));
        System.out.println(tmp.searchInsert(nums, 7));
        System.out.println(tmp.searchInsert(nums, 0));
    }
}
