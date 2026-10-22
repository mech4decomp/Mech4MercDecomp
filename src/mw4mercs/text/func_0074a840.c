/*
 * FUN_0074a840 (168 B) — RET 0x18 (6 stack params). DrawPrimitiveVB
 * wrapper: if a global callback (0x008AAD88) is set, calls it then the
 * object's vtable method; otherwise calls the vtable method directly.
 * On failure logs via FUN_006fabf0 and breaks (int 3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int code);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

/* data */
extern int g_8aad88;    /* 0x008AAD88 */

__declspec(naked) void func_0074a840(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_8aad88]
        test    eax, eax
        push    esi
        push    edi
        jz      l_else
        mov     ecx, dword ptr [ebp + 0x1c]
        mov     edx, dword ptr [ebp + 0x18]
        mov     esi, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [esi]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x14]
        push    edx
        push    ecx
        push    esi
        push    edi
        call    eax
        mov     edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    esi
        call    dword ptr [ebx + 0x7c]
        mov     esi, eax
        test    esi, esi
        pop     ebx
        jge     l_ret
        cmp     esi, 0x887601c2
        jz      l_ret
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa950
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      l_ret
        int     3
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x18

    l_else:
        mov     edx, dword ptr [ebp + 0x1c]
        mov     edi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [ebp + 0x18]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x7c]
        mov     esi, eax
        test    esi, esi
        jge     l_ret
        cmp     esi, 0x887601c2
        jz      l_ret
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa950
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      l_ret
        int     3

    l_ret:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x18
    }
}
