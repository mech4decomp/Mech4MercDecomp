/*
 * FUN_00741ac0 (101 B) — Virtual "Set" wrapper with error reporting.
 *
 * Calls vtable[0xA0/4] on param_1 with 5 args. If the result is
 * negative, selects an error string based on param_4 & 1, formats it
 * via FUN_006fabf0 (asserting on failure with an INT3 breakpoint).
 * Returns the virtual call's result.
 *
 * __stdcall (RET 0x14 = 5 dword params), returns int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0073e160(int a, int b, int c, int d, int e);
extern int __cdecl FUN_006fabf0(char *fmt, ...);

__declspec(naked) int __stdcall FUN_00741ac0(int *param_1, int param_2, int param_3,
                                             int param_4, int *param_5)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x18]
        push    edi
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0xa0]
        mov     esi, eax
        test    esi, esi
        jge     label_41b1c
        test    byte ptr [ebp + 0x14], 1
        mov     eax, 0x7a9620
        jnz     label_41af8
        mov     eax, 0x76b768
label_41af8:
        mov     ecx, dword ptr [ebp + 0xc]
        push    eax
        mov     eax, dword ptr [edi + 0x8]
        push    eax
        push    ebx
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a95dc
        call    FUN_006fabf0
        add     esp, 0x1c
        test    eax, eax
        jz      label_41b1c
        int     3
label_41b1c:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x14
    }
}
