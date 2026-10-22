/*
 * FUN_007410E0 (59 B) — Virtual-call wrapper (slot 0x20); on failure
 * logs via FUN_0073E160 + FUN_006FABF0 and __debugbreak().
 *
 * __stdcall (RET 0x8, 2 params). CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073E160(void);
extern int __cdecl FUN_006FABF0(void);

__declspec(naked) int __stdcall FUN_007410E0(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        push    eax
        call    dword ptr [ecx + 0x20]
        mov     esi, eax
        test    esi, esi
        jge     skip
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7a901c
        call    FUN_006FABF0
        add     esp, 0x10
        test    eax, eax
        jz      skip
        int     3
skip:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x8
    }
}
