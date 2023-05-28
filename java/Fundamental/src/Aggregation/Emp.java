package Aggregation;

public class Emp {
    int id;
    String name;
    Address address;

    Emp(int id, String name, Address address) {
        this.id = id;
        this.name = name;
        this.address = address;
    }

    void display() {
        System.out.println(id + " " + name);
        System.out.println(address.city + " " + address.state + " " + address.country); 
    }

    public static void main(String[] args) {
        Address a = new Address("Jamalpur", "Dhaka", "Bangladesh");

        Emp e = new Emp(1, "Nahid", a);
        e.display();
    }
}
