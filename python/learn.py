import random

# truth table for AND, the only thing the program is shown
data = [((0, 0), 0), ((0, 1), 0), ((1, 0), 0), ((1, 1), 1)]

# start with random weights: it knows nothing
w1 = random.uniform(-1, 1)
w2 = random.uniform(-1, 1)
b  = random.uniform(-1, 1)
lr = 0.1

def predict(x1, x2):
    return 1 if w1 * x1 + w2 * x2 + b > 0 else 0

print("before learning:", [predict(*x) for x, _ in data])

for round_no in range(50):
    mistakes = 0
    for (x1, x2), target in data:
        error = target - predict(x1, x2)
        if error != 0:                  # only learn when wrong
            mistakes += 1
            w1 += lr * error * x1
            w2 += lr * error * x2
            b  += lr * error
    print("round", round_no, "mistakes:", mistakes)
    if mistakes == 0:
        break

print("after learning: ", [predict(*x) for x, _ in data])
print("weights:", w1, w2, b)
