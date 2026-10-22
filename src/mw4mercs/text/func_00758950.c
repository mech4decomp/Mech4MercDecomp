/*
 * FUN_00758950 (78 B) — __stdcall (RET 0x10, 4 params). Calls
 * FUN_0075e0e2 (acmStreamSize) with the 4 params. If the result is
 * negative, formats a "FAILED (0x%x - %s) - acmStreamSize(0x%x, 0x%x, 0x%x, 0x%x)"
 * message via FUN_006fabf0 and traps (int 3) if the message is non-null.
 * Returns the acmStreamSize result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075e0e2(void *a, void *b, void *c, void *d);
extern void __cdecl FUN_0073e160(int v);
extern int  __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_00758950(void *param_1, void *param_2,
                                             void *param_3, void *param_4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x14]
        push    edi
        push    ebx
        push    eax
        push    ecx
        call    FUN_0075e0e2
        mov     esi, eax
        test    esi, esi
        jge     label_758995
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        push    edi
        push    ebx
        push    edx
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aedf0
        call    FUN_006fabf0
        add     esp, 0x1c
        test    eax, eax
        jz      label_758995
        int     3
    label_758995:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x10
    }
}
