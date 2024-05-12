#include <iostream>
#include <vector>
using namespace std;

int main()
{
		int v,e,q;
		cin>>v>>e>>q;
		vector<vector<int>> matrix(v+1,vector<int>(v+1,1e9));
		
		for(int i=0;i<e;i++)
		{
			int u,v,w;
			cin>>u>>v>>w;
			matrix[u][v]=w;
		}
		for(int i=1;i<=v;i++)
		{
			matrix[i][i]=0;
		}
		
		for(int k=1;k<=v;k++)
	    	{
	        	for(int i=1;i<=v;i++)
	        	{
	            		for(int j=1;j<=v;j++)
	            		{
	                		matrix[i][j]=min(matrix[i][j],(matrix[i][k]+matrix[k][j]));
	            		}
	        	}
	    	}
	    	for(int i=1;i<=v;i++)
	    	{
	        	for(int j=1;j<=v;j++)
	        	{
	            		cout<<matrix[i][j]<<" ";
	        	}
	        	cout<<endl;
	    	}
	    	vector<int> high(v+1,0);
	    	while(q>0)
	    	{
	    		int x;
	    		cin>>x;
	    		if(x>0)
	    		{
	    			high[x]=1;
	    		}
	    		else
	    		{
	    			high[-1*x]=0;
	    		}
	    		int ans=-1;
	    		for(int i=1;i<v;i++)
	    		{
	    			if(high[x]==1)
	    			{
	    			
	    			
	    		}
	    		cout<<ans;	
	    		q--;
	
		return 0;
}

