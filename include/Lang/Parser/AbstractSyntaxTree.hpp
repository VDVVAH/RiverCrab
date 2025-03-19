#ifndef _ABSTRACT_SYNTAX_TREE_HPP_INCLUDED_
#define _ABSTRACT_SYNTAX_TREE_HPP_INCLUDED_

#include "Lang/Lexer/Token.hpp"

namespace parser {
    class Node {
    protected:
        lexer::Token value;
        const Node* parent;
        const Node* childrens;
        const int number_of_childrens;

    public:
    
    };
}

#endif