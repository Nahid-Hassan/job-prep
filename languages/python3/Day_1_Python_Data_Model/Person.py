class Person:
    def __init__(self, name: str, age: int) -> None:
        self.name = name
        self.age = age

    def __str__(self) -> str:
        # print
        return f"{self.name} is {self.age} years old."

    def __repr__(self) -> str:
        # repr
        return f"Person(name={self.name}, age={self.age})."

    def __eq__(self, __value: object) -> bool:
        # == equality check between two Person class object
        if isinstance(__value, Person):
            return self.name == __value.name and self.age == __value.age
        return False


person = Person("Nahid", 23.2)
print(person)

print(repr(person))

print(person == Person("Hassan", 23.2))
print(person == Person("Nahid", 23.2))
