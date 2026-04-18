public class Maximum_and_Minimum_of_an_Array {
    public static void main(String[] args) {
        int[] arr = {3, 5, 1, 9, 2, 8};
        
        int min = arr[0];
        int max = arr[0];
        
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < min) min = arr[i];
            if (arr[i] > max) max = arr[i];
        }
        
        System.out.println("Min: " + min + ", Max: " + max);
    }
}