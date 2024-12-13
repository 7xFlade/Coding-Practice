arr = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
def rand_letter_gen(arr):
    import random
    i = random.randint(0, 25)
    print(arr[i])
rand_letter_gen(arr)

# def rand_letter_gen():
#     import random
#     return random.choice(arr)
# print(rand_letter_gen())