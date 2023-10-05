#include <bits/stdc++.h>

namespace mlb {
    double inch2cm(double inches) {
        if (inches < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return inches * 2.54; 
    }
    double cm2inch(double centimeters) {
        if (centimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return centimeters * 0.393701; 
    }
    double yard2cm(double yards) {
        if (yards < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return yards * 91.44; 
    }
    double cm2yard(double centimeters) {
        if (centimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return centimeters / 91.44; 
    }
    double mile2km(double miles) {
        if (miles < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return miles * 1.60934; 
    }
    double km2mile(double kilometers) {
        if (kilometers < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return kilometers / 1.60934; 
    }
}

