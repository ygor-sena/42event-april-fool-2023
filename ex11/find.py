import requests

def main():
	url = "https://pokeapi.co/api/v2/pokemon/"
	pk = input("Enter the name of a Pokemon: ").lower()

	try:
		response = requests.get(url + str(pk))
	except requests.HTTPError:
		print("Could not connect to the given URL.")  
	try:
		pokeinfo = response.json()
		print("Name:", pokeinfo["name"].capitalize())
		pk_ability = [ability["ability"]["name"].capitalize() for ability in pokeinfo["abilities"]]
		print("Abilities:")
		for a in pk_ability:
			print("-", a)
	except Exception:
		print("Could not write in JSON format. Pokemon doesn't exist.")

if __name__ == '__main__':
	main()
