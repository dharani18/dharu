using namespacestd;

int main()
{
	int n,i,j;
	int temp;
	cout<<"Enter numbers: ";
	cin>>n;
	{
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	}
	cout<<"Sorted elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	return 0;
	
}
