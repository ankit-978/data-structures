def car_listing(car_prices):
  result = ""
  for key,value in car_prices.items():
    result += "{} costs {} dollars".format(key,value)+ "\n"
  return result

print(car_listing({"Kia Soul":19000, "Lamborghini Diablo":55000, "Ford Fiesta":13000, "Toyota Prius":24000}))



animal = "Hippopotamus"
print(animal[3:6])
print(animal[-5])
print(animal[10:])


colors = ["red", "white", "blue"]
colors.insert(2, "yellow")
print(colors)

host_addresses = {"router": "192.168.1.1", "localhost": "127.0.0.1", "google": "8.8.8.8"}
host_addresses.keys()
print(host_addresses)