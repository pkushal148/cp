#include <iostream>
#include <vector>
#include <queue>

std::vector<int> construct_sequence(int n, int k) {
    // Create a sequence array with n zeros
    std::vector<int> sequence(n, 0);
    
    // Queue to distribute the bits evenly
    std::queue<int> indices;
    for (int i = 0; i < n; i++) {
        indices.push(i);
    }
    
    // Iterate through the binary representation of k
    int bit_position = 0;
    while (k > 0) {
        // Check if the least significant bit is set
        if (k & 1) {
            // If the bit is set, distribute the value 2^bit_position
            int val = 1 << bit_position;
            
            /* Distribute the value_to_distribute among integers
            for (int i = 0; i < value_to_distribute; i++) {
                // Get the current index from the queue
                int index = indices.front();
                indices.pop();
                
                // Add the value to the integer at this index
                sequence[index]++;
                
                // Push the index back to the queue to be used again
                indices.push(index);
            }*/
            std::cout<<val<<" ";
        }
        
        // Move to the next bit position
        k >>= 1;
        bit_position++;
    }
    
    return sequence;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        
        std::vector<int> result = construct_sequence(n, k);
        
        // Print the result
        for (int i = 0; i < n; i++) {
            std::cout << result[i];
            if (i < n - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}

