/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var mp = new Map();
    var j=0;
    var ans=[];
    nums.forEach((i)=>{
        if(mp.get(target-i)){
            ans.push(j);
            ans.push(mp.get(target-i)-1);
            // console.log(ans);
        }
        mp.set(i,j+1);
        j++;
    })
    return ans;
};