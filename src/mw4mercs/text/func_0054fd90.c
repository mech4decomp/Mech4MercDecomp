// 0x0054FD90 (30B) - Copy negated floats from this to output buffer
// Copies -this[0x08], -this[0x18], -this[0x28] to dst[0], dst[4], dst[8]
__declspec(naked) void __stdcall func_0054fd90(void) {
    __asm {
        fld dword ptr [ecx + 8]
        mov eax, [esp + 4]
        fchs
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x18]
        fchs
        fstp dword ptr [eax + 4]
        fld dword ptr [ecx + 0x28]
        fchs
        fstp dword ptr [eax + 8]
        ret 4
    }
}
