<?php
	/**Local que esta rodando o php*/
	$hostname = 'localhost';
	/**Nome de usuario que tem acesso */
	$username = 'root';
	/**Senha do usuario, no exemplo esta em branco */
	$senha = '';
	/**Banco de dados desejado */
	$banco = 'banco_teste';
	/**mysql_connect -- Abre uma conexao com o servidor MySQL */
	$db = mysqli_connect($hostname, $username, $senha);
	/**mysql_select_db -- Seleciona um banco de dados MySQL */
	mysqli_select_db($banco, $db);
?>