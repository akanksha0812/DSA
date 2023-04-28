class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int reach=arrivalTime+delayedTime;
        if(reach==24){
            return 0;
        }else if(reach>24){
            return reach-24;
        }
        else{
            return arrivalTime+delayedTime;
        }
    }
};