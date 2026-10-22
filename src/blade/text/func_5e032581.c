/*
 * FUN_5e032581 (562 B) - builds a localized string-table structure. Computes
 * the total string length across several string arrays (7 + 12 entries plus
 * 5 trailing strings), mallocs a buffer, copies the 0xac-byte template from
 * DAT_5e039fc8, then fills in the string pointers/offsets.
 *
 * __cdecl, RET (returns the malloc'd buffer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e039fc8;   /* PTR_PTR_DAT_5e039fc8 (template pointer) */

extern int __cdecl FUN_5e02e6b0(void *);          /* strlen */
extern void *__cdecl FUN_5e02b6e4(int);           /* malloc */
extern void __cdecl FUN_5e02ed40(void *, void *, int); /* memcpy */
extern void *__cdecl FUN_5e02e220(void *, void *);

__declspec(naked) void FUN_5e032581(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, dword ptr [g_5e039fc8]
        push    edi
        xor     edi, edi
        mov     dword ptr [ebp-0x8], esi
        mov     dword ptr [ebp-0xc], 7
    L259c:
        mov     ebx, dword ptr [ebp-0x8]
        push    dword ptr [ebx+0x1c]
        call    FUN_5e02e6b0
        push    dword ptr [ebx]
        mov     edx, eax
        mov     dword ptr [ebp-0x10], edx
        call    FUN_5e02e6b0
        add     dword ptr [ebp-0x8], 4
        pop     ecx
        pop     ecx
        add     eax, edi
        mov     ecx, dword ptr [ebp-0x10]
        dec     dword ptr [ebp-0xc]
        lea     edi, [eax+ecx+2]
        jnz     L259c
        lea     eax, [esi+0x38]
        mov     dword ptr [ebp-0xc], 0xc
        mov     dword ptr [ebp-0x8], eax
    L25d4:
        mov     ebx, dword ptr [ebp-0x8]
        push    dword ptr [ebx+0x30]
        call    FUN_5e02e6b0
        push    dword ptr [ebx]
        mov     edx, eax
        mov     dword ptr [ebp-0x10], edx
        call    FUN_5e02e6b0
        add     dword ptr [ebp-0x8], 4
        pop     ecx
        pop     ecx
        add     eax, edi
        mov     ecx, dword ptr [ebp-0x10]
        dec     dword ptr [ebp-0xc]
        lea     edi, [eax+ecx+2]
        jnz     L25d4
        push    dword ptr [esi+0x98]
        call    FUN_5e02e6b0
        push    dword ptr [esi+0x9c]
        mov     ebx, eax
        call    FUN_5e02e6b0
        push    dword ptr [esi+0xa0]
        add     eax, edi
        lea     edi, [eax+ebx+2]
        call    FUN_5e02e6b0
        push    dword ptr [esi+0xa4]
        lea     edi, [edi+eax+1]
        call    FUN_5e02e6b0
        push    dword ptr [esi+0xa8]
        lea     edi, [edi+eax+1]
        call    FUN_5e02e6b0
        lea     eax, [edi+eax+1]
        add     eax, 0xac
        push    eax
        call    FUN_5e02b6e4
        mov     ebx, eax
        add     esp, 0x18
        test    ebx, ebx
        jz      L27ac
        push    0xac
        lea     edi, [ebx+0xac]
        push    dword ptr [g_5e039fc8]
        push    ebx
        call    FUN_5e02ed40
        lea     eax, [esi+0x1c]
        mov     dword ptr [ebp-0x8], ebx
        add     esp, 0xc
        sub     dword ptr [ebp-0x8], esi
        mov     dword ptr [ebp-0xc], ebx
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp-0x10], 7
    L2692:
        mov     eax, dword ptr [ebp-0xc]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [ebp-0x4]
        push    dword ptr [eax-0x1c]
        push    edi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        mov     ecx, dword ptr [ebp-0x8]
        lea     edi, [edi+eax+1]
        mov     eax, dword ptr [ebp-0x4]
        mov     dword ptr [ecx+eax], edi
        push    dword ptr [eax]
        push    edi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        add     dword ptr [ebp-0xc], 4
        add     dword ptr [ebp-0x4], 4
        add     esp, 0x18
        dec     dword ptr [ebp-0x10]
        lea     edi, [edi+eax+1]
        jnz     L2692
        lea     eax, [ebx+0x68]
        mov     dword ptr [ebp-0x10], 0xc
        mov     dword ptr [ebp-0xc], eax
        lea     eax, [esi+0x38]
        mov     dword ptr [ebp-0x4], eax
        jmp     L26f0
    L26ed:
        mov     eax, dword ptr [ebp-0x4]
    L26f0:
        mov     ecx, dword ptr [ebp-0x8]
        mov     dword ptr [eax+ecx], edi
        push    dword ptr [eax]
        push    edi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        lea     edi, [edi+eax+1]
        mov     eax, dword ptr [ebp-0xc]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [ebp-0x4]
        push    dword ptr [eax+0x30]
        push    edi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        add     dword ptr [ebp-0x4], 4
        add     dword ptr [ebp-0xc], 4
        add     esp, 0x18
        dec     dword ptr [ebp-0x10]
        lea     edi, [edi+eax+1]
        jnz     L26ed
        mov     dword ptr [ebx+0x98], edi
        push    dword ptr [esi+0x98]
        push    edi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        lea     edi, [edi+eax+1]
        mov     dword ptr [ebx+0x9c], edi
        push    dword ptr [esi+0x9c]
        push    edi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        lea     edi, [edi+eax+1]
        mov     dword ptr [ebx+0xa0], edi
        push    dword ptr [esi+0xa0]
        push    edi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        lea     edi, [edi+eax+1]
        mov     dword ptr [ebx+0xa4], edi
        push    dword ptr [esi+0xa4]
        push    edi
        call    FUN_5e02e220
        push    eax
        call    FUN_5e02e6b0
        lea     eax, [eax+edi+1]
        add     esp, 0x30
        mov     dword ptr [ebx+0xa8], eax
    L27ac:
        pop     edi
        mov     eax, ebx
        pop     esi
        pop     ebx
        leave
        ret
    }
}
