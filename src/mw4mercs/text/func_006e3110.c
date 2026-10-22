/* FUN_006e3110 - 55 bytes, __cdecl, RET */
extern void *g_0076b12c;
__declspec(naked) void FUN_006e3110(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        jnz     L_e3125
        test    esi, esi
        jz      L_e3125
        xor     eax, eax
        pop     esi
        ret
    L_e3125:
        push    0x0
        push    0x0
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    esi
        push    -0x1
        push    eax
        push    0x0
        push    0x0
        call    dword ptr [g_0076b12c]
        test    eax, eax
        jle     L_e3145
        mov     byte ptr [eax + esi*0x1 + -0x1], 0x0
    L_e3145:
        pop     esi
        ret
    }
}
