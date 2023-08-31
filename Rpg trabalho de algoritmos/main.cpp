#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Local para setar as variáveis
    string Nome;
    float resposta;
    int segredo;
    float troll;

    //Começo
    cout<<"Olá guerreiro(a), você finalmente acordou, qual seu nome? ";
    cin>>Nome;
    cout<<"Seja bem vindo ao labirinto "<< Nome << " vamos começar o jogo";
    sleep(3);
    system("clear||cls");

    //Poço
    cout<<"Você acorda e na sua frente tem um poço e um caminho que você pode seguir\n\n";
    cout<<"Ao olhar o poço você escuta gritos vindo de dentro dele, tentar ajudar ou não?\n\n";
    cout<<"Opção 1: Ajudar de alguma forma\n\n";
    cout<<"Opção 2: Não ajudar e seguir caminho\n\n";

    //Poço escolha pra ajudar a pessoa ou não
    do {
        cin >> resposta;

        //Poço Ajudar a pessoa
        if (resposta == 1) {
            cout<<"Você começa a procurar algo para ajudar a pessoa do poço, você irá olhar em sua volta e vê um esqueleto com ";
            cout<<"uma mochila e uma estrutura.\n\n";
            cout<<"Opção 1: Ir até o esqueleto.\n\n";
            cout<<"Opção 2: Ir até a estrutura.\n\n";

            do {
                cin >> resposta;

                //Poço ir até o esqueleto
                if (resposta == 1) {
                    cout<<"Você começa a olhar no esqueleto mas no exato momento que você puxa a mochila, você escuta um barulho ";
                    cout<<"e percebe que a estrutura que estava do outro lado começa a cair em um buraco impossibilitando com que você vá até ela.\n";
                    cout<<"Na mochila você encontra uma moeda, um papel e uma espada. O que você pega " << Nome <<"\n\n";
                    cout<<"Opção 1: Moeda, jogar ela no poço para ver se a sorte ajuda\n\n";
                    cout<<"Opção 2: Papel, ler o papel\n\n";
                    cout<<"Opção 3: Espada, pegar a espada e jogar ela no poço\n\n";

                    //Pegar o item do esqueleto
                    do {
                        cin >> resposta;

                        //Moeda
                        if (resposta == 1) {
                            cout<<"Você pega uma moeda e ela é meio diferente, parece ser bem antiga.\n";
                            cout<<"Você vai em direção ao poço e joga ela. No exato momento que ela bate na água,\n";
                            cout<<Nome<< " ve uma visão de um tesouro antigo que está no castelo.\n";
                            cout<<"Voltando para o poço, você percebe que os gritos pararam e os itens que tinha no esqueleto sumiram. Você ressolve continuar \n\n";
                        }

                        //Lê o papel
                        else if (resposta == 2) {
                            cout<<"Você começa a ler um papel que fala sobre um guerreiro desaparecido, que foi atrás do tesouro de seu antigo pai,\n";
                            cout<< Nome << " você lembra de já ter ouvido falar nisso. Mas antes que você faça algo percebe que os gritos param, e os outros itens no esqueleto somem. \n\n";
                            segredo = 1;
                        }

                        //Pega a espada
                        else if (resposta == 3) {
                            cout<<"Você pega a espada e coloca ela na sua bainha, logo após percebe que os gritos do \n";
                            cout<<"poço param e os itens do esqueleto somem. ";
                            cout<<"Logo após ressolve que é melhor continuar o caminho\n\n";
                            resposta = resposta-1;
                        }

                        else {
                            cout << "Resposta inválida. Responda apenas 1,2 ou 3: ";
                            continue;
                        }

                    } while (resposta != 1 && resposta !=2 && resposta !=3);
                }
                //Poço você vai até a estrutura
                else if (resposta == 2) {
                    cout<<"Você vai até a estrutura.";
                    cout<<"Você encontra um balde e uma corda e ao lado uma placa escrito:\n";
                    cout<<"Perigo!.\n\n";
                    cout<<"Você vai ajudar a pessoa com o balde ou vai continuar caminho?\n\n";
                    cout<<"Opção 1: Ajudar a pessoa com o balde e a corda\n\n";
                    cout<<"Opção 2: Continuar o caminho e ignorar a pessoa\n\n";

                    //Poço ajudar a pessoa com balde ou sair
                    do {
                        cin >> resposta;

                        //Ajudar a pessoa
                        if (resposta == 1) {
                            cout<<"Você pega o balde e a corda e começa ir em direção ao poço.\n";
                            cout<<"Você arremessa o balde com a corda e sente logo após um peso no balde e começa a puxar para cima.\n";
                            cout<<"Ao puxar você escuta uma voz feminina: Muito obrigado " << Nome << " serei grata o resto da vida.\n";
                            cout<<"Mas antes que você perceba você ve uma coisa estranha, não era uma pessoa e sim uma criatura,\ncorcunda e com cabelos pretos.\n";
                            cout<<"Ela pula na sua direção te empurrando para o chão fazendo com que você bata a cabeça....";
                            exit(resposta == 1);
                        }

                        //Você segue a placa e ignora a pessoa
                        else if (resposta == 2) {
                            cout<<"Você continua o seu caminho pela masmorra\n\n";
                        }

                        else {
                            cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                            continue;
                        }
                    } while (resposta != 1 && resposta !=2);
                }

                else {
                    cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                    continue;
                }

            } while (resposta != 1 && resposta !=2);
        }

        //Poço não ajudar e continuar o caminho
        else if (resposta == 2) {
            cout<<"Você continua o caminho, ignorando os gritos\n \n";
            continue;
        }

        else {
            cout << "Resposta inválida. Responda apenas 1 ou 2: ";
            continue;
        }

    } while (resposta != 1 && resposta !=2);

    sleep(13);
    system("clear||cls");

    //Buraco
    cout<<"O seu caminho a frente agora possui algumas plantas que atrapalham a sua visão, o que você faz " << Nome << "?\n\n";
    cout<<"Opção 1: Ir com cuidado tentando tirar as folhas do caminho\n\n";
    cout<<"Opção 2: Ir rápido e tirar todas as folhas porque elas tão incomodando\n\n";

    do {
        cin >> resposta;

        //Atravessar calmamente o buraco
        if (resposta == 1) {
            cout<<"Você atravessa calmamente e percebe que tinha um buraco logo após as folhas que se você não tivesse tomado cuidado você teria caido.\n\n";
        }

        //Atravessar com rápidez o buraco
        else if (resposta == 2) {
            cout<<"Você atravessa rapidamente, mas antes que você possa perceber uma folha bate no seu rosto e você cai em um buraco muito fundo, fazendo com que você fique preso nele, sem poder sair\n\n";
            exit(resposta == 2);
        }

        else {
            cout << "Resposta inválida. Responda apenas 1 ou 2: ";
            continue;  // Continua para a próxima interação do loop
        }

        } while (resposta != 1 && resposta != 2);

    //Rio
    cout<<"Agora o caminho a sua frente você percebe um rio atravessando pelas duas paredes e uma ponte que atravessa para o outro lado, deste rio.\n\n";
    cout<<"Você ressolve parar para descansar um pouco oque você faz?\n\n";
    cout<<"Opção 1: Tacar pedras na água.\n\n";
    cout<<"Opção 2: Olhar o seu reflexo.\n\n";

    do {
        cin >> resposta;

                //Jogar pedras
                if (resposta == 1) {
                    cout<<"Você joga algumas pedras no lago e elas rebatem na água quicando 5 vezes, você descansa e continua o caminho.\n\n";
                }

                //Olhar o reflexo
                else if (resposta == 2) {
                    cout<<"Você olha o seu reflexo e percebe uma coisa diferente, ao seu lado tem uma mulher e uma criança.\n";
                    cout<<Nome<<" finalmente você percebeu você é o guerreiro perdido que foi atrás do tesouro do seu pai.\n";
                    cout<<"Você se enche de esperança, e agora tem mais um motivo para sair daqui\n\n";
                    segredo = segredo+1;
                }

                else {
                    cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                    continue;  // Continua para a próxima interação do loop
                }
    } while (resposta != 1 && resposta != 2);

    //Ponte
    cout<<"Continuando pela ponte você começa a atravessar, até que você olha para sua frente e percebe um troll gigante.\n";
    cout<<"Ele para o seu caminho e menciona: Olá eu sou Erick, preciso de uma ajuda você pode me dar uma resposta disso?\n\n";
    cout<<"Opção 1:Ajudar o troll\n\n";
    cout<<"Opção 2:Não ajudar\n\n";

    do {
        cin >> resposta;

            //Ajudar o troll
            if (resposta == 1) {
                cout<<"Olha aqui, ele mostra um papel escrito: Nasci 11 anos depois do meu irmão.\n";
                cout<<"Nossa mãe, que está com 39 anos, é seis anos mais nova que meu pai.\n";
                cout<<"Se o primeiro filho do meu pai nasceu em seu aniversário de 26 anos, atualmente tenho?\n\n";

                cin>>troll;
                //Resposta certa
                if (troll == 8) {
                    cout<<"Resposta correta pode passar, muito obrigado\n\n";
                }
                //Resposta caótica
                else if (troll == 69 or troll == 666) {
                    cout<<"Hahaha você é engraçado só por isso eu vou te liberar.\n";
                    cout<<"Tome esse papel acho que vai ser bom para você.\n";
                    cout<<"O papel está escrito: Tesouro, direita, esquerda e esquerda.\n";
                    cout<<"Você continua o caminho.\n\n";
                }
                //Resposta errada
                else {
                    cout<<"Resposta errada, desculpe mas você não é útil.\n";
                    cout<<"Ele parte pra cima de você e antes que você consiga se mover ele te abocanha.";
                    exit(resposta == 1);
                }
            }

            //Não ajudar
            else if(resposta == 2) {
                cout<<"Já que você não quer me ajudar, vou me alimentar então.\n";
                cout<<"Ele começa a se aproximar de você e te engole inteiro";
                exit(resposta == 2);
            }

            else {
                    cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                    continue;  // Continua para a próxima interação do loop
                }
    } while (resposta != 1 && resposta != 2);

    sleep(13);
    system("clear||cls");

    cout<<Nome<<" continuando a sua caminhada você avista um cemitério.\n";
    cout<<"Ir até ele ou continuar caminho?\n";
    cout<<"Opção 1: Ir até o cemitério.\n\n";
    cout<<"Opção 2: Continuar caminho.\n\n";

    do {
        cin>>resposta;

        //Entra no cemitério
        if(resposta == 1) {
            cout<<"Você começa a ir até o cemitério,\n";
            cout<<Nome<<" vê uma estátua e uma cova aberta, para aonde você vai?\n\n";
            cout<<"Opção 1: Ir até a cova\n\n";
            cout<<"Opção 2: Ir até a estátua\n\n";

            do {
                cin>>resposta;

                //Cova aberta
                if(resposta == 1) {
                    cout<<"Você chega perto da cova, e percebe que dentro dela tem uma carta.\n";
                    cout<<"Entrar nela?\n\n";
                    cout<<"Opção 1: Entrar na cova\n\n";
                    cout<<"Opção 2: Continuar caminho\n\n";

                    do {
                        cin >> resposta;

                        //Entrar na cova
                        if (resposta == 1) {
                            cout<<"Entrando na cova você percebe que é uma carta destinada para você.\n";
                            cout<<"Lendo a carta ela menciona: Ola filho(a), eu queria poder te dar este tesouro pessoalmente,\n";
                            cout<<"mas não pude, o tesouro que deixei está no nosso antigo castelo acredito que você já saiba a entrada.\n";
                            cout<<"o resto da carta está ilegível.\n\n";
                            segredo= segredo+1;
                        }

                        //Continuar o caminho
                        else if (resposta == 2) {
                            cout<<"Você continua o caminho e percebe que a estátua não está mais lá.\n\n";
                        }

                        else {
                            cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                            continue;  // Continua para a próxima interação do loop
                        }
                    } while (resposta != 1 && resposta != 2);
                }

                //Estátua
                else if(resposta == 2) {
                    cout<<"Chegando perto da estátua, você percebe que é um anjo com um lampião\n";
                    cout<<"com uma venda em seu rosto, em baixo está escrito:\n";
                    cout<<"A luz do fim é aquilo que não queremos chegar,\n";
                    cout<<"e o reflexo é apenas uma ilusão da inveja deles.\n\n";
                }

                else {
                    cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                    continue;  // Continua para a próxima interação do loop
                }
            } while (resposta != 1 && resposta != 2);
        }

        //Continua o caminho
        else if(resposta == 2) {
            cout<<"Continuando o caminho pela masmorra.\n\n";
        }

        else {
            cout << "Resposta inválida. Responda apenas 1 ou 2: ";
            continue;  // Continua para a próxima interação do loop
        }
    } while (resposta != 1 && resposta != 2);

    sleep(13);
    system("clear||cls");

    cout<<"Continuando o caminho você vê uma caverna com uma luz muito forte.\n";
    cout<<"Seguir a luz ou continuar a masmorra?\n\n";
    cout<<"Opção 1: Seguir a luz\n\n";
    cout<<"Opção 2: Continuar a masmorra\n\n";

    do {
        cin>>resposta;

        if (resposta == 1) {
            cout<<"Você começa a entrar na caverna e a luz atrapalha sua visão.\n";
            cout<<"Começa a ver um fundo algumas árvores, mas antes que você possa enxergar algo.....";
            exit(resposta == 1);
        }

        else if (resposta == 2) {
            cout<<"Você continua o caminho pela masmorra.";
        }

        else {
            cout << "Resposta inválida. Responda apenas 1 ou 2: ";
            continue;  // Continua para a próxima interação do loop
        }
    } while (resposta != 1 && resposta != 2);

    sleep(5);
    system("clear||cls");

    cout << Nome << " entra numa floresta de pinheiros com o caminho de terra,\n";
    cout << "a sua frente tem uma placa que está escrito Castelo Esquerda, Saída Direita.\n";
    cout << "Por finalmente deixar de ser limitado pois as paredes do labirinto não existem mais.\n";
    cout << "Deixar de seguir as placas pode ser viavel e correr a natureza.";
    cout << "Qual caminho "<< Nome <<" deve seguir?\n\n";
    cout << "Opção 1: Castelo.\n\n";
    cout << "Opção 2: Saída.\n\n";
    cout << "Opção 3: Natureza.\n\n";

    do{
        cin>>resposta;

        //vai até o castelo
        if(resposta == 1){
            cout << "Indo ao castelo é visivel que o local aparenta vazio, e levemente destruido\n";
            cout << "por a passagem estar livre voce se adentra, e dentro dela você vê um dragão adormecido.\n";
            cout << "Ir até a próxima porta lento ou correndo?\n";
            cout << "Opção 1: Ir calmamente\n\n";
            cout << "Opção 2: Ir correndo\n\n";

            do{
                cin>>resposta;

                //Ir calmo para a porta
                if(resposta == 1) {
                    cout<<"Você começa a andar bem lento, para fazer o mínimo de barulho possível.\n";
                    cout<<"Abrindo a porta e fechando você sem quere faz muito barulho e acorda o dragão.\n";
                    cout<<Nome<<" tem dois caminhos para ir mas tem que ser rápido!.\n\n";
                    cout << "Opção 1: Ir para a esquerda\n\n";
                    cout << "Opção 2: Ir para a direita\n\n";

                    do {
                        cin>>resposta;

                        //Primeira porta: Escolha errada
                        if(resposta == 1) {
                            cout<<"Você chega na porta e abre ela, contudo você entra num quarto fechado.\n";
                            cout<<"Antes que de tempo para voltar, você é puxado pelo dragão e engolido por ele.\n\n";
                            exit(resposta == 1);
                        }

                        //Primeira porta: Escolha certa
                        else if(resposta == 2) {
                            cout<<"Você continua o caminho e abre a porta, chegando em outro corredor.\n";
                            cout<<"Tem duas portas na sua frente, qual você irá?\n";
                            cout << "Opção 1: Ir para a esquerda\n\n";
                            cout << "Opção 2: Ir para a direita\n\n";

                            do {
                                cin>>resposta;

                                //Segunda porta: Escolha certa
                                if(resposta == 1) {
                                    cout<<"Você continua o caminho e abre a porta, chegando em outro corredor.\n";
                                    cout<<"Tem duas portas na sua frente, qual você irá?\n";
                                    cout << "Opção 1: Ir para a esquerda\n\n";
                                    cout << "Opção 2: Ir para a direita\n\n";

                                    do {
                                        cin>>resposta;

                                        //Final tesouro
                                        if (resposta == 1) {
                                            cout<<"Você abre a porta e acha uma tranca de metal,\n";
                                            cout<<"puxando ela rapidamente e fazendo com que o dragão não chegue,\n";
                                            cout<<"depois de respirar você olha em sua volta e percebe que você chegou no tesouro.\n";
                                            cout<<"Está escrito no tesouro: tesouro de "<< Nome<<"\n\n";
                                            cout<<"Parabéns você chegou no final do tesouro, tem mais 3 finais que você pode chegar.\n";
                                            cout<<"Obrigado por jogar, Lorenzo esteve aqui.\n\n";
                                            exit(resposta == 1);
                                        }

                                        //Ultima porta errada
                                        else if (resposta == 2) {
                                            cout<<"Você abre a última porta mas antes que você possa ver você caiu em um buraco com espinhos.";
                                            exit(resposta == 2);
                                        }

                                        else {
                                            cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                                            continue;  // Continua para a próxima interação do loop
                                        }

                                    }while (resposta != 1 && resposta != 2);
                                }

                                //Segunda porta: Escolha errada
                                else if(resposta == 2) {
                                    cout<<"Você chega na porta e abre ela, contudo você entra num quarto fechado.\n";
                                    cout<<"Antes que de tempo para voltar, você é puxado pelo dragão e engolido por ele.\n\n";
                                    exit(resposta == 2);
                                }

                                else {
                                    cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                                    continue;  // Continua para a próxima interação do loop
                                }

                            }while (resposta != 1 && resposta != 2);
                        }

                        else {
                            cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                            continue;  // Continua para a próxima interação do loop
                        }
                    }while (resposta != 1 && resposta != 2);
                }

                //Final onde morre pro dragão
                else if(resposta == 2) {
                    cout<<"Você começa a correr até a próxima porta, mas você tropeça.\n";
                    cout<<"Olhando para frente você percebe o dragão em cima de você,\n";
                    cout<<"antes que você possa fazer algo você é comido por ele.\n\n";
                    cout<<"Este é um dos finais, você nadou nadou e afogou na praia.\n\n";
                    cout<<"Parabéns eu acho?";
                    exit(resposta == 2);
                }

                else {
                    cout << "Resposta inválida. Responda apenas 1 ou 2: ";
                    // Continua para a próxima iteração do loop
                }
            }while (resposta != 1 && resposta != 2);

        //Saída
        }else if(resposta == 2){
            cout<<"Você começa a seguir o caminho da saída, chegando até um portão.\n";
            cout<<"Os portões se abrem.\n\n";

            if (segredo == 3) {
                cout<<Nome<<" continua o caminho indo em direção para voltar a sua família.\n\n";
                cout<<"Você achou o final secreto e bom, espero que esteja feliz pelo seu amigo.\n";
                cout<<"Se é que essa jornada foi algo bom para você e ele.\n\n";
                exit(segredo == 3);
            }

            else{
                cout<<"Você finalmente saiu do labirinto, "<<Nome<<".\n";
                cout<<"Você conseguiu um dos finais tente achar outros, boa sorte.";
                exit(resposta == 2);
            }
        }

        //Natureza
        else if(resposta == 3){
            cout << "Você ignora as placas e escolhe seguir por si mesmo\n";
            cout << "a loucura te consumiu e você quer viver no mato, boa sorte.\n\n";
            cout << "Você chegou em um dos finais, Parabéns. Tente pegar os outros";
            exit(resposta == 3);
        }

        else {
            cout << "Resposta inválida. Responda apenas 1,2 ou 3: ";
              // Continua para a próxima iteração do loop
        }
    } while (resposta != 1 && resposta !=2 && resposta !=3);

    return 0;

}
