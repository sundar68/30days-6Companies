//Question Link - https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/#

//Question - Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.

//Solution -

vector<string> generate(int N)
{
	vector<string>v;
	for(int i=1;i<=N;i++){
	    int j=i;
	    string s="";
	    while(j >0){
	        if(j == 1){
	            s+='1';
	            break;
	        }
	        else{
	            if(j%2 == 0){
	                s+='0';
	            }
	            else{
	                s+='1';
	            }
	            j=j/2;
	        }
	    }
	    reverse(s.begin(),s.end());
	    v.push_back(s);
	}
	return v;
}
