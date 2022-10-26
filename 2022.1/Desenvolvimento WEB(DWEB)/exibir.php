<html>
<head>
	<title>exibindo o conteudo da tabela tm_mural</title>
	<meta http-equiv="Content-Type" content="text/html; charset-=iso-8859-1">
</head>
<body>
<?
	/**Arquivo para conectar ao banco de dados */
	require("conect.php");
	/**Selecionando os dados do banco de dados */
	$sql = "SELECT * FROM tb_mural";
	/**Buscando o limite da tabelapara exibicao */
	$limite = mysql_query("$sql");
	/**Comandos para exibir a tabela tb_mural */
	while ($sql = mysql_fetch_array($limite))
	{
		$id_mensagem	= $sql["id_mensagem"];
		$nome	= $sql["nome"];
		$mensagem	= $sql["mensagem"];
		$data	= $sql["data"];
		$hora	= $sql["hora"];

		/**Exibindo atraves do echo o conteudo abtido */
		echo "Mensagem do id $id_mensagem<br>$nome<br>$mensagem<br>Na data $data e na hora $hora<br><br>";
		
	}
	// fechando while
?>
</body>
</html>