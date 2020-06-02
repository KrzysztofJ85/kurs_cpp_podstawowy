#include "validation.hpp"

#include <algorithm>

std::string getErrorMessage(const int error) {
    switch (error) {
    case 0:
        return "OK";
    case 1:
        return "Password Needs At Least Nine Characters";
    case 2:
        return "Password Needs At Least One Number";
    case 3:
        return "Password Needs At Least One Special Character";
    case 4:
        return "Password Needs At Least One Uppercase Letter";
    }

    return "Passwords Does Not Match";
}

bool doesPasswordsMatch(const std::string& password, const std::string& repeatedPassword) {
    return (password.compare(repeatedPassword) == 0);
}
