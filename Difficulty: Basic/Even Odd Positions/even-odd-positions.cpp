class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        int sum=0;
        if(date%2==0)
        {
            for(int i=0;i<car.size();i++)
            {
                if(car[i]%2==1)
                sum+=fine[i];
            }
            return sum;
        }
        for(int i=0;i<car.size();i++)
        {
            if(car[i]%2==0)
            sum+=fine[i];
        }
        return sum;
    }
};