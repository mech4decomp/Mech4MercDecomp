/* FUN_0067a540 - HUD debug menu */
extern void *__cdecl FUN_0067a500(void);

__declspec(naked) void func_0067a540(void)
{
    __asm {
        call FUN_0067a500
        test eax, eax
        jnz cont
        ret
cont:
        call FUN_0067a500
        mov eax, dword ptr [eax + 0x384]
        ret
    }
}
