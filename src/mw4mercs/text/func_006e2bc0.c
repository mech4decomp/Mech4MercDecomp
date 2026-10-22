/* FUN_006e2bc0 - 51 bytes, __thiscall, RET 0x4 */
extern void *g_0076b134;
extern void __cdecl FUN_006e2b20(void *);
__declspec(naked) void FUN_006e2bc0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        test    edi, edi
        mov     esi, ecx
        jnz     L_e2bdc
        xor     eax, eax
        push    edi
        push    eax
        call    FUN_006e2b20
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    L_e2bdc:
        push    edi
        call    dword ptr [g_0076b134]
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_006e2b20
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
