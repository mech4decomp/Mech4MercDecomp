/*
 * FUN_00657ed0 (351 B) — ABL tree-node vector rebuild. __thiscall, RET 0x4.
 *
 * Rebuilds a vector of tree nodes: reads counts from a source object via
 * virtual call [vtbl+0x20], frees the old node array, allocates a new one
 * (div-by-0x14 sizing), and re-reads each node. Uses the div-by-12/20
 * magic-number family (0x66666667 / 0xcccccccd) seen across the ABL region.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);        /* free */
extern void *__cdecl FUN_004084d0(unsigned int n); /* alloc */
extern void __cdecl FUN_006f4950(int a);
extern void __cdecl FUN_006f49a0(void);

extern int g_007f2464;   /* 0x7f2464 */

__declspec(naked) void *FUN_00657ed0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        xor     ebp, ebp
        push    0x4
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esi + 0x8], ebp
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi + 0x10], ebp
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [ebx]
        push    0x4
        lea     edi, [esi + 0x4]
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebx]
        push    0x4
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]
        cmp     dword ptr [esi], ebp
        jnz     L1F
        cmp     dword ptr [edi], ebp
        jnz     L1F
        cmp     dword ptr [esp + 0x20], ebp
        jz      L23
L1F:
        mov     ebp, dword ptr [esi + 0x8]
        test    ebp, ebp
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp + 0x14], edx
        jz      L62
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jle     L52
        mov     edi, ebp
        mov     dword ptr [esp + 0x10], eax
L39:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        add     edi, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L39
L52:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], 0x0
L62:
        mov     eax, 0x66666667
        imul    dword ptr [esi]
        sar     edx, 0x3
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ecx, dword ptr [g_007f2464]
        mov     ebp, edx
        mov     eax, 0x66666667
        imul    dword ptr [esp + 0x14]
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        push    ecx
        mov     edi, edx
        call    FUN_006f4950
        __emit 0x8D   /* lea edx,[edi*4+0]: no-base SIB form MSVC6 won't emit */
        __emit 0x14
        __emit 0xBD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0xc], ebp
        jle     Ld4
        mov     dword ptr [esp + 0x10], eax
Lbb:
        push    ebp
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx], eax
        add     ecx, 0x4
        add     esp, 0x4
        dec     edi
        mov     dword ptr [esp + 0x10], ecx
        jnz     Lbb
Ld4:
        call    FUN_006f49a0
        mov     eax, 0xcccccccd
        mul     dword ptr [esp + 0x14]
        mov     ecx, edx
        mov     eax, 0xcccccccd
        mul     dword ptr [esi]
        mov     edi, edx
        shr     ecx, 0x4
        shr     edi, 0x4
        test    ecx, ecx
        jle     L23
        mov     ebp, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x14], ecx
Lff:
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        sub     edx, edi
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x14], eax
        jnz     Lff
L23:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x4
    }
}
