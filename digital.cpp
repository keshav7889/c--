#include<iostream>
using namespace std;
int main(){
    int choose_topic ;
    cout<<"this project is about basic understaing of  topics of digital logic"<<endl;
    cout<<"NOTE- for this basic understanding knowledge of number system is mandatory"<<endl;

cout<<"1.  logic gates "<<endl;
cout<<"2.  properties of logic gates "<<endl;
cout<<"3.  implentation of gates using NAND and NOR gate "<<endl;
cout<<"4.  half adder "<<endl;
cout<<"5.  full adder "<<endl;
cout<<"6.  multiplexer "<<endl;
cout<<"7.  demultiplexer"<<endl;
cout<<"8.  encoder"<<endl;
cout<<"9.  decoder "<<endl;
cout<<"10. latch "<<endl;
cout<<"11. SR latch"<<endl;
cout<<"12. SR flip-flop "<<endl;
cout<<"13. JK flip-flop "<<endl;
cout<<"14. T flip-flop "<<endl;
cout<<"15. D flip-flop "<<endl;
cout<<"16. conversion of flip flops "<<endl;
cout<<"17. counters "<<endl;
cout<<"18. registers "<<endl;

cout<<"choose a number between (1-18)"<<endl;
cin>>choose_topic;
switch(choose_topic){
case 1:
cout << "1. LOGIC GATES:\n";
    cout << "Logic gates are basic building blocks of digital circuits.\n";
    cout << "Examples: AND, OR, NOT, NAND, NOR, XOR, XNOR.\n\n";
break;
case 2:
 cout << "2. PROPERTIES OF LOGIC GATES:\n";
    cout << "Commutative: A+B = B+A\n";
    cout << "Associative: (A+B)+C = A+(B+C)\n";
    cout << "Distributive: A(B+C) = AB + AC\n";
    cout << "De Morgan’s Theorem: (AB)' = A' + B'\n\n";
break;
case 3:
cout << "3. IMPLEMENTATION USING NAND & NOR GATES:\n";
    cout << "NAND and NOR are universal gates.\n";
    cout << "Any logic gate can be implemented using only NAND or only NOR.\n\n";
break;
case 4:
cout << "4. HALF ADDER:\n";
    cout << "Adds two single-bit binary numbers.\n";
    cout << "Sum = A XOR B, Carry = A AND B\n\n";
break;
case 5:
cout << "5. FULL ADDER:\n";
    cout << "Adds three bits: A, B, and Carry-in.\n";
    cout << "Outputs Sum and Carry-out.\n\n";
break;
case 6:
cout << "6. MULTIPLEXER (MUX):\n";
    cout << "Selects one input from multiple inputs using select lines.\n";
    cout << "Example: 2:1, 4:1 multiplexer.\n\n";
break;
case 7:
 cout << "7. DEMULTIPLEXER (DEMUX):\n";
    cout << "Takes one input and distributes it to one of many outputs.\n\n";
break;
case 8:
cout << "8. ENCODER:\n";
    cout << "Converts multiple inputs into a smaller number of output bits.\n";
    cout << "Example: 8-to-3 encoder.\n\n";
break;
case 9:
cout << "9. DECODER:\n";
    cout << "Converts binary input into multiple outputs.\n";
    cout << "Example: 3-to-8 decoder.\n\n";

break;
case 10:
cout << "10. LATCH:\n";
    cout << "A latch is a level-sensitive memory device.\n";
    cout << "It stores 1-bit data.\n\n";
break;
case 11:
 cout << "11. SR LATCH:\n";
    cout << "SR means Set and Reset.\n";
    cout << "Invalid condition when S = R = 1.\n\n";
break;
case 12:
cout << "12. SR FLIP-FLOP:\n";
    cout << "Clocked version of SR latch.\n";
    cout << "Changes output only on clock pulse.\n\n";
break;
case 13:
cout << "13. JK FLIP-FLOP:\n";
    cout << "Improved SR flip-flop.\n";
    cout << "No invalid state; toggles when J = K = 1.\n\n";
break;
case 14:
 cout << "14. T FLIP-FLOP:\n";
    cout << "T stands for Toggle.\n";
    cout << "When T = 1, output toggles.\n\n";
break;
case 15:
cout << "15. D FLIP-FLOP:\n";
    cout << "Stores data present at D input on clock edge.\n";
    cout << "Used in registers and memory.\n\n";
break;
case 16:
 cout << "16. CONVERSION OF FLIP-FLOPS:\n";
    cout << "One type of flip-flop can be converted into another using logic gates.\n";
    cout << "Example: JK to D, SR to JK.\n\n";
break;
case 17:
cout << "17. COUNTERS:\n";
    cout << "Sequential circuits that count clock pulses.\n";
    cout << "Types: Up, Down, Up-Down, Synchronous, Asynchronous.\n\n";
break;
case 18:
 cout << "18. REGISTERS:\n";
    cout << "Group of flip-flops used to store multiple bits.\n";
    cout << "Examples: Shift registers, PIPO, SISO, SIPO.\n\n";
break;
default:
cout<<"please choose a valid option"<<endl;
break;
}
cout<<"if u want handwritten notes then click on link given below"<<endl;
cout<<"https://drive.google.com/drive/folders/10vH7tcvhIKNsUDb7EeWb4EBvCieS9zyI"<<endl;
return 0;
}