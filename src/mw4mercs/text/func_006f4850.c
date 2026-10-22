/*
 * FUN_006f4850 (230 B) — __stdcall heap-destroy routine. Validates the heap
 * header magic, walks the heap list, decrements the refcount, and frees the
 * heap node (unlinking it from the list). Uses FUN_006fab90 (assert/log) and
 * the free() IAT.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849328;          /* 0x00849328 (heap list head) */
extern char g_79f988[];         /* 0x0079f988 "Attempt to destroy invalid heap" */
extern char g_79f960[];         /* 0x0079f960 "Could not find heap ..." */
extern char g_76b768[];         /* 0x0076b768 (default heap name) */

extern void *g_76b2d0;          /* IAT: free */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006f4e40(void);

__declspec(naked) void FUN_006f4850(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        test    edi, edi
        jz      L492f
        cmp     dword ptr [edi + 0xc], 0x7fbadbad
        jz      L487c
        push    offset g_79f988
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L487c
        int     3
L487c:
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     dword ptr [ebp + 8], eax
        jz      L488a
        mov     esi, dword ptr [eax + 8]
        jmp     L4890
L488a:
        mov     esi, dword ptr [g_00849328]
L4890:
        xor     ebx, ebx
        test    esi, esi
        jz      L48bc
L4896:
        cmp     edi, esi
        jz      L48a5
        mov     ebx, esi
        mov     esi, dword ptr [esi + 4]
        test    esi, esi
        jnz     L4896
        jmp     L48bc
L48a5:
        dec     dword ptr [edi + 0x10]
        jnz     L492f
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        push    edi
        call    FUN_006f4e40
        test    esi, esi
        jnz     L48e3
L48bc:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L48c7
        add     eax, 0x14
        jmp     L48cc
L48c7:
        mov     eax, offset g_76b768
L48cc:
        push    eax
        lea     ecx, [edi + 0x14]
        push    ecx
        push    offset g_79f960
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      L48e3
        int     3
L48e3:
        test    ebx, ebx
        jz      L48fe
        mov     edx, dword ptr [edi + 4]
        push    edi
        mov     dword ptr [ebx + 4], edx
        call    dword ptr [g_76b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     8
L48fe:
        mov     eax, dword ptr [ebp + 8]
        test    eax, eax
        jz      L491c
        mov     ecx, dword ptr [edi + 4]
        push    edi
        mov     dword ptr [eax + 8], ecx
        call    dword ptr [g_76b2d0]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     8
L491c:
        mov     edx, dword ptr [edi + 4]
        push    edi
        mov     dword ptr [g_00849328], edx
        call    dword ptr [g_76b2d0]
        add     esp, 4
L492f:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     8
    }
}
