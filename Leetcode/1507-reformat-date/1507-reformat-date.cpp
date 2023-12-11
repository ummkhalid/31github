class Solution {
public:
    string month_f(string month){
        if(month=="Jan") return "01";
        else if(month=="Feb") return "02";
        else if(month=="Mar") return "03";
        else if(month=="Apr") return "04";
        else if(month=="May") return "05";
        else if(month=="Jun") return "06";
        else if(month=="Jul") return "07";
        else if(month=="Aug") return "08";
        else if(month=="Sep") return "09";
        else if(month=="Oct") return "10";
        else if(month=="Nov") return "11";
        else  return "12";
    }
    
    string reformatDate(string date) {
       string d = "";
       string m = "";
       string y = "";
       d+=date[0];
        if(isdigit(date[1]))
        d+=date[1];
        else d.replace(0, 0, "0");
        int a=date.find(' ');
        m+=date.substr(a+1,3);
        int b=date.rfind(' ');
        y+=date.substr(b+1,4);
        return y+"-"+ month_f(m)+"-"+d;


    
    }
};
