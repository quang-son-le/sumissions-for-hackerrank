#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) { // i only wrote this function, the main is ineherent to call this function on hacker rank
vector<int>  b(a.size(),1);
   // cout<<d<<endl;
    for (int i=0; i<a.size();i++)
    {  b[i]=(signed int)(a.size()-i-d-1)>=0 ? a[i+d]:a[+i+d-a.size()];
    //cout<<(unsigned int)(a.size()-i-d-1)<<endl;
   // cout<<a[i+d]<<endl;
   // cout<<a[+i+d-a.size()]<<endl;
    }
return b;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nd_temp,nd_buf;
    getline(cin, nd_temp);
//for (int k=0;k<nd_temp.length();k++)
 //   cout<< "no la "<<nd_temp[k]<<endl;
    nd_buf=nd_temp.substr(nd_temp.find(" ")+1);
   // cout<<nd_buf;
    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

   int d = stoi(nd_buf,nullptr,10);
//cout<<d;
    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    vector<int> result = rotLeft(a, d);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
