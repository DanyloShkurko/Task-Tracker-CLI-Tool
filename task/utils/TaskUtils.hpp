#pragma once

#include <string>

class TaskUtils {
  private:
    std::string monthToString(int &idx) {
        switch (idx) {
        case 0:
            return "January";
        case 1:
            return "February";
        case 2:
            return "March";
        case 3:
            return "April";
        case 4:
            return "May";
        case 5:
            return "June";
        case 6:
            return "July";
        case 7:
            return "August";
        case 8:
            return "September";
        case 9:
            return "October";
        case 10:
            return "November";
        case 11:
            return "December";
        default:
            return "Undefined";
        }
    }

  public:
    TaskUtils() = default;
    ~TaskUtils() = default;

    std::string dateToString(std::tm *dt) {
        int d_y = dt->tm_year + 1900;
        int d_mon = dt->tm_mon + 1;
        int d_day = dt->tm_mday;
        int d_wday = dt->tm_wday;

        int d_h = dt->tm_hour;
        int d_m = dt->tm_min;

        switch (d_wday) {
        case 0: {
            return "Sunday " + std::to_string(d_day) + "th of " +
                   monthToString(d_mon) + " at " + std::to_string(d_h) + ":" +
                   std::to_string(d_m);
        }
        case 1: {
            return "Monday " + std::to_string(d_day) + "th of " +
                   monthToString(d_mon) + " at " + std::to_string(d_h) + ":" +
                   std::to_string(d_m);
        }
        case 2: {
            return "Tuesday " + std::to_string(d_day) + "th of " +
                   monthToString(d_mon) + " at " + std::to_string(d_h) + ":" +
                   std::to_string(d_m);
        }
        case 3: {
            return "Wednesday " + std::to_string(d_day) + "th of " +
                   monthToString(d_mon) + " at " + std::to_string(d_h) + ":" +
                   std::to_string(d_m);
        }
        case 4: {
            return "Thursday " + std::to_string(d_day) + "th of " +
                   monthToString(d_mon) + " at " + std::to_string(d_h) + ":" +
                   std::to_string(d_m);
        }
        case 5: {
            return "Friday " + std::to_string(d_day) + "th of " +
                   monthToString(d_mon) + " at " + std::to_string(d_h) + ":" +
                   std::to_string(d_m);
        }
        case 6: {
            return "Saturday " + std::to_string(d_day) + "th of " +
                   monthToString(d_mon) + " at " + std::to_string(d_h) + ":" +
                   std::to_string(d_m);
        }
        defauls: { return "Undefined week day"; }
        }
        return "";
    }
};
