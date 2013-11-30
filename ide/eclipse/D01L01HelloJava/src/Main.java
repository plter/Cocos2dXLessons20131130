import java.util.ArrayList;


public class Main {

	public static void main(String[] args) {
		
		ArrayList<String> arr = new ArrayList<String>();
		
		arr.add("Hello");
		
		ArrayList<String> arr1 = arr;
		
		arr1.add("World");
		
		
		for (String string : arr1) {
			System.out.println(string);
		}
		
		
		int a = 10;
		int b = a;
		b = 20;
		
		System.out.println(a);
		
		
	}

}
