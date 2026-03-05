switch(N % 10)
{
    case -5: // Added in first blank
    case 0:  
             // Fall-through from blank 2
    case 5:
        cout << "YES";
        break;
    default:
        cout << "NO";
}
