
# Sistema Automático de Catracas para Parques e Áreas de Lazer

**Introdução**

Este projeto nasceu da visão de modernizar e otimizar o acesso em parques urbanos e áreas de lazer, oferecendo uma solução de baixo custo e alta eficiência para o monitoramento de visitantes. Desenvolvemos um sistema automático de catracas que utiliza um Arduino UNO R3 e sensores ultrassônicos para reconhecer e contabilizar a passagem de pessoas, fornecendo dados em tempo real sobre a quantidade de visitantes presentes.

## Objetivo e Impacto
Nosso principal objetivo é acelerar e monitorar o fluxo de acesso, aumentando a segurança dos visitantes e contribuindo para uma melhor experiência geral no ambiente do parque. Acreditamos que a modernização da gestão de acesso é fundamental para construir espaços mais organizados e seguros.

## Este sistema visa:

* Monitorar o fluxo de pessoas em tempo real: Fornecendo dados precisos sobre a ocupação.
* Promover a modernização da gestão de parques: Substituindo métodos manuais por uma solução automatizada.
* Gerar relatórios para análise e tomada de decisões estratégicas: Oferecendo insights sobre padrões de visitação e capacidade.
* Garantir eficiência com baixo custo: Uma solução acessível que entrega resultados.

####  Contribuir para os Objetivos de Desenvolvimento Sustentável (ODS):
* Alinhado aos ODS 9 (Indústria, Inovação e Infraestrutura), 11 (Cidades e Comunidades Sustentáveis) e 16 (Paz, Justiça e Instituições Eficazes) ao promover infraestrutura inovadora e gestão eficiente.

## Como Funciona
O sistema foi projetado para ser intuitivo e funcional. Ele utiliza dois sensores ultrassônicos: um para a entrada e outro para a saída. Ao detectar a passagem de uma pessoa em qualquer direção, o sistema contabiliza o evento e aciona o mecanismo da catraca para permitir o acesso. A contagem de pessoas presentes é atualizada em tempo real, fornecendo um controle de fluxo eficiente.

## Tecnologias Utilizadas
* Arduino UNO R3: Microcontrolador principal responsável pela lógica do sistema.
* Sensor Ultrassônico: Para detecção de presença e distância.
* Mecanismo de Catraca: Acionado pelo Arduino.
* C++: Linguagem de programação utilizada para o firmware do Arduino.

## Avaliação e Próximos Passos
O projeto demonstrou ser eficaz e funcional, entregando os resultados esperados de forma satisfatória ao calcular entradas e saídas e controlar a catraca em ambos os sentidos. Apesar de utilizar tecnologias acessíveis e ter uma manutenção de baixo custo e simples verificação regular, reconhecemos o potencial para futuras melhorias e modernizações.

## Possíveis Melhorias e Evoluções:

* **Upgrade do Microcontrolador:** Substituir o Arduino UNO por um ESP32 para incorporar conectividade Wi-Fi, permitindo o envio de dados em tempo real para um servidor ou nuvem e dashboards mais robustos.

* **Integração de Novas Tecnologias:** Adicionar componentes como leitores de QR Code para controle de acesso por bilhetes eletrônicos, ou sensores de movimento para maior precisão.

* **Interface de Usuário (Dashboard):** Desenvolver uma interface web ou mobile para visualização dos dados em tempo real e geração de relatórios gráficos.

* **Sistema de Banco de Dados:** Implementar um banco de dados para armazenar o histórico de acessos para análises mais aprofundadas.

## Instalação e Uso

Para configurar o projeto:

1.  **Software:** Certifique-se de ter a IDE do Arduino instalada.
2.  **Hardware:** Conecte o Arduino UNO R3, os sensores ultrassônicos e o mecanismo da catraca conforme o esquemático.
3.  **Upload do Código:** Abra o arquivo `.ino` em `src/` na IDE do Arduino, selecione a placa e a porta correta e faça o upload do código para o Arduino.

O sistema iniciará automaticamente após o upload.

## Contato

Para dúvidas ou mais informações, entre em contato:

-   **Victor Hugo Barbosa** - [LinkedIn](https://www.linkedin.com/in/victor-hugoa-barbosa/)
-   **E-mail:** [victorb.hugoa@gmail.com]
