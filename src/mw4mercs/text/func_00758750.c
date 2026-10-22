/*
 * FUN_00758750 (58 B) — Wrapper that calls a virtual method (slot 0x14)
 * on an object, and on failure logs via FUN_006fabf0 and __debugbreak().
 *
 * __stdcall (RET 0xc, 3 params). CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_00758750(void *param_1, void *param_2, void *param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        push    ecx
        push    ebx
        push    esi
        call    dword ptr [eax + 0x14]
        mov     edi, eax
        test    edi, edi
        jge     skip
        push    ebx
        push    esi
        push    0x7aec78
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      skip
        int     3
skip:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
