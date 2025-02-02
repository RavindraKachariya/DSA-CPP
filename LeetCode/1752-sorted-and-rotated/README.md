<h2><a href="https://leetcode.com/problems/check-if-array-is-sorted-and-rotated">Check if Array Is Sorted and Rotated</a></h2>

<img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr>

<p><strong>Problem Statement:</strong></p>
<p>Given an array <code>nums</code>, return <code>true</code> if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return <code>false</code>.</p>

<p>An array <code>A</code> was <strong>originally sorted</strong> if and only if <code>A</code> can be sorted by shifting elements cyclically.</p>

<p><strong>Examples:</strong></p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [3,4,5,1,2]
<strong>Output:</strong> true
<strong>Explanation:</strong> [1,2,3,4,5] is sorted and can be rotated to get [3,4,5,1,2].
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [2,1,3,4]
<strong>Output:</strong> false
<strong>Explanation:</strong> It is not sorted and rotated.
</pre>

<p><strong>Example 3:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,2,3,4,5]
<strong>Output:</strong> true
<strong>Explanation:</strong> It is already sorted and rotated (zero times).
</pre>

<p><strong>Constraints:</strong></p>
<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>

