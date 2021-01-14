class Solution {
public:
    
    int numRescueBoats(vector<int>& people, int limit) {
        int num_of_boats = 0; 
        //sort 
        sort(people.begin(), people.end()); 
        //two indices, one pointing at the left and the right 
        int left_hand = 0, right_hand = people.size()-1; 
        //main alg: try to pair the rightmost person (heaviest) with the leftmost (lightest) 
        while (left_hand <= right_hand){
            //if the rightmost+leftmost is within the limit, allocate one boat
            if (people[left_hand] + people[right_hand] <= limit){
                left_hand++; 
            }
            //regarless of whether or not the predicate passes, move to the next rightmost and increase boatcount; 
            right_hand--; 
            num_of_boats++; 
        }
        return num_of_boats;     
    }
};