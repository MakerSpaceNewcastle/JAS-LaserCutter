offset = 5.5; //was 3.2
nibble_protrusion = 4;


focal_length = 63.5;
tool_width = 25;

union() {
square([focal_length + nibble_protrusion + offset, tool_width]);
square([nibble_protrusion, tool_width + nibble_protrusion]);
}

translate([10,10,0]) text(size=6, text="63.5mm lens");

