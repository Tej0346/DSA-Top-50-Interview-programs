public class Move_Negative_Element_to_oneSide {
    public static void main(String[] args) {
        int[] arr = { 12, -7, 5, -3, 9, -1, 0, -6, 8 };

        moveNegativesToOneSide(arr);

        System.out.print("Array after moving negative elements to one side: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }

    private static void moveNegativesToOneSide(int[] arr) {
        int left = 0;
        int right = arr.length - 1;

        while (left < right) {
            if (arr[left] < 0) {
                left++;
            } else if (arr[right] >= 0) {
                right--;
            } else {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
                right--;
            }
        }
    }
}
