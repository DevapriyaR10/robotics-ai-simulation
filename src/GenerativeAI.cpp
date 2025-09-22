#include "GenerativeAI.h"
#include <iostream>

std::string GenerativeAI::suggestNextMove(const std::string& context) {
    if (context == "obstacle") {
        std::cout << "[AI] Suggestion: Rotate Right\n";
        return "right";
    }
    std::cout << "[AI] Suggestion: Move Forward\n";
    return "forward";
}
