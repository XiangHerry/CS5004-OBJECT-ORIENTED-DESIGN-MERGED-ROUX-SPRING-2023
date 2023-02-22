public class Adult extends Person implements BMICalculator {
    /**
     * constructor for adult class. No need to override Person method of calcalateBMI.
     * @param name
     * @param age
     * @param weight
     * @param height
     */
    public Adult(String name, int age, double weight, double height){
        super(name, age, weight, height);
    }


}
