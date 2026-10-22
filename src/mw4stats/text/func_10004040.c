/*
 * MW4Stats.dll - FUN_10004040 (0x10004040, 30 B, __thiscall)
 * Destructor: calls sub-object dtor FUN_10004060, then if (flags&1)
 * operator_delete(this). RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10004060(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void FUN_10004040(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10004060
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_1001ee22
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
