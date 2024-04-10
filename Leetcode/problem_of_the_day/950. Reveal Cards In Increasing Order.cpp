class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        std::sort(deck.begin(), deck.end()); // Sort the deck to get the order
        
        std::deque<int> result;
        result.push_front(deck.back()); // Start with the largest card
        
        for (int i = deck.size() - 2; i >= 0; i--) {
            int last_card = result.back();
            result.pop_back(); // Remove the last card
            result.push_front(last_card); // Move it to the front
            result.push_front(deck[i]); // Put the current card to the front
        }
        
        // Convert deque to vector
        return std::vector<int>(result.begin(), result.end());
    }
};
