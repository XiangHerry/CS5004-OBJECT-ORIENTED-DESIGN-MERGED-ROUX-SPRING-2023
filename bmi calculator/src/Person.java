public abstract class Person implements BMICalculator{
    private String name;
    private int age;
    private double weight;
    private double height;

    /**
     * constructor for human properties
     * @param name
     * @param age
     * @param weight
     * @param height
     */
    public Person(String name, int age, double weight, double height){
        this.name = name;
        this.age = age;
        this.weight = weight;
        this.height = height;
    }

    /**
     * getter
     * @return get the person name
     */
    public String getName(){
        return name;
    }

    /**
     * getter
     * @return get the age of person
     */
    public int getAge(){
        return age;
    }

    /**
     * getter
     * @return the person weight
     */
    public double getWeight(){
        return weight;
    }

    /**
     * getter
     * @return the person height
     */
    public double getHeight(){
        return height;
    }

    /**
     * override the calculateBMI method of BMICalculator class.
     * @return according to the formula.
     */
    @Override
    public double calculateBMI() {
        return this.weight / (this.height * this.height);
    }



}
