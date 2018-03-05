vector<int>myVctor;
void sieve(int N)
{
        //N = sqrt(N);
        for(int i= 1; i <= N; i++)
        {
            if(i == 1){
                //cout<< i <<" isn't Prime"<<endl;
                continue;
            }
            else if(i == 2 || i == 3) {
                //cout<<i<<" Prime"<<endl; /// 2 & 3 is prime number
                myVctor.push_back(i);
                continue;
            }
            else if(i%2 == 0){
                //cout<< i <<" isn't Prime"<<endl; /// All Pair number are not prime
                continue;
            }
            else{
                /// Prime checking for greater than 3 and odd only... actually it check from 5.
                bool flag = true;
                int k = sqrt(i);
                for(int j= 3; j <= k; j += 2)
                {
                    if(i%j == 0){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    //cout<<i<<" Prime"<<endl;
                    myVctor.push_back(i);
                    continue;
                    }
                else{
                   // cout<<i<<" isn't prime"<<endl;
                    continue;
                }
            }
    }
    //for(vector<int>::iterator i = myVctor.begin(); i != myVctor.end(); i++ )
      //  cout<<*i<<endl;
}
