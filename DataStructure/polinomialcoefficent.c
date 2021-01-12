struct term
{
    int coeff;
    int exp;
};
struct poly
{
    int n;
    struct term *t;
};
void mani()
{
    struct poly p;
    printf("No of two non-Zero terms :");
    scanf("%d",&p);
    p.t = new term[p.n];
    printf("Enter poly terms :");
    for(int i=0;i<p.n;i++)
    {
        printf("Term no %d",i++);
        scanf("%d %d",&p.t[i].coeff,&p.t[i].exp);
    }
}