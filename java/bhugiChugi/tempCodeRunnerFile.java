public class practise {
    public static int findMaxIn2DArray(int[][] array) {
        // Check if array is empty
        if (array == null || array.length == 0 || array[0].length == 0) {
            throw new IllegalArgumentException("Array cannot be empty");
        }

        int max = array[0][0]; // Initialize max with first element

        // Iterate through the 2D array
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                if (array[i][j] > max) {
                    max = array[i][j];
                }
            }
        }

        return max;
    }

    public static void main(String[] args) {
        // Example 2D array
        int[][] array = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };

        try {
            int maxElement = findMaxIn2DArray(array);
            System.out.println("Maximum element in the 2D array: " + maxElement);

            // Test with another array containing negative numbers
            int[][] array2 = {
                {-5, -2, -9},
                {-1, -7, -3},
                {-8, -4, -6}
            };
            int maxElement2 = findMaxIn2DArray(array2);
            System.out.println("Maximum element in the second 2D array: " + maxElement2);

        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
