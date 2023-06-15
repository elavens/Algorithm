#include<bits/stdc++.h>
using namespace std;
/*
16 15 1 13
1 2
2 7
2 8
1 4
4 5
4 6
6 13
13 14
13 15
1 3
3 9
9 10
10 11
10 12
8 16

*/


int main()
{

    int v , e , start , sr , a , b ;

    cin>> v >> e >> start >>  sr ;

    vector<int> samp ;

    vector<vector<int> > conn( v + 1 , samp );

    for(int i = 0 ;  i < e ; i++)
    {
        cin >> a >> b;
        conn[a].push_back(b);
        conn[b].push_back(a);
    }
    bool visited[ v + 1 ] ;

    memset( visited , false , sizeof visited ) ;

    queue< int > Q ;
    Q.push(start) ;

    visited[start] = true ;
    int siz = 0 ;
    int lev = 0 ;
    int pos = 0 ;

    while( ! Q.empty() )
    {
        cout<<"LEVEL:"<<lev<<endl;

        siz = Q.size();

        while( siz-- )
        {
            int first = Q.front();
            Q.pop() ;
            cout << first << endl ;
          if( first ==  sr  )
            pos = lev  ;

            for( int j = 0 ; j < conn[first].size() ;  j++ )
            {
                if(! visited[conn[first][j]] )
                {
                visited[conn[first][j]] = true;

                Q.push(conn[first][j]) ;
                }
            }


        }

        lev++;
    }

    cout << pos << endl ;

return 0;

}

