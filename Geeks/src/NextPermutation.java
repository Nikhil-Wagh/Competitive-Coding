import java.util.*;

public class NextPermutation {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int[] arr = new int[n];
			for (int i = 0; i < n; i++) {
				arr[i] = scanner.nextInt();
			}

			int i, j;
			i = n - 2;
			while (i >= 0) {
				if(arr[i] < arr[i + 1])
					break;
				i--;
			}
			if (i < 0) {
				for (i = n - 1; i >= 0; i--)
					System.out.print(arr[i] + " ");
				System.out.println();
			}
			else {
				j = n - 1;
				while (j >= i) {
					if (arr[j] > arr[i])
						break;
					j--;
				}

				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

				i++;
				j = n - 1;
				while (i < j) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					i++;
					j--;
				}

				for (i = 0; i < n; i++) {
					System.out.print(arr[i] + " ");
				}
				System.out.println();
			}
		}
	}
}
