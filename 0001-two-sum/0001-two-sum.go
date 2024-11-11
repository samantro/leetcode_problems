func twoSum(nums []int, target int) []int {
    two := make(map[int]int)
    for i := 0; i < len(nums); i++ {
        if j, ok := two[nums[i]]; ok {
            return []int{j, i}
        }
        two[target - nums[i]] = i
    }
    return nil
}