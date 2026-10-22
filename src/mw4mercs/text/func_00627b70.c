/* FUN_00627b70 - __thiscall, 20 bytes
   ABL interpreter region. */
extern void __cdecl FUN_00630e90(void);

__declspec(naked) void func_00627b70(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi+0x50]
        call FUN_00630e90
        mov byte ptr [esi+0x16e], 0
        pop esi
        ret
    }
}
