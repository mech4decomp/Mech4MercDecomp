/*
 * FUN_00700480 (56 B) — wcscmp-based string classifier. Returns 1 if
 * param_1 equals L"Product Name", else 1 - (param_1 != L"Mod Name").
 * Uses wcscmp (IAT 0x76b37c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * g_0076b37c;   /* wcscmp IAT */

__declspec(naked) void FUN_00700480(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [g_0076b37c]
        push    0x79fbe0
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_04a2
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     0x4
L_04a2:
        push    0x79fbfc
        push    esi
        call    edi
        add     esp, 0x8
        neg     eax
        sbb     al, al
        pop     edi
        inc     al
        pop     esi
        ret     0x4
    }
}
