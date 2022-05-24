from random import randint
games=0
print('\t/- Jogo da adivinhaçao -/\n\nRegras: Escolha um numero dentro\n\t\tdo intervalo selecionado;\n\t\tNão coloque um numero menor\n\t\tno fim do que o escolhido\n\t\tno começo;')
players = int(input('Digite quantos jogadores: '))
x,y = int(input('\nPara começar digite em qual numero\no intervalo começa: ')),int(input('Digite onde o intervalo termina: '))
while games != players:
  k = randint(x,y)
  print(f'\t/-Intervalo de {x} a {y}-/')
  print(f'\t\t/-Jogador {games+1}-/')
  w = int(input('\tprimeira tentativa:  '))
  cont = 0
  while w != k:
    if w > k:
      cont += 1
      print(f'erros {cont}')
      w = int(input('\tEscolha um número menor: '))
    elif w < k:
      cont += 1
      print(f'erros {cont}')
      w = int(input('\tEscolha um número maior: '))
  else:
    if cont == 0:
      print(37*'-')
      print(f'- Parabens voce acertou de primeira -')
      print(37*'-')
      games += 1
    else:
      print(35*'-')
      print(f'Jogador {games+1} errou apenas {cont} vezes')
      print(35*'-')
      games += 1