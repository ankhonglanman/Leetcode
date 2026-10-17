/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> &employees, int id) {
        int res = 0;
        unordered_map<int, Employee*> empMap;
        
        for(const auto& employee : employees){
            empMap[employee->id] = employee;
        }

        queue<Employee*> empQ;
        empQ.push(empMap[id]);

        while(!empQ.empty()){
            Employee* cur = empQ.front();
            empQ.pop();
            res += cur->importance;

            for(const auto& subId : cur->subordinates){
                empQ.push(empMap[subId]);
            }
        }

        return res;
    }
};