#!/bin/php
<?php

$input = strtolower(readline("Choose rock, paper, or scissors: "));

$rps = ["rock", "paper", "scissors"];
$ai = $rps[rand(0, 2)];

if (($input !== $rps[0]) &&
	($input !== $rps[1]) &&
	($input !== $rps[2]))
{
	exit("You can only choose 'rock', 'paper' or 'scissors'.\n");
}
if ($input == $ai)
{
	echo "It's a draw. The computer chose $ai.\n";
}
else if (($input == $rps[0] && $ai == $rps[1]) ||
		($input == $rps[1] && $ai == $rps[2]) ||
		($input == $rps[2] && $ai == $rps[1]))
{
	echo "Sorry, you lost. The computer chose $ai.\n";
}
else
{
	echo "Congratulations! You won! The computer chose $ai.\n";
}

?> 