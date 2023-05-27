class VarArgs {
    // type - 1: don't need to crate any object.
    // static void printNames(String... args) {
    // for (String name : args) {
    // System.out.println(name);
    // }
    // }

    // type - 2: need to create VarArgs class object to call printNames()
    void printNames(String... args) {
        for (String name : args) {
            System.out.println(name);
        }
    }

    // public static void main(String[] args) {
    //     // type-1
    //     // printNames("Nahid", "Hassan", "Mony");
    //     // printNames("Nahid", "Hassan");

    //     // type-2
    //     VarArgs v = new VarArgs();
    //     v.printNames("Nahid", "Hassan", "Mony");
    // }

    public static void main(String... args) {
        // type-1
        // printNames("Nahid", "Hassan", "Mony");
        // printNames("Nahid", "Hassan");

        // type-2
        VarArgs v = new VarArgs();
        v.printNames("Nahid", "Hassan", "Mony");
    }

}