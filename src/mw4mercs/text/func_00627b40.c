/* FUN_00627b40 - __thiscall, 40 bytes
   ABL interpreter region. */
extern void __cdecl FUN_00630ee0(void);

__declspec(naked) void func_00627b40(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi+0x164]
        test eax, eax
        jz L_b66
        mov cl, byte ptr [eax+0x510]
        test cl, cl
        jz L_b66
        mov ecx, dword ptr [esi+0x50]
        call FUN_00630ee0
        mov byte ptr [esi+0x16e], 1
    L_b66:
        pop esi
        ret
    }
}
