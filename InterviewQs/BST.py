import random

class Node:
    def __init__(self, value):
        self.left = None
        self.right = None
        self.val = value

def insert(root, value):
    if root is None:
        return Node(value)

    if value < root.val:
        root.left = insert(root.left, value)
    elif value > root.val:
        root.right = insert(root.right, value)

    return root

def insert_bad(root, value):
    if root is None:
        return Node(value)

    if random.random() < 0.5:
        root.left = insert_bad(root.left, value)
    else:
        root.right = insert_bad(root.right, value)

    return root

def insert_to_leftmost(root, value):
    if root is None:
        return Node(value)

    root.left = insert_to_leftmost(root.left, value)
    return root

# Create a function that check if a binary tree is
# a binary search tree.
# Return true if it is a BST
# Return false if it is NOT a BST
def is_bst(root):
    # TO-DO: Implement your function HERE
    return True

def main():
    random.seed()

    for tree_number in range(1, 6):
        root = None
        values = [10, 5, 15, 3, 7, 12, 18, 2, 4, 6, 8, 11, 13, 17, 19, 1, 9, 14, 16, 20]
        random.shuffle(values)
        for value in values:
            root = insert(root, value)

        if is_bst(root):
            print(f"Test {tree_number}: Passed")
        else:
            print(f"Test {tree_number}: Failed")
        print()

    for tree_number in range(1, 6):
        root = None
        values = [10, 5, 15, 3, 7, 12, 18, 2, 4, 6, 8, 11, 13, 17, 19, 1, 9, 14, 16, 20]
        random.shuffle(values)
        for value in values:
            root = insert_bad(root, value)
        insert_to_leftmost(root, 21)

        if not is_bst(root):
            print(f"Test {tree_number + 5}: Passed")
        else:
            print(f"Test {tree_number + 5}: Failed")
        print()

if __name__ == "__main__":
    main()