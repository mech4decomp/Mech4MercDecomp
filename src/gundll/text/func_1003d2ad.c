/*
 * FUN_1003d2ad (809 B) -- __cdecl.
 * Buddy-block allocator (free path): coalesces a freed block with its
 * buddies, updates the size-class bitmap, and when a whole arena page
 * becomes free, VirtualFree/HeapFree it and unlink it from the arena list.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076854;
extern unsigned int g_10076848;
extern unsigned int g_10076858;
extern unsigned int g_1007685c;
extern unsigned int g_1007684c;
extern unsigned int g_10076a90;
extern void *g_100491c8;
extern void *g_10049084;
extern void __cdecl FUN_1003ec80(void);

__declspec(naked) void FUN_1003d2ad(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx + 0x10]
        push    edi
        mov     edi, esi
        add     esi, -0x4
        sub     edi, dword ptr [ecx + 0xc]
        shr     edi, 0xf
        mov     ecx, edi
        imul    ecx, ecx, 0x204
        lea     ecx, [ecx + eax + 0x144]
        mov     dword ptr [ebp - 0x10], ecx
        mov     ecx, dword ptr [esi]
        dec     ecx
        test    cl, 0x1
        mov     dword ptr [ebp - 0x4], ecx
        jnz     L_5d1
        mov     edx, dword ptr [ecx + esi]
        lea     ebx, [ecx + esi]
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [esi - 0x4]
        mov     dword ptr [ebp - 0x8], edx
        mov     edx, dword ptr [ebp - 0xc]
        test    dl, 0x1
        mov     dword ptr [ebp + 0xc], ebx
        jnz     L_383
        sar     edx, 0x4
        dec     edx
        cmp     edx, 0x3f
        jbe     L_311
        push    0x3f
        pop     edx
    L_311:
        mov     ecx, dword ptr [ebx + 0x4]
        cmp     ecx, dword ptr [ebx + 0x8]
        jnz     L_365
        cmp     edx, 0x20
        jnc     L_33c
        mov     ebx, 0x80000000
        mov     ecx, edx
        shr     ebx, cl
        lea     ecx, [edx + eax + 0x4]
        not     ebx
        and     dword ptr [eax + edi*4 + 0x44], ebx
        dec     byte ptr [ecx]
        jnz     L_35d
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx], ebx
        jmp     L_35d
    L_33c:
        lea     ecx, [edx - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        lea     ecx, [edx + eax + 0x4]
        not     ebx
        and     dword ptr [eax + edi*4 + 0xc4], ebx
        dec     byte ptr [ecx]
        jnz     L_35d
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx + 0x4], ebx
    L_35d:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     ebx, dword ptr [ebp + 0xc]
        jmp     L_368
    L_365:
        mov     ecx, dword ptr [ebp - 0x4]
    L_368:
        mov     edx, dword ptr [ebx + 0x8]
        mov     ebx, dword ptr [ebx + 0x4]
        add     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [edx + 0x4], ebx
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0x4], ecx
        mov     ebx, dword ptr [edx + 0x4]
        mov     edx, dword ptr [edx + 0x8]
        mov     dword ptr [ebx + 0x8], edx
    L_383:
        mov     edx, ecx
        sar     edx, 0x4
        dec     edx
        cmp     edx, 0x3f
        jbe     L_391
        push    0x3f
        pop     edx
    L_391:
        mov     ebx, dword ptr [ebp - 0x8]
        and     ebx, 0x1
        mov     dword ptr [ebp - 0xc], ebx
        jnz     L_434
        sub     esi, dword ptr [ebp - 0x8]
        mov     ebx, dword ptr [ebp - 0x8]
        sar     ebx, 0x4
        push    0x3f
        mov     dword ptr [ebp + 0xc], esi
        dec     ebx
        pop     esi
        cmp     ebx, esi
        jbe     L_3b6
        mov     ebx, esi
    L_3b6:
        add     ecx, dword ptr [ebp - 0x8]
        mov     edx, ecx
        mov     dword ptr [ebp - 0x4], ecx
        sar     edx, 0x4
        dec     edx
        cmp     edx, esi
        jbe     L_3c8
        mov     edx, esi
    L_3c8:
        cmp     ebx, edx
        jz      L_42f
        mov     ecx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ecx + 0x4]
        cmp     esi, dword ptr [ecx + 0x8]
        jnz     L_417
        cmp     ebx, 0x20
        jnc     L_3f8
        mov     esi, 0x80000000
        mov     ecx, ebx
        shr     esi, cl
        not     esi
        and     dword ptr [eax + edi*4 + 0x44], esi
        dec     byte ptr [ebx + eax + 0x4]
        jnz     L_417
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx], esi
        jmp     L_417
    L_3f8:
        lea     ecx, [ebx - 0x20]
        mov     esi, 0x80000000
        shr     esi, cl
        not     esi
        and     dword ptr [eax + edi*4 + 0xc4], esi
        dec     byte ptr [ebx + eax + 0x4]
        jnz     L_417
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx + 0x4], esi
    L_417:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esi + 0x4], ecx
        mov     ecx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x8], ecx
    L_42f:
        mov     esi, dword ptr [ebp + 0xc]
        jmp     L_437
    L_434:
        mov     ebx, dword ptr [ebp + 0x8]
    L_437:
        cmp     dword ptr [ebp - 0xc], 0
        jnz     L_445
        cmp     ebx, edx
        jz      L_4c6
    L_445:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     ebx, dword ptr [ecx + edx*8 + 0x4]
        lea     ecx, [ecx + edx*8]
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [ecx + 0x4], esi
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [ecx + 0x8], esi
        mov     ecx, dword ptr [esi + 0x4]
        cmp     ecx, dword ptr [esi + 0x8]
        jnz     L_4c6
        mov     cl, byte ptr [edx + eax + 0x4]
        cmp     edx, 0x20
        mov     byte ptr [ebp + 0xf], cl
        inc     cl
        mov     byte ptr [edx + eax + 0x4], cl
        jnc     L_49d
        cmp     byte ptr [ebp + 0xf], 0
        jnz     L_48c
        mov     ebx, 0x80000000
        mov     ecx, edx
        shr     ebx, cl
        mov     ecx, dword ptr [ebp + 0x8]
        or      dword ptr [ecx], ebx
    L_48c:
        mov     ebx, 0x80000000
        mov     ecx, edx
        shr     ebx, cl
        lea     eax, [eax + edi*4 + 0x44]
        or      dword ptr [eax], ebx
        jmp     L_4c6
    L_49d:
        cmp     byte ptr [ebp + 0xf], 0
        jnz     L_4b3
        lea     ecx, [edx - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        mov     ecx, dword ptr [ebp + 0x8]
        or      dword ptr [ecx + 0x4], ebx
    L_4b3:
        lea     ecx, [edx - 0x20]
        mov     edx, 0x80000000
        shr     edx, cl
        lea     eax, [eax + edi*4 + 0xc4]
        or      dword ptr [eax], edx
    L_4c6:
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + esi - 0x4], eax
        mov     eax, dword ptr [ebp - 0x10]
        dec     dword ptr [eax]
        jnz     L_5d1
        mov     eax, dword ptr [g_10076854]
        test    eax, eax
        jz      L_5c3
        mov     ecx, dword ptr [g_10076848]
        mov     esi, dword ptr [g_100491c8]
        shl     ecx, 0xf
        add     ecx, dword ptr [eax + 0xc]
        mov     ebx, 0x8000
        push    0x4000
        push    ebx
        push    ecx
        call    esi
        mov     ecx, dword ptr [g_10076848]
        mov     eax, dword ptr [g_10076854]
        mov     edx, 0x80000000
        shr     edx, cl
        or      dword ptr [eax + 0x8], edx
        mov     eax, dword ptr [g_10076854]
        mov     ecx, dword ptr [g_10076848]
        mov     eax, dword ptr [eax + 0x10]
        and     dword ptr [eax + ecx*4 + 0xc4], 0
        mov     eax, dword ptr [g_10076854]
        mov     eax, dword ptr [eax + 0x10]
        dec     byte ptr [eax + 0x43]
        mov     eax, dword ptr [g_10076854]
        mov     ecx, dword ptr [eax + 0x10]
        cmp     byte ptr [ecx + 0x43], 0
        jnz     L_554
        and     dword ptr [eax + 0x4], 0xfffffffe
        mov     eax, dword ptr [g_10076854]
    L_554:
        cmp     dword ptr [eax + 0x8], -1
        jnz     L_5c3
        push    ebx
        push    0x0
        push    dword ptr [eax + 0xc]
        call    esi
        mov     eax, dword ptr [g_10076854]
        push    dword ptr [eax + 0x10]
        push    0x0
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049084]
        mov     eax, dword ptr [g_10076858]
        mov     edx, dword ptr [g_1007685c]
        lea     eax, [eax + eax*4]
        shl     eax, 0x2
        mov     ecx, eax
        mov     eax, dword ptr [g_10076854]
        sub     ecx, eax
        lea     ecx, [ecx + edx - 0x14]
        push    ecx
        lea     ecx, [eax + 0x14]
        push    ecx
        push    eax
        call    FUN_1003ec80
        mov     eax, dword ptr [ebp + 0x8]
        add     esp, 0xc
        dec     dword ptr [g_10076858]
        cmp     eax, dword ptr [g_10076854]
        jbe     L_5b9
        sub     dword ptr [ebp + 0x8], 0x14
    L_5b9:
        mov     eax, dword ptr [g_1007685c]
        mov     dword ptr [g_1007684c], eax
    L_5c3:
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [g_10076848], edi
        mov     dword ptr [g_10076854], eax
    L_5d1:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
