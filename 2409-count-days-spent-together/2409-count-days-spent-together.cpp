class Solution {
private:
    typedef enum month{
        JAN = 1,
        FEB = 2,
        MAR = 3, 
        APR = 4,
        MAY = 5,
        JUN = 6, 
        JUL = 7, 
        AUG = 8,
        SEP = 9,
        OCT = 10,
        NOV = 11,
        DEC = 12
    } month_t;
    static constexpr int daysInMonth[13] = {
        [0] = 0,
        [JAN] = 31,
        [FEB] = 28,
        [MAR] = 31,
        [APR] = 30, 
        [MAY] = 31,
        [JUN] = 30,
        [JUL] = 31,
        [AUG] = 31,
        [SEP] = 30,
        [OCT] = 31,
        [NOV] = 30,
        [DEC] = 31
    };
    int convertToDaysInNonLeapYear(string mm_dd){
        month_t thisMonth = static_cast<month_t>(stoi(mm_dd.substr(0, 2)));
        int daysInThisMonth = stoi(mm_dd.substr(3, 2));

        int daysInMonthsBeforeThisMonth = 0;
        for (int m = JAN; m < static_cast<int>(thisMonth); m++){
            daysInMonthsBeforeThisMonth += daysInMonth[m];
        }

        return daysInMonthsBeforeThisMonth + daysInThisMonth;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int i32AliceArrive = convertToDaysInNonLeapYear(arriveAlice);
        int i32AliceLeave = convertToDaysInNonLeapYear(leaveAlice);
        int i32BobArrive = convertToDaysInNonLeapYear(arriveBob);
        int i32BobLeave = convertToDaysInNonLeapYear(leaveBob);

        int start = max(i32AliceArrive, i32BobArrive);
        int end   = min(i32AliceLeave,  i32BobLeave);

        int overlap = max(0, end - start + 1);
        return overlap;
    }
};