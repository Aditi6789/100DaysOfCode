package Day33;

public class FirstDuplicate {
    //Function to find the First duplicate in a array
    public static Integer getFirstDuplicate(int[] arr){

        //Iterate over each element in the array
        for(int i = 0; i<arr.length; i++){
            //Compare the urrent element with every other element that comes after it
            for(int j = i+1; j<arr.length; j++){
                //Check if the elements are equal
                if(arr[i] == arr[j]){
                    //If it is, return the element as the first duplicate
                    return arr[i];
                }
            }
        }
        return null;
    }
    public static void main(String[] args) {
        int[] arr = {2,1,3,5,3,2};
        Integer firstDuplicate = getFirstDuplicate(arr);
        if (getFirstDuplicate(arr) != null) {
            System.out.println("First duplicate : " + firstDuplicate);
        }else{
            System.out.println("No duplicate found " );
        }
    }
}
