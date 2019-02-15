// your code here
#pragma once

#include <string>
#include "Foo.h"

namespace potd {

    class Bar{
        public:
            Bar(std::string);
            Bar(const Bar &other);
            Bar & operator=(const Bar &other);
            ~Bar();
            std::string get_name();

        private:
            Foo * f_;


    };

}