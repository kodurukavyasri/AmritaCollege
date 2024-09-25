int main()
{
    int x, y;
    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);
    
    if (x > 0 && y > 0)
        printf("The point (%d, %d) is located in the First Quadrant\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%d, %d) is located in the Second Quadrant\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%d, %d) is located in the Thirds Quadrant\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%d, %d) is located in the Fourth Quadrant\n", x, y);
    else
        printf("The point is located at the center of (0,0)\n");

	return 0;
}