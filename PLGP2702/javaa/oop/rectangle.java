package oop;

public class rectangle {
    float length;
    float width;

    public rectangle()
    {
        length = width = 1;
    }
    public rectangle(float length, float width) 
    {
        this.length = length;
        this.width = width;
    }

    public float getLength() 
    {
        return length;
    }

    public void setLength(float length) 
    {
        this.length = length;
    }

    public float getWidth() 
    {
        return width;
    }

    public void setWidth(float width) 
    {
        this.width = width;
    }

    /**
     * @return
     */
    public double getArea()
    {
        return length * width;
    }

    public double getPerimeter()
    {
        return (length * width) * 2;
    }

    @Override
    public String toString() {
        // TODO Auto-generated method stub
        return String.format("rectangle[lenght" + length + ",width"+ width + "]");
    }
}
