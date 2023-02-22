public class Child extends Person {
    /**
     * constructor for child class
     * @param name
     * @param age
     * @param weight
     * @param height
     */
    public Child(String name, int age, double weight, double height){
        super(name, age, weight, height);
    }

    /**
     * according to the formula specified for child. and then rewrite the method.
     * @return the BMI.
     */
    @Override
    public double calculateBMI(){
        double height = getHeight() ;
        double weight = getWeight();
        return 1.3 * weight / (height * height) + 0.3;
    }

}
