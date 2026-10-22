/*
 * FUN_0075B340 (134 B) — __stdcall, RET 0x10 (4 params).
 *
 * Copies a string (param_2) into a local buffer, then calls a virtual
 * method (vtable+0x24) with (param_1, param_2, 0, param_3, param_4).
 * On failure (<0), formats an error message via FUN_006fabf0 and
 * triggers INT3 if it returns nonzero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_00751de0(void *a);
extern int __cdecl FUN_0073e160(int a, void *b, void *c, void *d);
extern int __cdecl FUN_006fabf0(void *fmt, int a, int b);

__declspec(naked) void __stdcall FUN_0075B340(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x40
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        push    ebx
        call    FUN_00751de0
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [ebp - 0x40]
        mov     edi, edx
        mov     edx, dword ptr [ebp + 0x14]
        rep movsd
        push    edx
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        and     ecx, 0x3
        push    0x0
        rep movsb
        mov     edi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [ecx + 0x24]
        mov     esi, eax
        test    esi, esi
        jge     L1
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    ecx
        push    edx
        call    FUN_00751de0
        push    eax
        lea     eax, [ebp - 0x40]
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af540
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
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
