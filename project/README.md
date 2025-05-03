# GerenTAR

#### Video Demo: [Assista ao vídeo](https://www.youtube.com/watch?v=9biurFkAxCk)

#### Description

O **GerenTAR** é uma aplicação web de gerenciamento de tarefas (to-do list) criada com o objetivo de ajudar usuários a manterem suas atividades organizadas de maneira prática e intuitiva. Seu foco é oferecer um ambiente limpo, seguro e acessível para que qualquer pessoa possa cadastrar, consultar, editar e excluir suas tarefas diárias com agilidade.

O projeto foi desenvolvido utilizando **Python** como linguagem principal, com o framework **Flask** para estruturação do backend web. Para a persistência dos dados, foi escolhido o banco de dados **SQLite**, e a manipulação dos modelos é feita via **Flask-SQLAlchemy**. A autenticação é gerenciada pelo **Flask-Login**, garantindo que cada usuário só tenha acesso às próprias tarefas.

### Funcionalidades principais

- Cadastro e login de usuários com validação de e-mail;
- Adição de novas tarefas com descrição e data limite;
- Visualização separada de tarefas pendentes e concluídas;
- Marcação de tarefas como concluídas;
- Exclusão de tarefas específicas;
- Feedback visual das ações com mensagens de sucesso/erro.

---

## Tecnologias utilizadas

- **Python** – Linguagem principal do projeto;
- **Flask** – Framework web;
- **Flask-SQLAlchemy** – ORM para manipulação do banco;
- **Flask-Login** – Gerenciamento de sessões e autenticação;
- **SQLite** – Banco de dados relacional local;
- **Email-Validator** – Validação de e-mails.

---

## Estrutura do Projeto

- `scripts.py` – Arquivo principal para execução da aplicação;
- `models.py` – Modelos de banco de dados (Usuário e Tarefa);
- `routes.py` – Arquivo com todas as rotas da aplicação;
- `templates/` – Páginas HTML;
- `config.py/` – Módulo usado para interagir com o sistema operacional como acessar variáveis de ambiente;
- `requirements.txt` – Dependências da aplicação;
- `shell.py` – Útil para importar principais funções para checar o banco.

---

## Como rodar o projeto?

### 1️⃣ Criar e ativar o ambiente virtual

```bash
python -m venv venv
source venv/bin/activate  # ou .\venv\Scripts\activate no Windows


### 2️⃣ *Instalar as dependências*
```bash
pip install -r requirements.txt
```

### 3️⃣ *Executar a aplicação*
```bash
python scripts.py #ou flask run
```

### 4️⃣ *Banco de dados: Configuração e migração*
```bash
flask db init
flask db migrate -m "Configuração inicial"
flask db upgrade
```
