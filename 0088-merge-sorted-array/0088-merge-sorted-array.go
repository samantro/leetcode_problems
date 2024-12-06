func merge(nums1 []int, m int, nums2 []int, n int)  {
    i, j := m+n-1,m-1;
    for ; i >= n && j >= 0; {
        nums1[i] = nums1[j];
        i--
        j--
    }
    i, j, k := n, 0, 0
    for ;i< m+n && j<n; {
        if nums1[i] <= nums2[j] {
            nums1[k] = nums1[i]
            k++
            i++
        }else {
            nums1[k] = nums2[j]
            k++
            j++
        } 
    }
    for j<n {
        nums1[k] = nums2[j]
        k++
        j++
    }
}