#ifndef _LEXER_HPP_INCLUDED_
#define _LEXER_HPP_INCLUDED_

#include "Lang/Lexer/Token.hpp"

namespace lexer {
    class Lexer {
    private:
        const int max_size = 10000;
        iterator begin;
        const Token* tokens;
        bool TOKENIZED = false;

    public:
        Lexer(iterator);
        Lexer(Lexer&);
        Lexer(Lexer&&);
        Lexer& operator=(Lexer&);
        Lexer& operator=(Lexer&&);
        ~Lexer();

        Token* tokenize();
        Token* tokenize(iterator);

        class TokenIterator {
        // InputIterator
        private:
            const Token* ptr;

        public:
            TokenIterator(const Token*);

            const Token& operator*() const;
            const Token& operator++() const;
            const Token& operator++(int) const;
            const bool operator==(const TokenIterator&) const;
        };

        const TokenIterator& begin() const;
        const TokenIterator& end() const;
    };
}

#endif