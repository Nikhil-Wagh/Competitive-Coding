import java.util.Scanner;

public class IsBinaryMultipleOfThree {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			String s = scanner.next();
			int ans = 0;
			int k = 0;
			for (int i = s.length() - 1; i >= 0; i--, k++) {
				if (s.charAt(i) == '1'){
					if (k % 2 == 0){
						ans += 1;
					}
					else {
						ans += 2;
					}
				}
			}
			System.out.println((ans % 3) == 0 ? 1 : 0);
		}
	}
}
