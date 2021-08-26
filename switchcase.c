void main(){
    char grade = 'C';

    switch (grade)
    {
    case 'A':
        printf("Excelente!");
        break;
    case 'B':
    case 'C':
        printf("Bom")
        break;
    case 'D':
        printf("Estude mais!")
        break;
    case 'E':
        printf("Melhor tentar novamente!");
        break
    default:
        printf("Inválido")
        break;
    }
}