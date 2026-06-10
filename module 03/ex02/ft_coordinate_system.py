import math


def get_player_pos():

    while True:

        coords = input("Enter coordinates (x,y,z): ")

        parts = coords.split(",")

        if len(parts) != 3:
            print("Please enter exactly 3 coordinates.")
            continue

        try:
            x = int(parts[0])
            y = int(parts[1])
            z = int(parts[2])
        except ValueError:
            print("Coordinates must be numbers.")
            continue

        return (x, y, z)


player_pos = get_player_pos()

print("\nPlayer position:", player_pos)

print("X:", player_pos[0])
print("Y:", player_pos[1])
print("Z:", player_pos[2])

x, y, z = player_pos

distance_center = math.sqrt(
    x ** 2 +
    y ** 2 +
    z ** 2
)

print("Distance from center:", round(distance_center, 2))

new_pos = get_player_pos()

x1, y1, z1 = player_pos
x2, y2, z2 = new_pos

distance = math.sqrt(
    (x2 - x1) ** 2 +
    (y2 - y1) ** 2 +
    (z2 - z1) ** 2
)

print("Distance between positions:", round(distance, 2))