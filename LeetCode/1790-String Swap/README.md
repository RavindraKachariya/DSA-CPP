<h2><a href="https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal">Check if One String Swap Can Make Strings Equal</a></h2>

<img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr>

<p><strong>Problem Statement:</strong></p>
<p>You are given two strings <code>s1</code> and <code>s2</code> of equal length. A string swap consists of choosing two indices and swapping the characters at these indices in one of the strings.</p>

<p>Return <code>true</code> if it is possible to make <code>s1</code> equal to <code>s2</code> by performing at most one string swap, otherwise, return <code>false</code>.</p>

<p><strong>Examples:</strong></p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> s1 = "bank", s2 = "kanb"
<strong>Output:</strong> true
<strong>Explanation:</strong> Swap characters at indices 0 and 2 in "bank" to get "kanb".
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> s1 = "attack", s2 = "defend"
<strong>Output:</strong> false
<strong>Explanation:</strong> It is impossible to make the strings equal with one swap.
</pre>

<p><strong>Constraints:</strong></p>
<ul>
	<li><code>1 &lt;= s1.length, s2.length &lt;= 100</code></li>
	<li><code>s1.length == s2.length</code></li>
	<li><code>s1</code> and <code>s2</code> consist of lowercase English letters.</li>
</ul>
