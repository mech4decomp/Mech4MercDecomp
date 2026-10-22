/*
 * FUN_00741D80 (82 B) — SetPlayerData wrapper.
 *
 * Calls virtual method at vtable+0x74 with 5 args; on failure (result < 0)
 * formats an error via FUN_006fabf0 and asserts (INT3) if the log fails.
 *
 * __stdcall (RET 0x14, 5 dword params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_00741D80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x18]
        push    edi
        push    ebx
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x74]
        mov     esi, eax
        test    esi, esi
        jge     L1
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9748
        call    FUN_006fabf0
        add     esp, 0x1c
        test    eax, eax
        jz      L1
        int     3
L1:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x14
    }
}
