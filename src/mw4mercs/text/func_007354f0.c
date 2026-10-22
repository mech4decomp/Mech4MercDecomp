/*
 * FUN_007354F0 (83 B) — Unlock wrapper.
 *
 * Calls virtual method at vtable+0x80 with 2 args; on failure (result < 0)
 * formats an error via FUN_006fabf0 and asserts (INT3) if the log fails.
 * Uses a 0x80-byte local buffer for FUN_00750300.
 *
 * __stdcall (RET 0x8, 2 dword params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00750300(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_007354F0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x80]
        mov     esi, eax
        test    esi, esi
        jge     L1
        push    ebx
        lea     ecx, [ebp - 0x80]
        push    ecx
        call    FUN_00750300
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a649c
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      L1
        int     3
L1:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
