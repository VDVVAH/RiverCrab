#ifndef _MAPPING_HPP_INCLUDED_
#define _MAPPING_HPP_INCLUDED_

#include <map>

namespace formatter {
    using str = const char*;

    using std::map;
  
    using replacement = std::pair<str, str>;

    map<str, str> replacements = {
        replacement("минус", "-"),
        replacement("плюс", "+"),
        replacement("умножить", "*"),
        replacement("делить", "/"),

        replacement("равно", "="),
        replacement("сравнимо с", "≡"),
        replacement("не равно", "≠"),
        replacement("больше", ">"),
        replacement("меньше", "<"),

        replacement("не", "¬"),
        replacement("и", "∧"),
        replacement("или", "∨"),
        replacement("исключающее или", "⊕"),

        replacement("равносильно", "⇔"),
        replacement("следовательно", "⇒"),

        replacement("факториал", "!"),

        replacement("неизвестно", "?"),
        // replacement(".", "."),
        // replacement("|", "|"),

        // replacement("number", "number"),
        // replacement("bool", "bool"),

        replacement("пустому множеству", "∅"),
        replacement("множеству натуральных чисел", "ℕ"),
        replacement("множеству целых чисел", "ℤ"),
        replacement("множеству рациональных чисел", "ℚ"),
        replacement("множеству вещественных чисел", "ℝ"),
        replacement("множеству комплексных чисел", "ℂ"),
        replacement("множеству кватернионов", "ℍ"),

        replacement("для любого", "∀"),
        replacement("существует", "∃"),
        replacement("пусть", "⊐"),
        replacement("принадлежит", "∈"),
        replacement("из", "∈"),
        replacement("пересекает", "∩"),
        replacement("в объединении с", "∪"),
        replacement("исключая", "∖"),
        replacement("сумма", "∑"),
        replacement("произведение", "∏"),

        // replacement("теорема", "теорема"),
        // replacement("отобразить", "отобразить"),
        // replacement("на", "на"),

        // replacement("", ""), etc
        // replacement("", ""),
        // replacement("", ""),
        // replacement("", ""),
        // replacement("", ""),
        // replacement("", ""),
        // replacement("", ""),
        // replacement("", ""),
        // replacement("", ""),
        // replacement("", "")
    };
}

#endif 