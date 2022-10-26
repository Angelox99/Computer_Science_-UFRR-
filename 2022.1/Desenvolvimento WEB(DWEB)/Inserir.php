
<html>
<head>
	<title>Inserir no BD</title>
	<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1">
</head>
<body>
<?php
	/**Arquivo para conectar ao banco de dados */
	require("conectdb.php");
	/**Pegando a data */
	$data = date('Y-m-d');
	/**Pegando a hora */
	$hora = strftime("%H:%M:%S");
	/**Inserindo na tabela tb_mural, nos campos os valores das variaveis */
	$sqlinsert = "INSERT INTO tb_mural (id_mensagem, nome, mensagem, data, hora) VALUES ('', '$nome', '$mensagem', '$data', '$hora')";
	/**mysql_query -- Realiza uma query MySQL, executa o comando da variavel */
	/**O comando die server pra caso aconteca algum erro (Mostra uma mensagem e termina o script atual) */
	mysql_query($sqlinsert) or die ("Nao foi possivel inserir");
	/**Exibe as informacoes se for inserido com sucesso */
	echo "Na data $data e na hora $hora<br>$nome disse:<br>$mensagem";
?>
</body>
</html>