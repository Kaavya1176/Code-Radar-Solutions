int main(){
    int a,i=2,prime=0;
    scanf("%d",&a);
    while (i<=a/2){
        if(a%i==0){
            prime=1;
            break;
        }
    i=i+1;
    }
if (prime==0){
    printf("Prime");
}
else {
    printf("Not Prime");
}
}