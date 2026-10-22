/*
 * FUN_007585e0 (99 B) — Virtual "Set" wrapper with error reporting.
 *
 * Calls vtable[4] on param_1 with 7 args. If the result is negative,
 * formats an error string via FUN_006fabf0 (asserting on failure with
 * an INT3 breakpoint). Returns the virtual call's result.
 *
 * __stdcall (RET 0x1C = 7 dword params), returns int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00750720(int a, int b);
extern int __stdcall FUN_00750700(int a);
extern int __stdcall FUN_0073e160(int a);
extern int __cdecl FUN_006fabf0(char *fmt, ...);

__declspec(naked) int __stdcall FUN_007585e0(int *param_1, int param_2, int param_3,
                                             int param_4, int param_5, int param_6,
                                             int param_7)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ebp + 0x1c]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x18]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    edx
        push    ecx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x10]
        mov     esi, eax
        test    esi, esi
        jge     label_5863a
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    ebx
        call    FUN_00750720
        push    eax
        push    ebx
        call    FUN_00750700
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aebf0
        call    FUN_006fabf0
        add     esp, 0x18
        test    eax, eax
        jz      label_5863a
        int     3
label_5863a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x1c
    }
}
