
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // für die Verwendung von std::transform
#include <limits>

// Hilfsfunktion, um einen String in Kleinbuchstaben umzuwandeln
std::string toLowerCase(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

void Settings() {
    std::cout << " --- Settings ---";

    
}

void LearnVocabular() {
    // Spanisch und Deutsch Vokabellistevariable
    std::vector<std::string> spanisch_V = { "pequenos", "solamente", "escuelas", "asignaturas basicas", "horsas" };
    std::vector<std::string> german_V = { "klein", "nur", "Schule", "Grundfaecher", "Stunden" };
    std::string answer;

    // Begrüße User
    std::cout << "Hola!" << std::endl;
    std::cout << "Vokabeltrainer" << std::endl;

    // Durchlaufe die Vokabelliste
    for (int i = 0; i < spanisch_V.size(); i++) {
        bool correcto = false;

        // Solange die Antwort falsch ist, frage erneut nach
        while (!correcto) {
            std::cout << spanisch_V[i] << " bedeutet auf Deutsch:  ";
            std::getline(std::cin, answer);

            // Konvertiere die eingegebene Antwort und die richtige Antwort in Kleinbuchstaben
            std::string answerLower = toLowerCase(answer);
            std::string correctAnswerLower = toLowerCase(german_V[i]);

            // Überprüfe, ob die eingegebene Antwort korrekt ist
            if (answerLower == correctAnswerLower) {
                std::cout << "Richtig!" << std::endl;
                correcto = true;
            }
            else {
                std::cout << "Falsch! Versuche es erneut." << std::endl;
            }
        }
    }

    // Gib eine Abschlussmeldung aus
    std::cout << "Vokabeltraining abgeschlossen!" << std::endl;

}
void LearnSeatze() {
    // Spanisch und Deutsch Vokabellistevariable
    std::vector<std::string> spanisch_T = { "Me llamo Lukas Kobsch y tengo 16 anos. Me vivo en Waldbroel, Germania.Yo voy en Gesamtschule Waldbroel. Yo hablo aleman y ingles. Me gusta jugar la computdaroa y programar" };
    std::vector<std::string> german_T = { "klein", "nur", "Schule", "Grundfaecher", "Stunden" };
    std::string answer1;

    // Begrüße User
    std::cout << "Hola!" << std::endl;
    std::cout << "SeatzeTrainer" << std::endl;

    // Durchlaufe der Seatze
    for (int i = 0; i < spanisch_T.size(); i++) {
        bool correcto = false;

        // Solange die Antwort falsch ist, frage erneut nach
        while (!correcto) {
            std::cout << " Schreibe Teil " << i << ": ";
            std::getline(std::cin, answer1);

            // Konvertiere die eingegebene Antwort und die richtige Antwort in Kleinbuchstaben
            std::string answerLower = toLowerCase(answer1);
            std::string correctAnswerLower = toLowerCase(spanisch_T[i]);

            // Überprüfe, ob die eingegebene Antwort korrekt ist
            if (answerLower == correctAnswerLower) {
                std::cout << "Richtig!" << std::endl;
                correcto = true;
            }
            else {
                std::cout << "Falsch! Es heisst: " << spanisch_T[i] << ". Du kannst es erneut Versuchen wenn es ganz falsch ist." << std::endl;
            }
        }
    }

    // Gib eine Abschlussmeldung aus
    std::cout << "Vokabeltraining abgeschlossen!" << std::endl;
}

int main() {

    int ChoosenModule;

    std::cout << "Waehle ein Lernmodul (0 , 1 , 2): ";
    std::cin >> ChoosenModule;

   //Modulwaehler 
   { 
        if (ChoosenModule == 0) {
        LearnVocabular();
    }
    else if (ChoosenModule == 1) {
            LearnSeatze();
    }
    else if (ChoosenModule == 2) {
        std::cout << "In entwicklung";
    }
    else {
        std::cout << "Gibbet nicht";
  
        }
    }

    return 0;
}