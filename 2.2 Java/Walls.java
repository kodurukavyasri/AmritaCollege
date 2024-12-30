public class Walls {
    private int height, width, area;

    //This is a default constructor to initialixze the variables.
    public Walls(int pHeight, int pWidth){
        height = pHeight;
        width = pWidth;
        calculateArea(); // calculate the area during initialization
    }

    //To calculate the area 
    public void calculateArea(){
        area = height * width;
    }

    public int getArea(){
        return area;
    }

    public void assignvalues(int pHeight, int pWidth){
        height = pHeight;
        width = pWidth;
    }

    public static void main(String[] args) {
        Walls w = new Walls(3, 4);
        System.out.println("Area of the wall is: " + w.getArea());

        // another calculation
        w.assignvalues(5,3);
        w.calculateArea();
        System.out.println("Area of the wall is: " + w.getArea());

    }
}