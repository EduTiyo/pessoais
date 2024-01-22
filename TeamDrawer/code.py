import random

def sortear(list, tamanho, qtdTimes):
  time1=[]
  for i in range(tamanho//qtdTimes):
    numRandom = random.randint(0, len(list)-1)
    time1.append(list[numRandom])
    list.pop(numRandom)
  if len(list) == 1 and tamanho%qtdTimes!=0:
    time1.append(list[0])
  return time1, list

def main():
  list = []
  nome = ''
  print('Entre com os nomes dos jogadores. Para sair, não insira nenhum nome')
  while True:
    tamanho = int(len(list))
    print('Tamanho:', tamanho, '\n')
    print('Nome do jogador: ', end='')
    nome = input()
    print()
    if nome == '':
      break
    list.append(nome)
  qtdTimes = int(input('Quantidade de times: '))
  print()

  for i in range(qtdTimes):
    
    sorteado = sortear(list, tamanho, qtdTimes)
    returnedList=sorteado[1]
    list=returnedList
    print('Time', i+1,'\b:')
    for j in sorteado[0]:
      print(j, end=', ')
    print('\b\b ')
    print('\n')
    
main()
