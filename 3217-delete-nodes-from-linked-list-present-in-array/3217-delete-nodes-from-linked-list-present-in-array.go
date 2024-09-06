/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func modifiedList(nums []int, head *ListNode) *ListNode {
    numSet := make(map[int]bool)
    for _, num := range nums {
        numSet[num] = true
    }

    for head != nil && numSet[head.Val] {
        head = head.Next
    }

    curr := head
    for curr != nil && curr.Next != nil {
        if numSet[curr.Next.Val] {
            curr.Next = curr.Next.Next
        } else {
            curr = curr.Next
        }
    }
    return head
}