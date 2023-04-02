# match is like switch in c, c++

# fav_color: str = input("Enter your favorite color: ").lower()
fav_color = input("Enter your favorite color: ").lower()

match fav_color:
    case "black":
        print(f"Your favorite color is Black")
    case "green":
        print(f"Your favorite color is Green")
    case _: # default case
        print(f"Your favorite color is {fav_color.title()}")