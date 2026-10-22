/*
 * FUN_0074A6D0 (59 B) — Virtual-call wrapper (slot 0x98); on failure
 * logs via FUN_0073E160 + FUN_006FABF0 and __debugbreak().
 *
 * __stdcall (RET 0x8, 2 params). CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073E160(void);
extern int __cdecl FUN_006FABF0(void);

__declspec(naked) int __stdcall FUN_0074A6D0(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x98]
        mov     esi, eax
        test    esi, esi
        jge     skip
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7aa8c8
        call    FUN_006FABF0
        add     esp, 0xc
        test    eax, eax
        jz      skip
        int     3
skip:
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x8
    }
}
