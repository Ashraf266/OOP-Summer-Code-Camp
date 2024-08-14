
public class Disc {
	
	private int size;
	private int numberOfPins;
	private static String COMPANY_NAME;
	
	public Disc()
	{
		size = 0;
		numberOfPins = 0;
	}
	
	public Disc(int size, int numberOfPins)
	{
		this.size = size;
		this.numberOfPins = numberOfPins;
	
	}
	
	public void spin() {
		System.out.println("Disc is spinning...");
	}
	
	public void info() {
		System.out.println("Size: "+size);
		System.out.printf("Number of Pins: %d\n",numberOfPins);
	}
	
	public static void setCompanyName(String name)
	{
		COMPANY_NAME= name;
	}
	
	public static String getCompanyName()
	{
		return COMPANY_NAME;
	}

}
