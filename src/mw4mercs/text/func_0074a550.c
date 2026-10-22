/*
 * FUN_0074A550 (59 B) — Virtual-call wrapper (slot 0xC); on failure
 * logs via FUN_0073E170 + FUN_006FAC00 and __debugbreak().
 *
 * __stdcall (RET 0x8, 2 params). CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073E170(void);
extern int __cdecl FUN_006FAC00(void);

__declspec(naked) int __stdcall FUN_0074A550(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ecx
        push    edi
        call    dword ptr [eax + 0xC]
        mov     esi, eax
        test    esi, esi
        jge     skip
        push    edi
        push    esi
        call    FUN_0073E170
        push    eax
        push    esi
        push    0x7a623c
        call    FUN_006FAC00
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
