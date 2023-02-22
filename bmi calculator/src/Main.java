public class Main {
    public static void main(String[] args) {
        Adult adult= new Adult("Harry", 24, 80, 1.8);
        Child child = new Child("Eddie", 8, 30, 1.3);
        double adultBMI = adult.calculateBMI();
        double childBMI = child.calculateBMI();
        System.out.println(adult.toString() + ", BMI:" + adultBMI);
        System.out.println(child.toString() + ",BMI:" + childBMI);
    }
}