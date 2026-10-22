/*
 * FUN_007004c0 (158 B) — Filter an array of pointers, allocate a filtered
 * copy, and pass it to a virtual method on param_1's object.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006ffe80(void *param);
extern char __stdcall FUN_00700480(void *param);
extern void *g_malloc;   /* IAT 0x0076b294 */
extern void *g_free;     /* IAT 0x0076b2d0 */

__declspec(naked) void __stdcall FUN_007004c0(void *param_1, void *param_2)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        push    ebx
        call    FUN_006ffe80
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [edi]
        lea     eax, [esi*4 + 0x0]
        push    eax
        call    dword ptr [g_malloc]
        add     esp, 0x4
        test    esi, esi
        mov     ebp, eax
        mov     dword ptr [esp + 0x1c], 0x0
        jbe     L_0052d
        add     edi, 0x4
        mov     ebx, ebp
        mov     dword ptr [esp + 0x10], edi
    L_004fd:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jz      L_0051b
        push    edi
        call    FUN_00700480
        test    al, al
        jnz     L_0051b
        mov     ecx, dword ptr [esp + 0x1c]
        inc     ecx
        mov     dword ptr [ebx], edi
        mov     dword ptr [esp + 0x1c], ecx
        add     ebx, 0x4
    L_0051b:
        mov     edi, dword ptr [esp + 0x10]
        add     edi, 0x4
        dec     esi
        mov     dword ptr [esp + 0x10], edi
        jnz     L_004fd
        mov     ebx, dword ptr [esp + 0x18]
    L_0052d:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [eax]
        lea     esi, [ebx + 0x8]
        push    esi
        push    ebp
        push    edx
        push    eax
        call    dword ptr [ecx + 0xc]
        push    ebp
        mov     edi, eax
        call    dword ptr [g_free]
        add     esp, 0x4
        test    edi, edi
        jge     L_00556
        mov     dword ptr [esi], 0x0
    L_00556:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
