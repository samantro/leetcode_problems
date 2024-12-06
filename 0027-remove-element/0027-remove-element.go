func removeElement(nums []int, val int) int {
    j := make([]int, 0)
    for i:=0; i<len(nums); {
        if nums[i] != val {
            j = append(j,nums[i])
        }
        i++
    }
    for i:=0; i<len(j); {
        nums[i] = j[i] 
        i++
    }
    return len(j)
}