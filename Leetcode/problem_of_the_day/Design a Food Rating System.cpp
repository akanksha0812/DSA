class FoodRatings {
public:
    map<string, pair<string,int>> foodtocuisinesandrating;
    map<string, map<int, set<string>>> cuisinetoratingandfood;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++){
            foodtocuisinesandrating[foods[i]]={cuisines[i], ratings[i]};
            cuisinetoratingandfood[cuisines[i]][ratings[i]].insert(foods[i]);
        }
    }
    
    void changeRating(string food, int newRating) {
        auto foodinfo = foodtocuisinesandrating.find(food);
        string cuisine= foodinfo->second.first;
        int oldrating = foodinfo->second.second;
        foodinfo->second.second= newRating;

        cuisinetoratingandfood[cuisine][oldrating].erase(food);
        if(cuisinetoratingandfood[cuisine][oldrating].empty()){
            cuisinetoratingandfood[cuisine].erase(oldrating);
        }

        cuisinetoratingandfood[cuisine][newRating].insert(food);
    }
    
    string highestRated(string cuisine) {
        return *cuisinetoratingandfood[cuisine].rbegin()->second.begin();
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
