func twoSum(nums []int, target int) []int {
    twoS := make(map[int]int);
    for i:=0; i<len(nums);i++{
        if j, prs := twoS[nums[i]]; prs {
            return  []int{j, i}
        }
        twoS[target-nums[i]] = i
    }
    return nil
}