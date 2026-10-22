/*
 * FUN_00706f20 (411 B) — gosScript command-string builder (__fastcall,
 * ECX = this). Builds a "\\g=\\m=\\v=\\a=\\h=\\r=" command string plus a
 * per-entry "\\p%02d=%s\\c%02d=%s" loop, then dispatches it through the
 * global object at g_008aaae4 (vtable slots 0x58/0x7c). Uses strchr,
 * strncat, sprintf IATs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b308;   /* IAT: strchr */
extern void *g_0076b2f8;   /* IAT: strncat */
extern void *g_0076b420;   /* IAT: sprintf */
extern int   g_00858924;   /* global string pointer */
extern void *g_008aaae4;   /* global object pointer */
extern void *__cdecl FUN_006f3c80(void);
extern void __stdcall FUN_006f4230(void *ptr);

__declspec(naked) void FUN_00706f20(void)
{
    __asm {
        sub     esp, 0x104
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [g_0076b308]
        mov     ebp, ecx
        lea     eax, [ebp+0x180c]
        push    0x5c
        lea     esi, [ebp+0x10]
        push    eax
        mov     byte ptr [esi], 0x0
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_74d
        mov     byte ptr [eax], 0x0
L_74d:
        lea     ebx, [ebp+0x17c8]
        push    0x5c
        push    ebx
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_762
        mov     byte ptr [eax], 0x0
L_762:
        mov     edi, dword ptr [g_0076b2f8]
        push    0xbb8
        push    0x7a13a8
        push    esi
        call    edi
        push    0xbb8
        lea     eax, [ebp+0x180c]
        push    eax
        push    esi
        call    edi
        push    0xbb8
        push    0x7a13a4
        push    esi
        call    edi
        push    0xbb8
        push    ebx
        push    esi
        call    edi
        push    0xbb8
        push    0x7a13a0
        push    esi
        call    edi
        mov     eax, dword ptr [g_00858924]
        push    0xbb8
        push    eax
        push    esi
        call    edi
        add     esp, 0x48
        push    0xbb8
        push    0x7a139c
        push    esi
        call    edi
        push    0xbb8
        lea     ecx, [ebp+0x18ac]
        push    ecx
        push    esi
        call    edi
        push    0xbb8
        push    0x7a1398
        push    esi
        call    edi
        push    0xbb8
        lea     edx, [ebp+0x18ec]
        push    edx
        push    esi
        call    edi
        push    0xbb8
        push    0x7a1394
        push    esi
        call    edi
        push    0xbb8
        lea     eax, [ebp+0x192c]
        push    eax
        push    esi
        call    edi
        mov     eax, dword ptr [ebp+0x1808]
        add     esp, 0x48
        xor     ebx, ebx
        test    eax, eax
        jle     L_a2
        lea     ecx, [ebp+0xbc8]
        mov     dword ptr [esp+0x10], ecx
L_729:
        mov     edx, dword ptr [esp+0x10]
        push    0x5c
        push    edx
        call    dword ptr [g_0076b308]
        add     esp, 0x8
        test    eax, eax
        jz      L_740
        mov     byte ptr [eax], 0x0
L_740:
        mov     eax, dword ptr [esp+0x10]
        add     eax, 0x600
        push    0x5c
        push    eax
        call    dword ptr [g_0076b308]
        add     esp, 0x8
        test    eax, eax
        jz      L_75c
        mov     byte ptr [eax], 0x0
L_75c:
        mov     ecx, dword ptr [esp+0x10]
        lea     eax, [ecx+0x600]
        push    eax
        push    ebx
        mov     edx, ecx
        push    edx
        push    ebx
        lea     eax, [esp+0x24]
        push    0x7a1380
        push    eax
        call    dword ptr [g_0076b420]
        push    0xbb8
        lea     ecx, [esp+0x30]
        push    ecx
        push    esi
        call    edi
        mov     ecx, dword ptr [esp+0x34]
        mov     eax, dword ptr [ebp+0x1808]
        add     esp, 0x24
        inc     ebx
        add     ecx, 0x40
        cmp     ebx, eax
        mov     dword ptr [esp+0x10], ecx
        jl      L_729
L_a2:
        mov     eax, dword ptr [g_008aaae4]
        test    eax, eax
        jz      L_f2
        mov     edx, dword ptr [eax]
        lea     ecx, [esp+0x10]
        push    ecx
        push    0x0
        push    eax
        call    dword ptr [edx+0x58]
        mov     edx, dword ptr [esp+0x10]
        push    0x0
        push    edx
        call    FUN_006f3c80
        lea     edx, [esp+0x10]
        mov     edi, eax
        mov     eax, dword ptr [g_008aaae4]
        mov     ecx, dword ptr [eax]
        push    edx
        push    edi
        push    eax
        call    dword ptr [ecx+0x58]
        test    eax, eax
        jl      L_ec
        mov     eax, dword ptr [g_008aaae4]
        mov     ecx, dword ptr [eax]
        push    0x0
        push    edi
        push    eax
        mov     dword ptr [edi+0x30], esi
        call    dword ptr [ecx+0x7c]
L_ec:
        push    edi
        call    FUN_006f4230
L_f2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x104
        ret
    }
}
