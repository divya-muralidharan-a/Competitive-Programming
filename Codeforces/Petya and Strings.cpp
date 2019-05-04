int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,sum=0;
    for(i=0;s1[i]!='\0';i++)
        if(tolower(s1[i])==tolower(s2[i]))
        sum=0;
        else if(tolower(s1[i])<tolower(s2[i]))
        {
            sum=-1;
            break;
        }
        else
        {
            sum=1;
            break;
        }
    cout<<sum<<endl;
}
