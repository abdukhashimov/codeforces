import unittest

from div_third import number_replacement


class Solution(unittest.TestCase):
    def test_number_replacement(self):
        test_cases = [
            {
                "length": 5,
                "array": [2, 3, 2, 4, 1],
                "word": "cacta",
                "output": "YES"
            },
            {
                "length": 1,
                "array": [50],
                "word": "a",
                "output": "YES"
            },
            {
                "length": 2,
                "array": [11, 22],
                "word": "ab",
                "output": "YES"
            },
            {
                "length": 4,
                "array": [1, 2, 2, 1],
                "word": "aaab",
                "output": "NO"
            },
            {
                "length": 5,
                "array": [1, 2, 3, 2, 1],
                "word": "aaaaa",
                "output": "YES"
            },
            {
                "length": 6,
                "array": [1, 10, 2, 9, 3, 8],
                "word": "azzfdb",
                "output": "YES"
            },
            {
                "length": 7,
                "array": [1, 2, 3, 4, 1, 1, 2],
                "word": "abababb",
                "output": "NO"
            }
        ]

        for test in test_cases:
            self.assertEqual(
                number_replacement(
                    test["length"], test["array"], test["word"]),
                test["output"]
            )
