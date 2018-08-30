import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class WordBreak {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			ArrayList<String> arr = new ArrayList<>();
			for (int i = 0; i < n; i++)
				arr.add(scanner.next());
			String str = scanner.next();

			arr.sort(Comparator.comparingInt(String::length));
			/*for (int i = 0 ; i < n; i++)
				System.out.println(arr.get(i));
			System.out.println(str);*/

			boolean[] sol = new boolean[str.length() + 1];
			sol[0] = true;
			for (int i = 1; i <= str.length(); i++) {
				for (int j = 0; j < n; j++) {
					String current = arr.get(j);
					if (i < current.length()) {
						break;
					}
					if (current.equals(str.substring(i - current.length(), i))) {
						sol[i] = sol[i - current.length()];
					}
				}
			}

			System.out.println(sol[str.length()] ? 1 : 0);
		}
	}
}
