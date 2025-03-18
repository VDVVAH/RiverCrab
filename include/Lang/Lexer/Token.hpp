#ifndef _TOKEN_HPP_INCLUDED_
#define _TOKEN_HPP_INCLUDED_

namespace lexer {
    enum class TokenType {
            // OPERATORS
            MINUS,              // '-'
            PLUS,               // '+'
            MUL,                // '*'
            DIV,                // '/'

            EQUAL,              // '='
            IDENTICAL,          // '≡'
            NOT_EQUAL,          // '≠'
            GREATER,            // '>'
            LOWER,              // '<'
            GREATER_EQ,         // '≥'
            LOWER_EQ,           // '≤'

            NOT,                // '¬'
            AND,                // '∧'
            OR,                 // '∨'
            XOR,                // '⊕'

            EQVIVALENT,         // '⇔'
            CONSEQUENSE,        // '⇒'

            FACTORIAL,          // '!'

            QUESTION,           // '?'
            POINT,              // '.'
            STREAK,             // '|'

            // DATA
            NUMBER_LITERAL,     // R"[0123456789]+"
            BOOLEAN_LITERAL,    // R"[(истина)(ложь)]"

            // SETS
            EMPTY,              // '∅'
            NATURAL_NUMBERS,    // 'ℕ'
            INTEGERS,           // 'ℤ'
            RATIONAL_NUMBERS,   // 'ℚ'
            REAL_NUMBERS,       // 'ℝ'
            COMPLEX_NUMBERS,    // 'ℂ'
            QUATERNIONS,        // 'ℍ'

            // SPECIAL_SYMBOLS
            FOREACH,            // '∀'
            EXISTS,             // '∃'
            LET,                // '⊐'
            BELONG,             // '∈'
            INTERSECTION,       // '∩'
            UNION,              // '∪'
            EXCLUSION,          // '∖'
            SIGMA_SUM,          // '∑'
            PI_MUL,             // '∏'
            
            // KEYWORDS
            THEOREME,           // "теорема"
            SHOW,               // "отобразить"
            ON,                 // "на"

            // SEPARATORS
            LPAREN,             // '('
            RPAREN,             // ')'
            COMMA,              // ','
            SEMICOLON,          // ';'
            COLON,              // ':'
            LBRACKET,           // '['
            RBRACKET,           // ']'
            LBRACE,             // '{'
            RBRACE,             // '}'
            ELLIPSIS,           // '…'

            // OTHER
            NAME,
            EOF
    };

    using iterator = const char*;

    class Token {
    private:
        TokenType type;
        iterator begin_iterator;
        iterator end_iterator;
        unsigned long long id;

    public:
        explicit Token(iterator);
        Token(Token&);
        Token(Token&&);
        Token& operator=(Token&);
        Token& operator=(Token&&);
        ~Token();

        TokenType getType() const;
        iterator getValue() const;
        iterator begin() const;
        iterator end() const;
        unsigned long long getId() const;
    };
}

#endif 