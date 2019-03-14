#include<iostream>
#include<algorithm>
#define N 1002

using namespace std;

struct obj{
    float p;
    float c;
    int index;
};

bool compare(obj a,obj b){
    float cp_a = a.p/a.c;
    float cp_b = b.p/b.c;
    return cp_a<cp_b;
}

obj a[N];

int main(){
    int caseNum;

    cin>>caseNum;

    while(caseNum--){
        int objNum;
        cin>>objNum;

        for(int i=0;i<objNum;i++){
            cin>>a[i].p>>a[i].c;
            a[i].index = i+1;
        }
        sort(a,a+objNum,compare);

        for(int i=0;i<objNum;i++){
            cout<<a[i].index;
            if(i<objNum-1)
                cout<<" ";
        }

        cout<<endl;

        if(caseNum)
            cout<<endl;

    }

    return 0;
}
