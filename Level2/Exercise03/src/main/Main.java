package main;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr;
		arr = new int[3];
		
		arr[0] = 1;
		arr[1] = 2;
		arr[2] = 3;
		
		for(int i=0; i<arr.length; i++)
			System.out.println(arr[i]);
		
		try {
		System.out.println(arr[4]);
		}
		catch(Exception e) {
			System.out.println(e.toString());
		}
		
		
		String[] namesArr;
		namesArr = new String[2];
		
		try {
			namesArr[0].length();
		}
		catch(Exception e) {
			System.out.println(e.toString());
		}
		
		namesArr[0] = new String("Hello World1");
		namesArr[1] = new String("Hello World2");
		
		System.out.println(namesArr[0]);
		
		
		int[][] arrOfArr;
		arrOfArr = new int[5][4];
		arrOfArr[0][0] = 1;
		arrOfArr[0][1] = 1;
		arrOfArr[0][2] = 1;
		arrOfArr[0][3] = 1;
		
		System.out.println(arrOfArr[0][0]);
		
		
		
	}

}
