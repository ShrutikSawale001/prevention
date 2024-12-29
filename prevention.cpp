#include <iostream>
#include <string>

// Enum for cigarette smoke gas types
enum CigaretteSmokeGasType {
    CARBON_MONOXIDE,
    NICOTINE,
    ACETONE,
    ACETALDEHYDE,
    BENZENE
};

// Struct for gas detection data
struct GasDetectionData {
    CigaretteSmokeGasType type;
    float concentration; // Concentration in parts per million (ppm)
};

// Class for cigarette smoke detector
class CigaretteSmokeDetector {
public:
    // Constructor to initialize the detector with optional high power mode
    CigaretteSmokeDetector(bool highPowerMode = false) : highPowerMode_(highPowerMode) {}

    // Function to detect gases in cigarette smoke
    GasDetectionData detectGases() {
        // Simulate gas detection (replace with actual sensor readings)
        GasDetectionData data;
        data.type = NICOTINE;
        data.concentration = 5.2f; // Example concentration in ppm

        if (highPowerMode_) {
            // Increase detection sensitivity in high power mode
            data.concentration *= 1.5;
        }

        return data;
    }

    // Function to remove detected gases using a hypothetical device
    void removeGases(const GasDetectionData& data) {
        std::cout << "Removing " << getGasTypeName(data.type) 
                  << " using Gas Removal Device..." << std::endl;
        // Simulate gas removal (replace with actual device operation)
    }

    // Helper function to get the name of the gas type
    std::string getGasTypeName(CigaretteSmokeGasType type) const {
        switch (type) {
            case CARBON_MONOXIDE: return "Carbon Monoxide";
            case NICOTINE: return "Nicotine";
            case ACETONE: return "Acetone";
            case ACETALDEHYDE: return "Acetaldehyde";
            case BENZENE: return "Benzene";
            default: return "Unknown Gas";
        }
    }

private:
    bool highPowerMode_; // Flag for high power mode
};

int main() {
    // Create a cigarette smoke detector object with high power mode enabled
    CigaretteSmokeDetector detector(true);

    // Detect gases in cigarette smoke
    GasDetectionData data = detector.detectGases();

    // Display the detection results
    std::cout << "Detected Gas: " << detector.getGasTypeName(data.type) << std::endl;
    std::cout << "Concentration: " << data.concentration << " ppm" << std::endl;

    // Remove the detected gases
    detector.removeGases(data);

    return 0;
}
