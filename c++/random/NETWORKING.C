#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Sigmoid activation function
double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

// Sigmoid derivative
double sigmoid_derivative(double x) {
    return x * (1.0 - x);
}

// Training function
void train(double* inputs, double* outputs, double* weights, int num_samples, int num_features, int num_iterations, double learning_rate) {
    for (int iter = 0; iter < num_iterations; iter++) {
        for (int i = 0; i < num_samples; i++) {
            double weighted_sum = 0.0;
            for (int j = 0; j < num_features; j++) {
                weighted_sum += inputs[i * num_features + j] * weights[j];
            }
            double prediction = sigmoid(weighted_sum);
            double error = outputs[i] - prediction;
            for (int j = 0; j < num_features; j++) {
                weights[j] += learning_rate * error * sigmoid_derivative(prediction) * inputs[i * num_features + j];
            }
        }
    }
}

int main() {
    int num_samples = 4;
    int num_features = 2;
    int num_iterations = 10000;
    double learning_rate = 0.1;

    // Example data
    double inputs[] = {0, 0, 0, 1, 1, 0, 1, 1};
    double outputs[] = {0, 1, 1, 0};
    double weights[] = {0.5, -0.5};

    // Train the model
    train(inputs, outputs, weights, num_samples, num_features, num_iterations, learning_rate);

    // Print the trained weights
    printf("Trained weights: %f, %f\n", weights[0], weights[1]);

    return 0;
}
