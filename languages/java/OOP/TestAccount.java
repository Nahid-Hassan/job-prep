class Account {
    int accNo;
    String name;
    float amount;

    void insert(int a, String n, float amt) {
        accNo = a;
        name = n;
        amount = amt;
    }

    void deposit(float amt) {
        amount = amount + amt;
        System.out.println(amt + " deposited!");
    }

    void withdrawal(float amt) {
        if (amount < amt) {
            System.out.println("Insufficient Balance.");
        } else {
            amount = amount - amt;
            System.out.println(amt + " withdrawal!");
        }
    }

    void checkBalance() {
        System.out.println("Balance is " + amount);
    }

    void display() {
        System.out.println(accNo + " " + name + " " + amount);
    }
}

class TestAccount {
    public static void main(String[] args) {
        Account a = new Account();
        a.insert(101, "Nahid", 10);
        a.display();
        a.checkBalance();
        a.deposit(5);
        a.checkBalance();
        a.withdrawal(2);
        a.display();
    }
}