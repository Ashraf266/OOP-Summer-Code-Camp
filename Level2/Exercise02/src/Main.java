
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Hello World");
		Disc disc1 = new Disc(5,22);
		
		disc1.spin();
		disc1.info();
		
		
		Disc.setCompanyName("Company");
		System.out.println(Disc.getCompanyName());
		
		

	}

}
