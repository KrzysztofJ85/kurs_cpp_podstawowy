#pragma once

#include <string>

enum ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoesNotMatch
};

std::string getErrorMessage(const int error);

bool doesPasswordsMatch(const std::string& password, const std::string& repeatedPassword);

int checkPasswordRules(const std::string& password);

int checkPassword(const std::string& password, const std::string& repeatedPassword);
