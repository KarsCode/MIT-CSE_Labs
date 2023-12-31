`timescale 1ns/1ns
`include "q2.v"
module q2_tb;
reg x1,x2,x3,x4;
wire f;
q2 uut(x1,x2,x3,x4,f);
initial
begin
$dumpfile("q2_tb.vcd");
$dumpvars(0,q2_tb);
x1=0;x2=0;x3=0;x4=0;#20;
x1=0;x2=0;x3=0;x4=1;#20;
x1=0;x2=0;x3=1;x4=0;#20;
x1=0;x2=0;x3=1;x4=1;#20;
x1=0;x2=1;x3=0;x4=0;#20;
x1=0;x2=1;x3=0;x4=1;#20;
x1=0;x2=1;x3=1;x4=0;#20;
x1=0;x2=1;x3=1;x4=1;#20;
x1=1;x2=0;x3=0;x4=0;#20;
x1=1;x2=0;x3=0;x4=1;#20;
x1=1;x2=0;x3=1;x4=0;#20;
x1=1;x2=0;x3=1;x4=1;#20;
x1=1;x2=1;x3=0;x4=0;#20;
x1=1;x2=1;x3=0;x4=1;#20;
x1=1;x2=1;x3=1;x4=0;#20;
x1=1;x2=1;x3=1;x4=1;#20;

$display("Test Complete");
end
endmodule
