package Assigments.Lab3;

public class walls {
    private int height, width;

    //This is a default constructor to initialixze the variables.
    public walls(int pheight, int pWidth){
        height = pheight;
        width = pWidth;
        calculateArea();
    }

    //To calculate the area 
    public void calculateArea(){
        System.out.println(height * width);
    }

    public static void main(String[] args) {
        walls w = new walls(3,4);
        //w.calculateArea();
    }
}
