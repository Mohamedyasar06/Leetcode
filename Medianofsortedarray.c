double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i,j,c,a,s,f;
    j=0;
    f=2.0;
    a=nums1Size+nums2Size;
    for(i=nums1Size;i<a;i++)
    {
    nums1[i]=nums2[j];
    j++;
    }
    for(i=0;i<a-1;i++)
    for(j=i+1;j<a;j++)
    if(nums1[i]<nums1[j])
    {
        c=nums1[i];
        nums1[i]=nums1[j];
        nums1[j]=c;
    }
    s=a%f;
    if(s!=0)
    return nums1[s];
    else
    return ((float)nums1[a%2]+nums1[a%2-1]%2);

}