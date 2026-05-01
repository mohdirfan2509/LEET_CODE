/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode res=new ListNode(-1);
        ListNode ans=res;
        while(list1 !=null && list2 !=null){
            if(list2.val > list1.val){
                res.next= new ListNode(list1.val);
                list1=list1.next;
            }else{
                res.next= new ListNode(list2.val);
                list2=list2.next;
            }
            res=res.next;
        }
        while(list1 !=null){
            res.next= new ListNode(list1.val);
            list1=list1.next;
            res=res.next;
        }
         while(list2 !=null){
            res.next= new ListNode(list2.val);
            list2=list2.next;
            res=res.next;
        }
        return ans.next;

    }
}