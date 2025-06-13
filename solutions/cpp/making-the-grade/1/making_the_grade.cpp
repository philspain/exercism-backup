#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> scores;
    for(int i = 0; i < student_scores.size(); i++ ) {
        double score = student_scores.at(i);
        int cast = static_cast<int>(score);
        scores.push_back(cast);
    }

    return scores;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int failed = 0;
    for(int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] <= 40) failed++;
    }

    return failed;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> best;
    for(int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] >= threshold) best.push_back(student_scores[i]);
    }

    return best;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int interval = (highest_score - 40) / 4;
    std::array<int, 4> grades;
    int start = 41;
    for(int i = 0; i <= 3; i++) {
        grades[i] = start + (interval * i);
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> students;
    for(int i = 0; i < student_scores.size(); i++) {
        students.push_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }

    return students;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string name = "";
    for(int i = 0; i < student_scores.size(); i++) {
        if(name != "") break;
        if(student_scores[i] == 100) name = student_names[i];
    }
    
    return name;
}