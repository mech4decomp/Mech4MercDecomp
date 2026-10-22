/*
 * FUN_004d1420 (89 B) — MLR network subsystem: checks a string against
 * "instance"/"data"/"file"/"notation" via _stricmp (IAT). __stdcall RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2ac;   /* IAT: _stricmp */

__declspec(naked) void FUN_004d1420(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [g_0076b2ac]
        push    0x77253c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_4d146f
        push    0x772534
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_4d146f
        push    0x77252c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_4d146f
        push    0x772520
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_4d146f
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x4
L_4d146f:
        pop     edi
        mov     eax, 0x1
        pop     esi
        ret     0x4
    }
}
