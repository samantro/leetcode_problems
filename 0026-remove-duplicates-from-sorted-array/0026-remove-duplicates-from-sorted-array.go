func removeDuplicates(nums []int) int {
    j, n:=0, len(nums)
    for i:=0;i<n;{
        nums[j] = nums[i]
        j++
        if i<n-1 && nums[i] == nums[i+1] {
            for i<n-1 && nums[i] == nums[i+1] {
                i++
            }
        }
        i++
    }
    return j
}