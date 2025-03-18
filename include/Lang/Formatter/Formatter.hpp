#ifndef _FORMATTER_HPP_INCLUDED_
#define _FORMATTER_HPP_INCLUDED_

#include <sstream>

#include "Lang/Formatter/Mapping.hpp"

namespace formatter {
    using std::istringstream;
    using std::ostringstream;

    class Formatter {
    private:
        const char* source;
        const char* drain;

        istringstream sin;
        ostringstream sout;

    public:
        explicit Formatter(const char*, const char*);
        Formatter(Formatter&);
        Formatter(Formatter&&);
        Formatter& operator=(Formatter&);
        Formatter& operator=(Formatter&&);
        ~Formatter();

        void formatting();

        friend Formatter& operator<<(const char*, Formatter&);
        Formatter& operator<<(const char*);
    };
}

#endif 