#include<iostream>
#include<stdlib.h>
using namespace std;

/* Adjacency Matrix
0 1 0 1 0
0 0 1 1 0
0 0 0 0 1
0 0 1 0 0
0 0 0 0 0
*/

int main()

{

    int n;
    cout<<"Enter no of vertices : \t";
    cin>>n;

    int a[n][n];
    cout<<"Enter the edges : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];

        }
    }
    cout<<endl;

    cout<<"Entered Adjacency Matrix is : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;

    int indegree[n]={0};
    int visited[n]={0};

    for(int i=0;i<n;i++){  //calculation of indegrees
        for(int j=0;j<n;j++){
            if(a[j][i]==1){
                indegree[i]++;

            }
        }
    }

    //cout<<"Initial Indegree Array is : ";

    /*for(int i=0;i<n;i++){
      cout<<indegree[i]<<" ";
      }
    cout<<"   ";

    cout<<"Initial Visited Array is : ";

    for(int i=0;i<n;i++){
      cout<<visited[i]<<" ";
      }
    cout<<endl<<endl;
    */


    for(int i=0;i<n;i++){
        //cout<<"i = "<<i<<endl;
        int j;

        /*cout<<"Indegree Array is : ";

        for(int i=0;i<n;i++){
            cout<<indegree[i]<<" ";
      }
        cout<<"   ";

        cout<<"Visited Array is : ";

        for(int i=0;i<n;i++){
            cout<<visited[i]<<" ";
      }
        cout<<endl<<endl;
        */

        for(j=0;j<n;j++){
            //cout<<"j in for loop = :"<<j<<endl;
            if(indegree[j]==0 && visited[j]==0){
                cout<<j+1<<" ";
                visited[j]=1;
                break;

            }

        }

        if(j==n){
            //cout<<"j = "<<j<<" n = "<<n<<endl;
            cout<<"C\n";
            exit(0);

        }

        for(int k=0;k<n;k++){
                if(a[j][k]==1){
                    indegree[k]=indegree[k]-1;

            }

        }

    }
    return 0;

}
