/*
 * FUN_00740f60 (101 B) — Virtual "Set" wrapper with error reporting.
 *
 * Calls vtable[0x84/4] on param_1 with 7 args. If the result is
 * negative, formats an error string via FUN_006fabf0 (asserting on
 * failure with an INT3 breakpoint). Returns the virtual call's result.
 *
 * __stdcall (RET 0x1C = 7 dword params), returns int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0073e160(int a, int b, int c, int d, int e, int f, int g);
extern int __cdecl FUN_006fabf0(char *fmt, ...);

__declspec(naked) int __stdcall FUN_00740f60(int *param_1, int param_2, int param_3,
                                             int param_4, int param_5, int param_6,
                                             int param_7)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x20]
        push    edi
        push    ebx
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x84]
        mov     esi, eax
        test    esi, esi
        jge     label_40fbc
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a8f28
        call    FUN_006fabf0
        add     esp, 0x24
        test    eax, eax
        jz      label_40fbc
        int     3
label_40fbc:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x1c
    }
}
