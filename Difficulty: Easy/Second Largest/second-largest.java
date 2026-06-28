class Solution {
	public int getSecondLargest(int[] arr) {
		// code here
		int max = Integer.MIN_VALUE;
		int max2 = Integer.MIN_VALUE;
		for (int i = 0; i<arr.length; i++)
			{
			if (arr[i]>max)
				{
				max2 = max;
				max = arr[i];
			}
			else if (arr[i]>max2 && arr[i] != max)
				{
				max2 = arr[i];
			}
		}
		if(max2==Integer.MIN_VALUE)
		return -1;
		return max2;
	}
}
