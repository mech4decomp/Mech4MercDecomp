/* FUN_006e1bb0 - 63 bytes, __thiscall, RET 0x4 */
extern void __cdecl FUN_004084e0(void *);
__declspec(naked) void FUN_006e1bb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x79ecf8
        mov     eax, dword ptr [esi + 0x38]
        test    eax, eax
        jz      L_e1bd3
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e1bd3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_e1bd3:
        test    byte ptr [esp + 0x8], 0x1
        mov     dword ptr [esi], 0x79ecec
        jz      L_e1be9
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_e1be9:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
