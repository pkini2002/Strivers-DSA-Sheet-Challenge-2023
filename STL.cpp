#include<bits/stdc++.h>

using namespace std; 

void explainPair(){
	pair<int,int>p={10,20};
	cout<<p.first<<" "<<p.second<<endl;

	pair<int,pair<int,int>>pp={1,{2,3}};
	cout<<pp.first<<" "<<pp.second.first<<" "
	<<pp.second.second<<endl;

	pair<int,int>arr[]={{1,2},{3,4},{5,6}};
	cout<<arr[1].second<<endl;
}

void explainVector(){

    vector<int>v;
    v.push_back(1);
    v.emplace_back(2); // emplace_back is generally faster than push_back
   
    vector<int>v1(5,100); // container containing 5 instances of 100
    vector<int>v2(5); // container of size 5 with values being either 0 or garbage value is declared
    vector<int>v3(v1);

    vector<int>::iterator it=v.begin();
    vector<int>::iterator it=v.end();
    vector<int>::iterator it=v.rend();
    vector<int>::iterator it=v.rbegin();
    it++;
    cout<<*(it)<<" ";


    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<endl;

    for(auto it=v.begin();it!=v.end();it++){
    	cout<<*(it)<<endl;
    }

    // Alternate way
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    	cout<<*(it)<<endl;
    }

    // Using foreach loop
    for(auto it:v){
    	cout<<it<<" ";
    }


    // deletion in a vector
    v.erase(v.begin()+1);

    // give start address and end address is end address+1
    v.erase(v.begin()+1,v.end()+3);


    // Insert function
    v.insert(v.begin(),300); // inserts right at the beginning

    v.insert(v.begin()+1,2,5); // inserts 5 twice at 1st and 2 positions

    vector<int>copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());

    cout<<v.size()<<endl; // returns size of vector

    v.pop_back();

    // v1-> {10,20}
    // v2-> {30,40}
    v1.swap(v2);

    v.clear(); // trims it down to an empty vector

    cout<<v.empty(); // tells whether ur vector is 
    // empty or not
}

void explainList(){
	list<int>lst;
    lst.push_back(10);
    lst.emplace_back(20);

    // insert in vector is costlier

    lst.push_front(5);
    lst.emplace_front(2);
}


void explainDequeue(){
     deque<int>dq;
     dq.push_back(1);
     dq.emplace_back(2);
     dq.emplace_front(3);
     dq.push_front(4);

     dq.pop_back();
     dq.pop_front();

     dq.back();
     dq.front();
}


void explainStack(){
	stack<int>st;
	st.push(1);
	st.push(2);

	cout<<st.top()<<endl;
	st.pop();

	cout<<st.size()<<endl;
	cout<<st.empty();

	stack<int>st1,st2;
	st1.swap(st2);
}


void explainQueue(){
	queue<int>q;
	q.push(1);
	q.push(2);
	q.emplace(4);

	q.back()+=5;
	cout<<q.back()<<endl;
	cout<<q.front()<<endl;

	q.pop();
	cout<<q.front()<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
	return 0;
}
