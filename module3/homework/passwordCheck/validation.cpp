#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

#include "validation.hpp"

std::string getErrorMessage(const int error)
{
    switch (error)
    {
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

bool doesPasswordsMatch(const std::string &password, const std::string &repeatedPassword)
{

    return !(password.compare(repeatedPassword));
}

int checkPasswordRules(const std::string &password)
{
    if (password.size() < 9)
        return PasswordNeedsAtLeastNineCharacters;
    if (!std::any_of(password.begin(), password.end(), [](unsigned char c) {
            return std::isdigit(c);
        }))
    {
        return PasswordNeedsAtLeastOneNumber;
    }
    if (!std::any_of(password.begin(), password.end(), [](unsigned char c) {
            return std::ispunct(c);
        }))
    {
        return PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (!std::any_of(password.begin(), password.end(), [](unsigned char c) {
            return std::isupper(c);
        }))
    {
        return PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return Ok;
}

int checkPassword(const std::string &password, const std::string &repeatedPassword)
{
    if (doesPasswordsMatch(password, repeatedPassword))
    {
        return checkPasswordRules(password);
    }

    return PasswordsDoesNotMatch;
}