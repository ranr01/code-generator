#include <iostream>

#include "textcomponent.h"


TextComponent::TextComponent()
    : m_text(""),RO_text("can't touch this")
{
}

TextComponent::TextComponent(std::string const & s)
    : m_text(s),RO_text("can't touch this")
{
}

TextComponent::TextComponent(std::string const & s, int i)
  : m_text(s),RO_text("can't touch this"), myInt(i)
{
}



std::string TextComponent::getText() const
{
    return m_text;
}

std::string TextComponent::getROText() const
{
    return RO_text;
}

void TextComponent::setText(std::string const& value)
{
    m_text = value;
}

void TextComponent::some_function()
{
    std::cout << "Hello World" << std::endl;
}

int myfunc(float x){
  return (int)(x*x);
}
