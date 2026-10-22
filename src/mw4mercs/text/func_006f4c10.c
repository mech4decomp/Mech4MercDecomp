/*
 * FUN_006f4c10 (551 B) — __stdcall recursive heap/string-table walker.
 * Recursively visits child nodes, then iterates a table of string blocks
 * (0x849298..0x8492e0) and a linked list (0x84932c), freeing strings that
 * belong to the given heap via FUN_006f4230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849298;          /* 0x00849298 (table start) */
extern int g_0084932c;          /* 0x0084932c (linked list head) */
extern int g_00849334;          /* 0x00849334 */
extern int g_007b6e80;          /* 0x007b6e80 */
extern int g_00848e90;          /* 0x00848e90 (dword array, byte-indexed) */

extern void __cdecl FUN_006f4c10(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_006f4c10(void)
{
    __asm {
        sub     esp, 0xc
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [edi + 8]
        xor     ebp, ebp
        cmp     eax, ebp
        jz      L4c2e
        push    esi
        push    eax
        call    FUN_006f4c10
L4c2e:
        cmp     dword ptr [edi], ebp
        jnz     L4c40
        mov     eax, dword ptr [edi + 4]
        cmp     eax, ebp
        jz      L4c40
        push    esi
        push    eax
        call    FUN_006f4c10
L4c40:
        mov     eax, 0x849298
        push    ebx
        mov     dword ptr [esp + 0x18], eax
L4c4a:
        mov     esi, dword ptr [eax]
        cmp     esi, ebp
        mov     dword ptr [esp + 0x24], ebp
        jz      L4def
L4c58:
        cmp     word ptr [esi + 0x38], bp
        jz      L4dd9
        mov     bx, word ptr [esi + 0x14]
        cmp     bx, 0x100
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x24], eax
        jnc     L4d2a
        mov     edi, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x14], ebp
        xor     ebp, ebp
        mov     bp, word ptr [esi + 0x16]
        mov     dword ptr [esp + 0x10], ecx
        test    ebp, ebp
        jle     L4dd9
L4c94:
        mov     eax, dword ptr [g_007b6e80]
        test    eax, eax
        jz      L4cd4
        mov     eax, edi
        sub     eax, esi
        cdq
        and     edx, 0xfff
        add     eax, edx
        sar     eax, 0xc
        cmp     word ptr [esi + eax*2 + 0x18], 0
        jz      L4cf9
        mov     eax, ebx
        and     eax, 0xffff
        sub     eax, esi
        add     eax, edi
        cdq
        and     edx, 0xfff
        add     eax, edx
        sar     eax, 0xc
        cmp     word ptr [esi + eax*2 + 0x18], 0
        jz      L4cf9
L4cd4:
        mov     eax, dword ptr [esp + 0x20]
        xor     edx, edx
        mov     dl, byte ptr [edi]
        cmp     dword ptr [edx*4 + g_00848e90], eax
        jnz     L4cf9
        cmp     word ptr [esi + 0x38], 1
        jz      L4dd2
        lea     ecx, [edi + 1]
        push    ecx
        call    FUN_006f4230
L4cf9:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [g_00849334]
        lea     ecx, [edx + eax*4 + 1]
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, ebx
        and     edx, 0xffff
        add     edi, edx
        inc     eax
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], eax
        jl      L4c94
        jmp     L4dd9
L4d2a:
        mov     edi, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x10], ebp
        xor     ebp, ebp
        mov     bp, word ptr [esi + 0x16]
        mov     dword ptr [esp + 0x14], ecx
        test    ebp, ebp
        jle     L4dd9
L4d43:
        mov     eax, dword ptr [g_007b6e80]
        test    eax, eax
        jz      L4d83
        mov     eax, edi
        sub     eax, esi
        cdq
        and     edx, 0xfff
        add     eax, edx
        sar     eax, 0xc
        cmp     word ptr [esi + eax*2 + 0x18], 0
        jz      L4da4
        mov     eax, ebx
        and     eax, 0xffff
        sub     eax, esi
        add     eax, edi
        cdq
        and     edx, 0xfff
        add     eax, edx
        sar     eax, 0xc
        cmp     word ptr [esi + eax*2 + 0x18], 0
        jz      L4da4
L4d83:
        mov     eax, dword ptr [esp + 0x20]
        xor     edx, edx
        mov     dl, byte ptr [edi]
        cmp     dword ptr [edx*4 + g_00848e90], eax
        jnz     L4da4
        cmp     word ptr [esi + 0x38], 1
        jz      L4dd2
        lea     ecx, [edi + 1]
        push    ecx
        call    FUN_006f4230
L4da4:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [g_00849334]
        lea     ecx, [edx + eax*4 + 1]
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, ebx
        and     edx, 0xffff
        add     edi, edx
        inc     eax
        cmp     eax, ebp
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L4d43
        jmp     L4dd9
L4dd2:
        inc     edi
        push    edi
        call    FUN_006f4230
L4dd9:
        mov     esi, dword ptr [esp + 0x24]
        xor     ebp, ebp
        cmp     esi, ebp
        jnz     L4c58
        mov     edi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x18]
L4def:
        add     eax, 4
        cmp     eax, 0x8492e0
        mov     dword ptr [esp + 0x18], eax
        jl      L4c4a
        mov     ecx, dword ptr [g_0084932c]
        cmp     ecx, ebp
        pop     ebx
        jz      L4e2e
L4e0c:
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [eax + 8]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0xc]
        cmp     dword ptr [edx*4 + g_00848e90], edi
        jnz     L4e28
        add     ecx, 5
        push    ecx
        call    FUN_006f4230
L4e28:
        cmp     esi, ebp
        mov     ecx, esi
        jnz     L4e0c
L4e2e:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0xc
        ret     8
    }
}
