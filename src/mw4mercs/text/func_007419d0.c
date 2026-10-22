/*
 * FUN_007419D0 (115 B) — __stdcall (RET 0x18, 6 params).
 *
 * Virtual dispatch through vtable slot +0x64, then error handling:
 * on failure, formats "FAILED (0x%x - %s) - Receive(%s)" via
 * FUN_006fabf0 and traps (INT3) if the log call succeeds.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074d020(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void __stdcall FUN_007419d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x1c]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x18]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0x64]
        mov     esi, eax
        test    esi, esi
        jz      L_741a3a
        cmp     esi, 0x887700be
        jnz     L_741a08
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x18
L_741a08:
        test    esi, esi
        jge     L_741a3a
        cmp     esi, 0x887700be
        jz      L_741a3a
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        push    eax
        push    edi
        call    FUN_0074d020
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9584
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      L_741a3a
        int     3
L_741a3a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x18
    }
}
