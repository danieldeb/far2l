#pragma once




/*std::u16string ToUTF16(const char *pc);
std::u16string ToUTF16(const std::string &s);
std::wstring ToWide(const std::string &s);
std::string FromUTF16(const char16_t *s);
std::string FromUTF16(const wchar_t *pw);*/

void RectifyPath(std::string &s);
std::string ConsumeWinPath(const wchar_t *pw);
void AppendAndRectifyPath(std::string &s, const char *div, LPCWSTR append);
bool MatchWildcard(const char *string, const char *wild);
bool MatchWildcardICE(const char *string, const char *wild);//english-only IC

void WinPortInitWellKnownEnv();
