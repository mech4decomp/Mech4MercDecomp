/* FUN_00627290 - __thiscall, 61 bytes
   ABL interpreter region. Sets a byte field and conditionally initializes
   a sub-object. */
__declspec(naked) void func_00627290(void)
{
    __asm {
        mov edx, dword ptr [esp+4]
        mov eax, dword ptr [ecx+0x134]
        and edx, 0xff
        mov dword ptr [ecx+0x80], edx
        jz L_c7
        mov ecx, dword ptr [eax+0x7c]
        test ecx, ecx
        jnz L_c7
        mov dword ptr [eax+0x70], 1
        mov dword ptr [eax+0xb8], 0x64
        mov dword ptr [eax+0x6c], 0x40c00000
    L_c7:
        mov dword ptr [eax+0x7c], edx
        ret 4
    }
}
