class Solution {
public:
    int fun(const string& timeStr){
        int hr = stoi(timeStr.substr(0,2));
        int min = stoi(timeStr.substr(3,2));
        int sec = stoi(timeStr.substr(6,2));
        return (hr*3600)+(min*60)+sec;
    }
    int secondsBetweenTimes(string startTime, string endTime) {
        int st = fun(startTime);
        int end= fun(endTime);
        return end - st;
    }
};