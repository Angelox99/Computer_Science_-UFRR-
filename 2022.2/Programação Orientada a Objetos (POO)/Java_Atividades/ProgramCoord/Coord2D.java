public class Coord2D {
    private double x;
    private double y;
    

    public void setX(double x) {
        this.x = x;
    }

    public double getX() {
        return this.x;
    }
    
    public void setY(double y) {
        this.y = y;
    }

    public double getY() {
        return this.y;
    }


    public Coord2D(double x, double y) {
        this.setX(x);
        this.setY(y);
    }
     
    
    public String toString() {
        return getX()+", "+getY();
    };

}
