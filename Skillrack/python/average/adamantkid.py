#if icecream word gets repeated the defined positions if they have same character then return yes
def check_positions(s, x, y):
    n = len(s)
    if n == 0:
        print("invalidinput")
        return

    # convert to 0-based index properly
    char_x = s[(x - 1) % n]
    char_y = s[(y - 1) % n]

    if char_x == char_y:
        print("yes")
    else:
        print("no")


# Input
s = input("Enter string: ").strip()
x, y = map(int, input("Enter two positions (x y): ").split())

check_positions(s, x, y)
