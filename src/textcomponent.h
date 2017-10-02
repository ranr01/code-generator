#pragma once

#include <string>

int myfunc(float x);

enum MYENUM { OPTION_1 = 0, OPTION_2 = 1, ALL = 2};

class TextComponent
{
public:
    TextComponent();

    TextComponent(std::string const & s);

    TextComponent(std::string const & s, int i);

    void some_function();

    std::string getText() const;
    void setText(const std::string& value);

    std::string getROText() const;

    int myInt;

private:
    std::string m_text, RO_text;

};
