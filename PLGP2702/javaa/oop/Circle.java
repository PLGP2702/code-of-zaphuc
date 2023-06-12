package oop;

public class Circle {
	private double radius;
	private String color;
	
	public Circle (double radius, String color) {
		super();
		this.radius = radius;
		this.color = color;
	}

	//radius
	public double getRadius() {
		return radius;
	}
	public void setRadius(double radius) {
		this.radius = radius;
	}
	//Color
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}
	
	public Circle() {
		super();
		radius = 1.0;
		color = "red";
	}

	public double getcircumference()
	{
		return 2*radius*Math.PI;
	}

	public double getArea() {
		return Math.PI*Math.pow(radius, 2);
	}

	@Override
	public String toString() {
		// TODO #1 Auto-generated method stub
		return String.format("(%d, %d)", radius, color);
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
	}
}

