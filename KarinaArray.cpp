    #include<iostream>
    using namespace std;
     
    #define int long long
     
    void array()
    {
        int n;
        cin>>n;
        int *A;
        A = new int[n];
     
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
        }

        int min1 = A[0];
        int min2 = 0;
        int max1 = A[0];
        int max2 = 0;
        int max1pos = 0;
        int min1pos =0;

        
        if(n==2)
        {
            cout<<A[0]*A[1]<<endl;
        }else
        {
     
        for(int i=0; i<n; i++)
        {
            if(A[i]>max1)
            {
                max1 = A[i];
                max1pos = i;
     
            }
        }
        A[max1pos]=0;
        for(int i=0; i<n; i++)
        {
            if(A[i]>max2)
            {
                max2=A[i];
            }
        }
     
        for(int i=0; i<n; i++)
        {
            if(A[i]<min1)
            {
                min1 = A[i];
                min1pos = i;
     
            }
        }
        A[min1pos]=0;
        for(int i=0; i<n; i++)
        {
            if(A[i]<min2)
            {
                min2=A[i];
            }
        }
        
            if(min1*min2>max1*max2)
                cout<<min1*min2<<endl;
            else
                cout<<max1*max2<<endl;
        }
        
    }
    signed main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            array();
        }
        return 0;
    }