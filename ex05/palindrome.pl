#!/bin/perl
use strict;

die "Usage: run only the executable palindrome.pl" if (@ARGV > 0);

print "Enter a string: ";
my $input = <>;
chomp($input);

my $no_space = $input;
$no_space =~ s/\s//g;

if (lc($no_space) eq reverse(lc($no_space)))
{
	print "The string is a palindrome!";
}
else
{
	print "The string is not a palindrome.";
}
