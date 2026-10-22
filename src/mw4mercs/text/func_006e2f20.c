/* FUN_006e2f20 - 39 bytes, __thiscall, RET 0x4 */
extern void __cdecl FUN_006e2970(void);
extern void *g_0076b134;
__declspec(naked) void FUN_006e2f20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006e2970
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, -0x1
        jnz     L_e2f3a
        mov     eax, dword ptr [esi]
        push    eax
        call    dword ptr [g_0076b134]
    L_e2f3a:
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ecx + -0x8], eax
        mov     byte ptr [ecx + eax*0x1], 0x0
        pop     esi
        ret     0x4
    }
}
