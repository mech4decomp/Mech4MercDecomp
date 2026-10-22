/*
 * MW4Stats.dll - FUN_100043f0 (0x100043F0, 30 B, __thiscall)
 * Destructor: calls FUN_10001320(this); if (param_1 & 1) operator_delete(this).
 * RET 0x4. Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10001320(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void FUN_100043f0(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_10001320
        test byte ptr [esp+0x8], 0x1
        jz short L_08
        push esi
        call FUN_1001ee22
        add esp, 0x4
L_08:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
