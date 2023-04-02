pizza_base: str = "Thin"
pizza_size: int = 12
extra_cheese: bool = True
price: float = 8.23

order_details = f"""
Pizza Base = {pizza_base}, 
Pizza Size = {pizza_size},
Extra Cheese = {extra_cheese},
Price = {price}
"""

print(order_details)