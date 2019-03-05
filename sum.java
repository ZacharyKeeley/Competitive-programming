        for (int i = 0; i < numbers.length; i++)
        {
            int index = Arrays.binarySearch(numbers, target - numbers[i]);
            
            if (index >= 0)
            {
                int[] array = new int[2];
                
                array[0] = i + 1;
                
                if (i + 1 == index + 1)
                {
                    array[1] = index + 2;
                }
                else
                {
                    array[1] = index + 1;
                }
                
                return array;
            }
        }
        
        return null;
