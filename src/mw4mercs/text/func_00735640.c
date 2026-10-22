/*
 * FUN_00735640 (100 B) — Virtual "Set" wrapper with error reporting.
 *
 * Calls vtable[7] on param_1 with 6 args. If the result is negative,
 * re-invokes FUN_00750360 with the same 6 args, formats an error string
 * via FUN_006fabf0 (asserting on failure with an INT3 breakpoint), and
 * returns the virtual call's result.
 *
 * __stdcall (RET 0x18 = 6 dword params), returns int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00750360(int a, int b, int c, int d, int e, int f);
extern int __stdcall FUN_0073e160(int a, int b);
extern int __cdecl FUN_006fabf0(char *fmt, ...);

__declspec(naked) int __stdcall FUN_00735640(int *param_1, int param_2, int param_3,
                                             int param_4, int param_5, int param_6)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x1c]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x1c]
        mov     esi, eax
        test    esi, esi
        jge     label_3569b
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    edi
        call    FUN_00750360
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a6534
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      label_3569b
        int     3
label_3569b:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x18
    }
}
