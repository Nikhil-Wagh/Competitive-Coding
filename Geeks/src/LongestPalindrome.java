import java.util.Scanner;

public class LongestPalindrome {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			String s = scanner.next();
			int n = s.length();
			boolean[][] arr = new boolean[n + 1][n + 1];

			for (int i = 0; i < n; i++) {
				arr[i][i] = true;
				if (i < n - 1 && s.charAt(i) == s.charAt(i + 1))
					arr[i][i + 1] = true;
			}

			for (int len = 2; len < n; len++){
				for (int i = 0; i < n - len; i++) {
					if (s.charAt(i) == s.charAt(i + len) && arr[i + 1][i + len - 1]){
						arr[i][i + len] = true;
					}
				}
			}

			/*for (int i = 0; i < n; i++) {
				for(int j = 0; j < n; j++)
					System.out.print(arr[i][j] + " ");
				System.out.println();
			}*/

			int max = Integer.MIN_VALUE;
			int x = 0, y = 0;
			for(int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					if (arr[i][j]) {
						int current = j - i + 1;
						if (max < current){
							max = current;
							x = i;
							y = j;
						}
					}
				}
			}

//			System.out.println(x + " " + y + " " + max);
			System.out.println(s.substring(y - max + 1, y + 1));
		}
	}
}
