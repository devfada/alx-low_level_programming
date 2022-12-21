/**
 *reset_to_98- function to change value 
 *
 *n- pointer variable
 *Return: nothing
 */
void reset_to_98(int *n)
{
*n=98;
}
/**
 *main- entry point
 *x- integer variable
 *Return: Always 0
 */
int main(void)
{
int x=402;
reset_to_98(&x);
}
