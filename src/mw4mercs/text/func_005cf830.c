/*
 * FUN_005cf830 (73 B) — __thiscall copy constructor
 * Copies a 0x38-byte object from [arg] into this, calling FUN_00767400
 * on the sub-object at offset 0x14.
 */

__declspec(naked) void func_005cf830(void)
{
    

extern void __cdecl FUN_007673da(void);
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, [esp + 0x0c]
        mov     ecx, [edi + 0x04]
        mov     edx, [edi + 0x08]
        mov     eax, [edi]
        mov     [esi + 0x04], ecx
        mov     ecx, [edi + 0x10]
        mov     [esi + 0x08], edx
        mov     [esi], eax
        mov     eax, [edi + 0x0c]
        lea     edx, [edi + 0x14]
        mov     [esi + 0x10], ecx
        push    edx
        lea     ecx, [esi + 0x14]
        mov     [esi + 0x0c], eax
        call FUN_007673da
        mov     eax, [edi + 0x2c]
        mov     ecx, [edi + 0x30]
        mov     edx, [edi + 0x34]
        mov     [esi + 0x2c], eax
        pop     edi
        mov     [esi + 0x30], ecx
        mov     [esi + 0x34], edx
        mov     eax, esi
        pop     esi
        ret     0x04
    }


}
