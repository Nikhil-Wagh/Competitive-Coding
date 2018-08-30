import java.util.Scanner;

public class TrappingRainWater {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int[] arr = new int[n];
			for (int i = 0; i < n; i++) {
				arr[i] = scanner.nextInt();
			}

			int[] left = new int[n];
			int[] right = new int[n];
			int max = Integer.MIN_VALUE;
			for (int i = 0; i < n; i++) {
				max = Math.max(max, arr[i]);
				left[i] = max;
			}
			max = Integer.MIN_VALUE;
			for (int i = n - 1; i >= 0; i--) {
				max = Math.max(max, arr[i]);
				right[i] = max;
			}

			int ans = 0;
			for (int i = 0; i < n; i++) {
				ans += Math.max(Math.min(left[i], right[i]) - arr[i], 0);
			}
			System.out.println(ans);
		}
	}
}
