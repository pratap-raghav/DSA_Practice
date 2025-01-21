#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define d 256  // Number of characters in the input alphabet

void search(string pattern, string text, int q) {
    int m = pattern.size();
    int n = text.size();
    int p = 0;  // Hash value for the pattern
    int t = 0;  // Hash value for the text
    int h = 1;

    // The value of h would be "pow(d, m-1) % q"
    for (int i = 0; i < m - 1; i++) {
        h = (h * d) % q;
    }

    // Calculate the hash value of the pattern and the first window of the text
    for (int i = 0; i < m; i++) {
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }

    // Slide the pattern over the text one by one
    for (int i = 0; i <= n - m; i++) {
        // Check if the hash values of the current window of the text and the pattern match
        if (p == t) {
            // Check the characters one by one
            bool match = true;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                cout << "Pattern found at index " << i << endl;
            }
        }

        // Calculate the hash value for the next window of the text
        if (i < n - m) {
            t = (d * (t - text[i] * h) + text[i + m]) % q;

            // If the hash value is negative, convert it to positive
            if (t < 0) {
                t = (t + q);
            }
        }
    }
}

int main() {
    string text = "GEEKS FOR GEEKS";
    string pattern = "GEEK";
    int q = 101;  // A prime number

    search(pattern, text, q);

    return 0;
}
