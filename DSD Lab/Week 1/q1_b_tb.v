`timescale 1ns/1ns
`include "q1_b.v"
module q1_b_tb;
reg x1,x2,x3;
wire f;
q1_b uut(x1,x2,x3,f);
initial
begin
$dumpfile("q1_b_tb.vcd");
$dumpvars(0,q1_b_tb);
x1=0;x2=0;x3=0;#20;
x1=0;x2=0;x3=1;#20;
x1=0;x2=1;x3=0;#20;
x1=0;x2=1;x3=1;#20;
x1=1;x2=0;x3=0;#20;
x1=1;x2=0;x3=1;#20;
x1=1;x2=1;x3=0;#20;
x1=1;x2=1;x3=1;#20;
$display("Test Complete");
end
endmodule
