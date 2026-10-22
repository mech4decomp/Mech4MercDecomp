/*
 * FUN_00718950 (110 B) - __stdcall version-string formatter (RET 0xc).
 *
 * Formats a version into param_1 via sprintf (IAT 0x0076b420). If
 * param_3's high word is zero, uses "%d.%d.%04d"; otherwise uses
 * "%d.%d.%02d.%04d". Returns param_1.
 *
 * __stdcall, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (*g_0076b420)(void);

__declspec(naked) char *__stdcall FUN_00718950(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        test    eax, 0xffff0000
        push    esi
        jnz     label_718987
        mov     esi, dword ptr [esp + 0x8]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, eax
        and     ecx, 0xffff
        push    ecx
        shr     eax, 0x10
        push    eax
        push    0x7a3500
        push    esi
        call    dword ptr [g_0076b420]
        add     esp, 0x14
        mov     eax, esi
        pop     esi
        ret     0xc
label_718987:
        mov     esi, dword ptr [esp + 0x8]
        mov     edx, eax
        and     edx, 0xffff
        push    edx
        shr     eax, 0x10
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, eax
        and     ecx, 0xffff
        push    ecx
        shr     eax, 0x10
        push    eax
        push    0x7a34f0
        push    esi
        call    dword ptr [g_0076b420]
        add     esp, 0x18
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
