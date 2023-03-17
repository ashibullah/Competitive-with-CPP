#include<iostream>
#include<string>

using namespace std;

bool isValidTag(string tag){
    int sum=0,count=1;
    for (int i = 0; i < tag.size(); i++)
    {
        if (count ==1 && isdigit(tag[i]) && i<tag.size()-1 && isdigit(tag[i+1]))
        {
                sum+= (tag[i]-'0')+(tag[i+1]-0);
                if(sum % 2==0) count =1;
                else {
                    count = 0 ;
                    break;
                }
        }
        else if ( tag[i]== 'A' ||  tag[i]== 'E' ||  tag[i]== 'I' ||  tag[i]== 'O' || tag[i]== 'U' ||  tag[i]== 'Y'){
            count = 0;
            break;
        }
        
    }
    if (count == 1 ) return true;
    else return false;
    
    

}

int main(){
    string tag;
    cin>>tag;
    if (isValidTag(tag))
    {
        cout<< "valid"<< endl;
    }
    else cout<< "invalid"<< endl;
    return 0;
}