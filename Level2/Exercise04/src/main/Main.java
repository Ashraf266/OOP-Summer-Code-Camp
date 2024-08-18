package main;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String str1 = new String("hi");
		String str2 = "hi";
		
		/* different references */
		System.out.println(str1 == str2);
		
		/* Compare Content */
		System.out.println(str1.equals(str2));
		
		System.out.println(str1.equalsIgnoreCase(str2));
		
		
		str1 += " Ashraf";
		str2 = str2.concat(" Ashraf");
		
		System.out.println(str1);
		System.out.println(str2);
		
		String s1 = "welcome";
		String s2 = "welcome";
		
		/* same refrence */
		System.out.println(s1 == s2);
		
		s2 = "hi";
		
		System.out.println(s1 == s2);
		
		
		
		
	}

}
