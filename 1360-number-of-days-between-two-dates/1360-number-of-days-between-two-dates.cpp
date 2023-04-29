class Solution {
public:
    bool is_leap(int year)
    {
        return year%400==0||(year%4==0&&year%100); 
    }
    int calc(string date)
    {
        int year, month, day;
        sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
        int m_days[13] = {0, 31, 28, 31,  30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days = 0;
        for (int i=1900;i<year;i++)
        {
            days+=365+is_leap(i);
        }
        for (int i=1;i<month;i++)
        {
            if (i==2)  days+=28+is_leap(year);
            else
            {
                day+=m_days[i];
            }
        }
        return day + days;
    }
    int daysBetweenDates(string date1, string date2) {
        return abs(calc(date1) - calc(date2)); 
    }
};