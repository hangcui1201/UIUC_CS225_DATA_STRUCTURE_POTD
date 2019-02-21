#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool isValid(string input) {

    stack<char> st;

    cout << input << endl;

    for(char& c : input) {

        if(c == '(' || c == '{' || c == '['){

            st.push(c);

        } else {

            if(c == ')') {

                if(st.empty()){
                    return false;
                }   

                if(st.top() == '('){
                    st.pop();
                } else {
                    return false;
                }

            }

            if(c == ']') {

                if(st.empty()){
                    return false;
                }   

                if(st.top() == '['){
                    st.pop();
                } else {
                    return false;
                }
            }

            if(c == '}') {

                if(st.empty()){
                    return false;
                }   
                
                if(st.top() == '{'){
                    st.pop();
                } else {
                    return false;
                }
            }

        }
        
    }

    return st.empty();    // modify this!

}