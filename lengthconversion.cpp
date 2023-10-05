#include <bits/stdc++.h>

namespace mlb {
    double inch2ft(double inches) {
        if (inches < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return inches / 12.0; 
    }

    double inch2yard(double inches) {
        if (inches < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return inches / 36.0; 
    }

    double inch2mile(double inches) {
        if (inches < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return inches / 63360.0; 
    }

    double ft2yard(double feet) {
        if (feet < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return feet / 3.0; 
    }

    double ft2mile(double feet) {
        if (feet < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return feet / 5280.0; 
    }

    double yard2inch(double yards) {
        if (yards < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return yards * 36.0; 
    }

    double yard2mile(double yards) {
        if (yards < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return yards / 1760.0; 
    }

    double inch2cm(double inches) {
        if (inches < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return inches * 2.54; 
    }

    double inch2mm(double inches) {
        if (inches < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return inches * 25.4; 
    }

    double inch2km(double inches) {
        if (inches < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return inches * 0.0000254; 
    }

    double cm2inch(double centimeters) {
        if (centimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return centimeters * 0.393701; 
    }

    double mm2inch(double millimeters) {
        if (millimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return millimeters * 0.0393701; 
    }

    double km2inch(double kilometers) {
        if (kilometers < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return kilometers * 39370.1; 
    }    

    double ft2cm(double feet) {
        if (feet < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return feet * 30.48; 
    }

    double ft2mm(double feet) {
        if (feet < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return feet * 304.8; 
    }

    double ft2km(double feet) {
        if (feet < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return feet * 0.0003048; 
    }

    double cm2ft(double centimeters) {
        if (centimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return centimeters / 30.48; 
    }

    double mm2ft(double millimeters) {
        if (millimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return millimeters / 304.8; 
    }

    double km2ft(double kilometers) {
        if (kilometers < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return kilometers / 0.0003048; 
    }

    double yard2cm(double yards) {
        if (yards < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return yards * 91.44; 
    }

    double yard2mm(double yards) {
        if (yards < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return yards * 914.4; 
    }

    double yard2km(double yards) {
        if (yards < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return yards * 0.0009144; 
    }

    double cm2yard(double centimeters) {
        if (centimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return centimeters / 91.44; 
    }

    double mm2yard(double millimeters) {
        if (millimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return millimeters / 914.4; 
    }

    double km2yard(double kilometers) {
        if (kilometers < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return kilometers / 0.0009144; 
    }

    double mile2cm(double miles) {
        if (miles < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return miles * 160934.0; 
    }

    double mile2mm(double miles) {
        if (miles < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return miles * 1609340.0; 
    }

    double mile2km(double miles) {
        if (miles < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return miles * 1.60934; 
    }

    double cm2mile(double centimeters) {
        if (centimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return centimeters / 160934.0; 
    }

    double mm2mile(double millimeters) {
        if (millimeters < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return millimeters / 1609340.0; 
    }

    double km2mile(double kilometers) {
        if (kilometers < 0) {
            throw std::invalid_argument("Input value must be non-negative");
        }
        return kilometers / 1.60934; 
    }
}

