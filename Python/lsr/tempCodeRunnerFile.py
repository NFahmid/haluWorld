import numpy as np
import matplotlib.pyplot as plt
import random

#Generates 'n' random (x, y) coordinates that follow a linear pattern with noise and outliers.
def generate_linear_coordinates(n=100):

    # Generate a random slope (m) and intercept (c) for the linear equation y = mx + c
    m = random.randint(-10, 10)  # Slope in the range [-10, 10]
    c = random.randint(-20, 20)  # Intercept in the range [-20, 20]

    # Define the standard deviation of noise (random variations in y-values)
    noise_std = random.randint(10, 50)

    # Generate 'n' evenly spaced x-values between 0 and 50
    x_values = np.linspace(0, 50, n)

    # Compute y-values using the equation y = mx + c and add Gaussian noise
    y_values = m * x_values + c + np.random.normal(0, noise_std, size=len(x_values))

    # Convert (x, y) values to a list of integer coordinate pairs
    coordinates = [(int(x), int(y)) for x, y in zip(x_values, y_values)]

    # Determine the normal range of y-values
    min_y, max_y = min(y_values), max(y_values)

    # Introduce outliers by randomly replacing 0% to 10% of the points
    num_outliers = random.randint(0, int(0.1 * n))  # Random number of outliers (0 to 10% of n)

    for _ in range(num_outliers):
        idx = random.randint(0, n - 1)  # Pick a random index in the dataset
        outlier_x = random.randint(0, 50)  # Assign a random x-value in the range [0, 50]

        # Generate an outlier y-value that is far outside the normal y range
        outlier_y = random.choice([
            random.randint(int(max_y + 50), int(max_y + 100)),  # High outlier
            random.randint(int(min_y - 100), int(min_y - 50))   # Low outlier
        ])

        # Replace the chosen index with the outlier
        coordinates[idx] = (outlier_x, outlier_y)

    return coordinates