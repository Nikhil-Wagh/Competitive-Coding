import java.util.Scanner;

public class LongestBitonicSubsequence {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();

		while (t-- > 0) {
			int n = scanner.nextInt();
			int[] arr = new int[n];
			for (int i = 0; i < n; i++) {
				arr[i] = scanner.nextInt();
			}

			int[] left = getIncreasingSubsequence(arr, n);
			int[] right = getIncreasingSubsequence(getReverse(arr, n), n);

			int ans = Integer.MIN_VALUE;
			for (int i = 0; i < n; i++) {
				ans = Math.max(ans, left[i] + right[n - 1 - i]);
			}

			System.out.println(ans - 1);
		}
		scanner.close();
	}

	private static int[] getIncreasingSubsequence(int[] arr, int n) {
		int[] subsequence = new int[n];
		int[] sol = new int[n];

//		printArray("Initial Array", arr, n);

		int k = 0;
		subsequence[0] = arr[0];
		sol[0] = 1;
		for (int i = 1; i < n; i++) {
			if (subsequence[0] > arr[i])
				subsequence[0] = arr[i];
			else if (subsequence[k] < arr[i])
				subsequence[++k] = arr[i];
			else
				subsequence[getCeil(subsequence, arr[i], k + 1)] = arr[i];
			sol[i] = k + 1;
//			printArray("Subsequence", subsequence, k + 1);
		}

//		printArray("Subsequence", subsequence, k + 1);
//		printArray("Solution", sol, n);
		return sol;
	}

	private static void printArray(String array_name, int[] arr, int n) {
		System.out.println(array_name);
		for (int i = 0; i < n; i++)
			System.out.print(arr[i] + " ");
		System.out.println();
	}

	private static int getCeil(int[] subsequence, int x, int n) {
		int lo = -1, hi = n -1;
		while (hi - lo > 1) {
			int mid = lo + (hi - lo)/2;
			if (subsequence[mid] >= x)
				hi = mid;
			else
				lo = mid;
		}
		return hi;
	}

	private static int[] getReverse(int[] arr, int n) {
		int[] reverse = new int[n];
		for (int i = 1; i <= n; i++) {
			reverse[n - i] = arr[i - 1];
		}
		return reverse;
	}

}

/*
1
7
1 3 6 2 1 4 7

1
7
7 4 1 2 6 3 1

*/
