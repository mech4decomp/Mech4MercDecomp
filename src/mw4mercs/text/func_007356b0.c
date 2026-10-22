/*
 * FUN_007356B0 (84 B) — Flip wrapper.
 *
 * Calls virtual method at vtable+0x2C with 3 args; on failure (result < 0)
 * and not the special error code 0x887601C2, formats an error via
 * FUN_006fabf0 and asserts (INT3) if the log fails.
 *
 * __stdcall (RET 0xC, 3 dword params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074dea0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_007356B0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x2c]
        mov     esi, eax
        test    esi, esi
        jge     L1
        cmp     esi, 0x887601c2
        jz      L1
        push    ebx
        call    FUN_0074dea0
        mov     edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a6558
        call    FUN_006fabf0
        add     esp, 0x18
        test    eax, eax
        jz      L1
        int     3
L1:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
