import java.util.Scanner;

public class ExcelSheet {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			StringBuilder ans = new StringBuilder();
			while (n > 0) {
				n--;
				char rem = (char)(n % 26 +  'A');
				ans.insert(0, rem);
				n /= 26;
			}
			System.out.println(ans);
			/*char temp = (char)(n + 'A');
			System.out.println(temp);*/
		}
	}
}
