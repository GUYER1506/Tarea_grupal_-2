void menuFase2() {
    int op;
    do {
    	system("cls");
    	cout << "1. Iniciar Programa\n";
    	cout << "0. Regresar\n";
        cout << "Seleccione una opcion: ";
    	  cin >> op;

        switch(op) {
            case 1: system("start FASE2.exe"); break;
            case 0: break;
            default: cout << "Opcion invalida.\n"; system("pause"); break;
        }

    } while(op != 0);
}
