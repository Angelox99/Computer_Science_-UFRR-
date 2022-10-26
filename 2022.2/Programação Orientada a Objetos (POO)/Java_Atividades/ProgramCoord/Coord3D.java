public class Coord3D extends Coord2D {
    
    private double z;

    
    public void setZ(double z) {
        this.z = z;
    }
    
    public double getZ() {
        return this.z;
    }
    
    
    public Coord3D(double x, double y, double z) {
        super(x, y);
        this.setZ(z);
    }


    public String toString() {
        return super.toString() + ", " + getZ();
    };

}
