func majorityElement(nums []int) int {
    c, res:= 0, 0
    for i:=0;i<len(nums);i++ {
        if c==0 {
            res = nums[i]
        } 
        if res == nums[i] {
            c++
        } else {
            c--
        }
    }
    return res;
}