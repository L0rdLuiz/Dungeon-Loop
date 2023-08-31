#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Local para setar as vari�veis
    string Nome;
    float resposta;
    int segredo;
    float troll;

    //Come�o
    cout<<"Ol� guerreiro(a), voc� finalmente acordou, qual seu nome? ";
    cin>>Nome;
    cout<<"Seja bem vindo ao labirinto "<< Nome << " vamos come�ar o jogo";
    sleep(3);
    system("clear||cls");

    //Po�o
    cout<<"Voc� acorda e na sua frente tem um po�o e um caminho que voc� pode seguir\n\n";
    cout<<"Ao olhar o po�o voc� escuta gritos vindo de dentro dele, tentar ajudar ou n�o?\n\n";
    cout<<"Op��o 1: Ajudar de alguma forma\n\n";
    cout<<"Op��o 2: N�o ajudar e seguir caminho\n\n";

    //Po�o escolha pra ajudar a pessoa ou n�o
    do {
        cin >> resposta;

        //Po�o Ajudar a pessoa
        if (resposta == 1) {
            cout<<"Voc� come�a a procurar algo para ajudar a pessoa do po�o, voc� ir� olhar em sua volta e v� um esqueleto com ";
            cout<<"uma mochila e uma estrutura.\n\n";
            cout<<"Op��o 1: Ir at� o esqueleto.\n\n";
            cout<<"Op��o 2: Ir at� a estrutura.\n\n";

            do {
                cin >> resposta;

                //Po�o ir at� o esqueleto
                if (resposta == 1) {
                    cout<<"Voc� come�a a olhar no esqueleto mas no exato momento que voc� puxa a mochila, voc� escuta um barulho ";
                    cout<<"e percebe que a estrutura que estava do outro lado come�a a cair em um buraco impossibilitando com que voc� v� at� ela.\n";
                    cout<<"Na mochila voc� encontra uma moeda, um papel e uma espada. O que voc� pega " << Nome <<"\n\n";
                    cout<<"Op��o 1: Moeda, jogar ela no po�o para ver se a sorte ajuda\n\n";
                    cout<<"Op��o 2: Papel, ler o papel\n\n";
                    cout<<"Op��o 3: Espada, pegar a espada e jogar ela no po�o\n\n";

                    //Pegar o item do esqueleto
                    do {
                        cin >> resposta;

                        //Moeda
                        if (resposta == 1) {
                            cout<<"Voc� pega uma moeda e ela � meio diferente, parece ser bem antiga.\n";
                            cout<<"Voc� vai em dire��o ao po�o e joga ela. No exato momento que ela bate na �gua,\n";
                            cout<<Nome<< " ve uma vis�o de um tesouro antigo que est� no castelo.\n";
                            cout<<"Voltando para o po�o, voc� percebe que os gritos pararam e os itens que tinha no esqueleto sumiram. Voc� ressolve continuar \n\n";
                        }

                        //L� o papel
                        else if (resposta == 2) {
                            cout<<"Voc� come�a a ler um papel que fala sobre um guerreiro desaparecido, que foi atr�s do tesouro de seu antigo pai,\n";
                            cout<< Nome << " voc� lembra de j� ter ouvido falar nisso. Mas antes que voc� fa�a algo percebe que os gritos param, e os outros itens no esqueleto somem. \n\n";
                            segredo = 1;
                        }

                        //Pega a espada
                        else if (resposta == 3) {
                            cout<<"Voc� pega a espada e coloca ela na sua bainha, logo ap�s percebe que os gritos do \n";
                            cout<<"po�o param e os itens do esqueleto somem. ";
                            cout<<"Logo ap�s ressolve que � melhor continuar o caminho\n\n";
                            resposta = resposta-1;
                        }

                        else {
                            cout << "Resposta inv�lida. Responda apenas 1,2 ou 3: ";
                            continue;
                        }

                    } while (resposta != 1 && resposta !=2 && resposta !=3);
                }
                //Po�o voc� vai at� a estrutura
                else if (resposta == 2) {
                    cout<<"Voc� vai at� a estrutura.";
                    cout<<"Voc� encontra um balde e uma corda e ao lado uma placa escrito:\n";
                    cout<<"Perigo!.\n\n";
                    cout<<"Voc� vai ajudar a pessoa com o balde ou vai continuar caminho?\n\n";
                    cout<<"Op��o 1: Ajudar a pessoa com o balde e a corda\n\n";
                    cout<<"Op��o 2: Continuar o caminho e ignorar a pessoa\n\n";

                    //Po�o ajudar a pessoa com balde ou sair
                    do {
                        cin >> resposta;

                        //Ajudar a pessoa
                        if (resposta == 1) {
                            cout<<"Voc� pega o balde e a corda e come�a ir em dire��o ao po�o.\n";
                            cout<<"Voc� arremessa o balde com a corda e sente logo ap�s um peso no balde e come�a a puxar para cima.\n";
                            cout<<"Ao puxar voc� escuta uma voz feminina: Muito obrigado " << Nome << " serei grata o resto da vida.\n";
                            cout<<"Mas antes que voc� perceba voc� ve uma coisa estranha, n�o era uma pessoa e sim uma criatura,\ncorcunda e com cabelos pretos.\n";
                            cout<<"Ela pula na sua dire��o te empurrando para o ch�o fazendo com que voc� bata a cabe�a....";
                            exit(resposta == 1);
                        }

                        //Voc� segue a placa e ignora a pessoa
                        else if (resposta == 2) {
                            cout<<"Voc� continua o seu caminho pela masmorra\n\n";
                        }

                        else {
                            cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                            continue;
                        }
                    } while (resposta != 1 && resposta !=2);
                }

                else {
                    cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                    continue;
                }

            } while (resposta != 1 && resposta !=2);
        }

        //Po�o n�o ajudar e continuar o caminho
        else if (resposta == 2) {
            cout<<"Voc� continua o caminho, ignorando os gritos\n \n";
            continue;
        }

        else {
            cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
            continue;
        }

    } while (resposta != 1 && resposta !=2);

    sleep(13);
    system("clear||cls");

    //Buraco
    cout<<"O seu caminho a frente agora possui algumas plantas que atrapalham a sua vis�o, o que voc� faz " << Nome << "?\n\n";
    cout<<"Op��o 1: Ir com cuidado tentando tirar as folhas do caminho\n\n";
    cout<<"Op��o 2: Ir r�pido e tirar todas as folhas porque elas t�o incomodando\n\n";

    do {
        cin >> resposta;

        //Atravessar calmamente o buraco
        if (resposta == 1) {
            cout<<"Voc� atravessa calmamente e percebe que tinha um buraco logo ap�s as folhas que se voc� n�o tivesse tomado cuidado voc� teria caido.\n\n";
        }

        //Atravessar com r�pidez o buraco
        else if (resposta == 2) {
            cout<<"Voc� atravessa rapidamente, mas antes que voc� possa perceber uma folha bate no seu rosto e voc� cai em um buraco muito fundo, fazendo com que voc� fique preso nele, sem poder sair\n\n";
            exit(resposta == 2);
        }

        else {
            cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
            continue;  // Continua para a pr�xima intera��o do loop
        }

        } while (resposta != 1 && resposta != 2);

    //Rio
    cout<<"Agora o caminho a sua frente voc� percebe um rio atravessando pelas duas paredes e uma ponte que atravessa para o outro lado, deste rio.\n\n";
    cout<<"Voc� ressolve parar para descansar um pouco oque voc� faz?\n\n";
    cout<<"Op��o 1: Tacar pedras na �gua.\n\n";
    cout<<"Op��o 2: Olhar o seu reflexo.\n\n";

    do {
        cin >> resposta;

                //Jogar pedras
                if (resposta == 1) {
                    cout<<"Voc� joga algumas pedras no lago e elas rebatem na �gua quicando 5 vezes, voc� descansa e continua o caminho.\n\n";
                }

                //Olhar o reflexo
                else if (resposta == 2) {
                    cout<<"Voc� olha o seu reflexo e percebe uma coisa diferente, ao seu lado tem uma mulher e uma crian�a.\n";
                    cout<<Nome<<" finalmente voc� percebeu voc� � o guerreiro perdido que foi atr�s do tesouro do seu pai.\n";
                    cout<<"Voc� se enche de esperan�a, e agora tem mais um motivo para sair daqui\n\n";
                    segredo = segredo+1;
                }

                else {
                    cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                    continue;  // Continua para a pr�xima intera��o do loop
                }
    } while (resposta != 1 && resposta != 2);

    //Ponte
    cout<<"Continuando pela ponte voc� come�a a atravessar, at� que voc� olha para sua frente e percebe um troll gigante.\n";
    cout<<"Ele para o seu caminho e menciona: Ol� eu sou Erick, preciso de uma ajuda voc� pode me dar uma resposta disso?\n\n";
    cout<<"Op��o 1:Ajudar o troll\n\n";
    cout<<"Op��o 2:N�o ajudar\n\n";

    do {
        cin >> resposta;

            //Ajudar o troll
            if (resposta == 1) {
                cout<<"Olha aqui, ele mostra um papel escrito: Nasci 11 anos depois do meu irm�o.\n";
                cout<<"Nossa m�e, que est� com 39 anos, � seis anos mais nova que meu pai.\n";
                cout<<"Se o primeiro filho do meu pai nasceu em seu anivers�rio de 26 anos, atualmente tenho?\n\n";

                cin>>troll;
                //Resposta certa
                if (troll == 8) {
                    cout<<"Resposta correta pode passar, muito obrigado\n\n";
                }
                //Resposta ca�tica
                else if (troll == 69 or troll == 666) {
                    cout<<"Hahaha voc� � engra�ado s� por isso eu vou te liberar.\n";
                    cout<<"Tome esse papel acho que vai ser bom para voc�.\n";
                    cout<<"O papel est� escrito: Tesouro, direita, esquerda e esquerda.\n";
                    cout<<"Voc� continua o caminho.\n\n";
                }
                //Resposta errada
                else {
                    cout<<"Resposta errada, desculpe mas voc� n�o � �til.\n";
                    cout<<"Ele parte pra cima de voc� e antes que voc� consiga se mover ele te abocanha.";
                    exit(resposta == 1);
                }
            }

            //N�o ajudar
            else if(resposta == 2) {
                cout<<"J� que voc� n�o quer me ajudar, vou me alimentar ent�o.\n";
                cout<<"Ele come�a a se aproximar de voc� e te engole inteiro";
                exit(resposta == 2);
            }

            else {
                    cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                    continue;  // Continua para a pr�xima intera��o do loop
                }
    } while (resposta != 1 && resposta != 2);

    sleep(13);
    system("clear||cls");

    cout<<Nome<<" continuando a sua caminhada voc� avista um cemit�rio.\n";
    cout<<"Ir at� ele ou continuar caminho?\n";
    cout<<"Op��o 1: Ir at� o cemit�rio.\n\n";
    cout<<"Op��o 2: Continuar caminho.\n\n";

    do {
        cin>>resposta;

        //Entra no cemit�rio
        if(resposta == 1) {
            cout<<"Voc� come�a a ir at� o cemit�rio,\n";
            cout<<Nome<<" v� uma est�tua e uma cova aberta, para aonde voc� vai?\n\n";
            cout<<"Op��o 1: Ir at� a cova\n\n";
            cout<<"Op��o 2: Ir at� a est�tua\n\n";

            do {
                cin>>resposta;

                //Cova aberta
                if(resposta == 1) {
                    cout<<"Voc� chega perto da cova, e percebe que dentro dela tem uma carta.\n";
                    cout<<"Entrar nela?\n\n";
                    cout<<"Op��o 1: Entrar na cova\n\n";
                    cout<<"Op��o 2: Continuar caminho\n\n";

                    do {
                        cin >> resposta;

                        //Entrar na cova
                        if (resposta == 1) {
                            cout<<"Entrando na cova voc� percebe que � uma carta destinada para voc�.\n";
                            cout<<"Lendo a carta ela menciona: Ola filho(a), eu queria poder te dar este tesouro pessoalmente,\n";
                            cout<<"mas n�o pude, o tesouro que deixei est� no nosso antigo castelo acredito que voc� j� saiba a entrada.\n";
                            cout<<"o resto da carta est� ileg�vel.\n\n";
                            segredo= segredo+1;
                        }

                        //Continuar o caminho
                        else if (resposta == 2) {
                            cout<<"Voc� continua o caminho e percebe que a est�tua n�o est� mais l�.\n\n";
                        }

                        else {
                            cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                            continue;  // Continua para a pr�xima intera��o do loop
                        }
                    } while (resposta != 1 && resposta != 2);
                }

                //Est�tua
                else if(resposta == 2) {
                    cout<<"Chegando perto da est�tua, voc� percebe que � um anjo com um lampi�o\n";
                    cout<<"com uma venda em seu rosto, em baixo est� escrito:\n";
                    cout<<"A luz do fim � aquilo que n�o queremos chegar,\n";
                    cout<<"e o reflexo � apenas uma ilus�o da inveja deles.\n\n";
                }

                else {
                    cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                    continue;  // Continua para a pr�xima intera��o do loop
                }
            } while (resposta != 1 && resposta != 2);
        }

        //Continua o caminho
        else if(resposta == 2) {
            cout<<"Continuando o caminho pela masmorra.\n\n";
        }

        else {
            cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
            continue;  // Continua para a pr�xima intera��o do loop
        }
    } while (resposta != 1 && resposta != 2);

    sleep(13);
    system("clear||cls");

    cout<<"Continuando o caminho voc� v� uma caverna com uma luz muito forte.\n";
    cout<<"Seguir a luz ou continuar a masmorra?\n\n";
    cout<<"Op��o 1: Seguir a luz\n\n";
    cout<<"Op��o 2: Continuar a masmorra\n\n";

    do {
        cin>>resposta;

        if (resposta == 1) {
            cout<<"Voc� come�a a entrar na caverna e a luz atrapalha sua vis�o.\n";
            cout<<"Come�a a ver um fundo algumas �rvores, mas antes que voc� possa enxergar algo.....";
            exit(resposta == 1);
        }

        else if (resposta == 2) {
            cout<<"Voc� continua o caminho pela masmorra.";
        }

        else {
            cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
            continue;  // Continua para a pr�xima intera��o do loop
        }
    } while (resposta != 1 && resposta != 2);

    sleep(5);
    system("clear||cls");

    cout << Nome << " entra numa floresta de pinheiros com o caminho de terra,\n";
    cout << "a sua frente tem uma placa que est� escrito Castelo Esquerda, Sa�da Direita.\n";
    cout << "Por finalmente deixar de ser limitado pois as paredes do labirinto n�o existem mais.\n";
    cout << "Deixar de seguir as placas pode ser viavel e correr a natureza.";
    cout << "Qual caminho "<< Nome <<" deve seguir?\n\n";
    cout << "Op��o 1: Castelo.\n\n";
    cout << "Op��o 2: Sa�da.\n\n";
    cout << "Op��o 3: Natureza.\n\n";

    do{
        cin>>resposta;

        //vai at� o castelo
        if(resposta == 1){
            cout << "Indo ao castelo � visivel que o local aparenta vazio, e levemente destruido\n";
            cout << "por a passagem estar livre voce se adentra, e dentro dela voc� v� um drag�o adormecido.\n";
            cout << "Ir at� a pr�xima porta lento ou correndo?\n";
            cout << "Op��o 1: Ir calmamente\n\n";
            cout << "Op��o 2: Ir correndo\n\n";

            do{
                cin>>resposta;

                //Ir calmo para a porta
                if(resposta == 1) {
                    cout<<"Voc� come�a a andar bem lento, para fazer o m�nimo de barulho poss�vel.\n";
                    cout<<"Abrindo a porta e fechando voc� sem quere faz muito barulho e acorda o drag�o.\n";
                    cout<<Nome<<" tem dois caminhos para ir mas tem que ser r�pido!.\n\n";
                    cout << "Op��o 1: Ir para a esquerda\n\n";
                    cout << "Op��o 2: Ir para a direita\n\n";

                    do {
                        cin>>resposta;

                        //Primeira porta: Escolha errada
                        if(resposta == 1) {
                            cout<<"Voc� chega na porta e abre ela, contudo voc� entra num quarto fechado.\n";
                            cout<<"Antes que de tempo para voltar, voc� � puxado pelo drag�o e engolido por ele.\n\n";
                            exit(resposta == 1);
                        }

                        //Primeira porta: Escolha certa
                        else if(resposta == 2) {
                            cout<<"Voc� continua o caminho e abre a porta, chegando em outro corredor.\n";
                            cout<<"Tem duas portas na sua frente, qual voc� ir�?\n";
                            cout << "Op��o 1: Ir para a esquerda\n\n";
                            cout << "Op��o 2: Ir para a direita\n\n";

                            do {
                                cin>>resposta;

                                //Segunda porta: Escolha certa
                                if(resposta == 1) {
                                    cout<<"Voc� continua o caminho e abre a porta, chegando em outro corredor.\n";
                                    cout<<"Tem duas portas na sua frente, qual voc� ir�?\n";
                                    cout << "Op��o 1: Ir para a esquerda\n\n";
                                    cout << "Op��o 2: Ir para a direita\n\n";

                                    do {
                                        cin>>resposta;

                                        //Final tesouro
                                        if (resposta == 1) {
                                            cout<<"Voc� abre a porta e acha uma tranca de metal,\n";
                                            cout<<"puxando ela rapidamente e fazendo com que o drag�o n�o chegue,\n";
                                            cout<<"depois de respirar voc� olha em sua volta e percebe que voc� chegou no tesouro.\n";
                                            cout<<"Est� escrito no tesouro: tesouro de "<< Nome<<"\n\n";
                                            cout<<"Parab�ns voc� chegou no final do tesouro, tem mais 3 finais que voc� pode chegar.\n";
                                            cout<<"Obrigado por jogar, Lorenzo esteve aqui.\n\n";
                                            exit(resposta == 1);
                                        }

                                        //Ultima porta errada
                                        else if (resposta == 2) {
                                            cout<<"Voc� abre a �ltima porta mas antes que voc� possa ver voc� caiu em um buraco com espinhos.";
                                            exit(resposta == 2);
                                        }

                                        else {
                                            cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                                            continue;  // Continua para a pr�xima intera��o do loop
                                        }

                                    }while (resposta != 1 && resposta != 2);
                                }

                                //Segunda porta: Escolha errada
                                else if(resposta == 2) {
                                    cout<<"Voc� chega na porta e abre ela, contudo voc� entra num quarto fechado.\n";
                                    cout<<"Antes que de tempo para voltar, voc� � puxado pelo drag�o e engolido por ele.\n\n";
                                    exit(resposta == 2);
                                }

                                else {
                                    cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                                    continue;  // Continua para a pr�xima intera��o do loop
                                }

                            }while (resposta != 1 && resposta != 2);
                        }

                        else {
                            cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                            continue;  // Continua para a pr�xima intera��o do loop
                        }
                    }while (resposta != 1 && resposta != 2);
                }

                //Final onde morre pro drag�o
                else if(resposta == 2) {
                    cout<<"Voc� come�a a correr at� a pr�xima porta, mas voc� trope�a.\n";
                    cout<<"Olhando para frente voc� percebe o drag�o em cima de voc�,\n";
                    cout<<"antes que voc� possa fazer algo voc� � comido por ele.\n\n";
                    cout<<"Este � um dos finais, voc� nadou nadou e afogou na praia.\n\n";
                    cout<<"Parab�ns eu acho?";
                    exit(resposta == 2);
                }

                else {
                    cout << "Resposta inv�lida. Responda apenas 1 ou 2: ";
                    // Continua para a pr�xima itera��o do loop
                }
            }while (resposta != 1 && resposta != 2);

        //Sa�da
        }else if(resposta == 2){
            cout<<"Voc� come�a a seguir o caminho da sa�da, chegando at� um port�o.\n";
            cout<<"Os port�es se abrem.\n\n";

            if (segredo == 3) {
                cout<<Nome<<" continua o caminho indo em dire��o para voltar a sua fam�lia.\n\n";
                cout<<"Voc� achou o final secreto e bom, espero que esteja feliz pelo seu amigo.\n";
                cout<<"Se � que essa jornada foi algo bom para voc� e ele.\n\n";
                exit(segredo == 3);
            }

            else{
                cout<<"Voc� finalmente saiu do labirinto, "<<Nome<<".\n";
                cout<<"Voc� conseguiu um dos finais tente achar outros, boa sorte.";
                exit(resposta == 2);
            }
        }

        //Natureza
        else if(resposta == 3){
            cout << "Voc� ignora as placas e escolhe seguir por si mesmo\n";
            cout << "a loucura te consumiu e voc� quer viver no mato, boa sorte.\n\n";
            cout << "Voc� chegou em um dos finais, Parab�ns. Tente pegar os outros";
            exit(resposta == 3);
        }

        else {
            cout << "Resposta inv�lida. Responda apenas 1,2 ou 3: ";
              // Continua para a pr�xima itera��o do loop
        }
    } while (resposta != 1 && resposta !=2 && resposta !=3);

    return 0;

}
