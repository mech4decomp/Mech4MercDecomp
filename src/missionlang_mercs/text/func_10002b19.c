/*
 * FUN_10002b19 (777 B) — buddy-allocator alloc: find a free block of the
 * requested size, split/coalesce buddies, update the free-list bitmap, and
 * return a pointer to the allocated block (or 0 if none available).
 *
 * __cdecl, 1 arg (requested size).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10005578;                                /* 0x10005578 */
extern int g_1000557c;                                /* 0x1000557c */
extern int g_10005570;                                /* 0x10005570 */
extern int g_10005574;                                /* 0x10005574 */
extern int g_1000556c;                                /* 0x1000556c */
extern void *__cdecl FUN_10002e22(void);
extern int __cdecl FUN_10002ed3(void *);

__declspec(naked) void *__cdecl FUN_10002b19(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [g_10005578]
        mov     edx, dword ptr [g_1000557c]
        push    ebx
        push    esi
        lea     eax, [eax + eax*4]
        push    edi
        lea     edi, [edx + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 4], edi
        lea     ecx, [eax + 0x17]
        and     ecx, 0xfffffff0
        mov     dword ptr [ebp - 0x10], ecx
        sar     ecx, 4
        dec     ecx
        cmp     ecx, 0x20
        jge     L2B59
        or      esi, 0xffffffff
        shr     esi, cl
        or      dword ptr [ebp - 8], 0xffffffff
        mov     dword ptr [ebp - 0xc], esi
        jmp     L2B69
L2B59:
        add     ecx, -0x20
        or      eax, 0xffffffff
        xor     esi, esi
        shr     eax, cl
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 8], eax
L2B69:
        mov     eax, dword ptr [g_10005570]
        mov     ebx, eax
        cmp     ebx, edi
        mov     dword ptr [ebp + 0x8], ebx
        jnc     L2B90
L2B77:
        mov     ecx, dword ptr [ebx + 4]
        mov     edi, dword ptr [ebx]
        and     ecx, dword ptr [ebp - 8]
        and     edi, esi
        or      ecx, edi
        jnz     L2B90
        add     ebx, 0x14
        cmp     ebx, dword ptr [ebp - 4]
        mov     dword ptr [ebp + 0x8], ebx
        jc      L2B77
L2B90:
        cmp     ebx, dword ptr [ebp - 4]
        jnz     L2C0E
        mov     ebx, edx
L2B97:
        cmp     ebx, eax
        mov     dword ptr [ebp + 0x8], ebx
        jnc     L2BB3
        mov     ecx, dword ptr [ebx + 4]
        mov     edi, dword ptr [ebx]
        and     ecx, dword ptr [ebp - 8]
        and     edi, esi
        or      ecx, edi
        jnz     L2BB1
        add     ebx, 0x14
        jmp     L2B97
L2BB1:
        cmp     ebx, eax
L2BB3:
        jnz     L2C0E
L2BB5:
        cmp     ebx, dword ptr [ebp - 4]
        jnc     L2BCB
        cmp     dword ptr [ebx + 8], 0
        jnz     L2BC8
        add     ebx, 0x14
        mov     dword ptr [ebp + 0x8], ebx
        jmp     L2BB5
L2BC8:
        cmp     ebx, dword ptr [ebp - 4]
L2BCB:
        jnz     L2BF3
        mov     ebx, edx
L2BCF:
        cmp     ebx, eax
        mov     dword ptr [ebp + 0x8], ebx
        jnc     L2BE3
        cmp     dword ptr [ebx + 8], 0
        jnz     L2BE1
        add     ebx, 0x14
        jmp     L2BCF
L2BE1:
        cmp     ebx, eax
L2BE3:
        jnz     L2BF3
        call    FUN_10002e22
        mov     ebx, eax
        test    ebx, ebx
        mov     dword ptr [ebp + 0x8], ebx
        jz      L2C07
L2BF3:
        push    ebx
        call    FUN_10002ed3
        pop     ecx
        mov     ecx, dword ptr [ebx + 0x10]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [ebx + 0x10]
        cmp     dword ptr [eax], -1
        jnz     L2C0E
L2C07:
        xor     eax, eax
        jmp     L2E1D
L2C0E:
        mov     dword ptr [g_10005570], ebx
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [eax]
        cmp     edx, -1
        mov     dword ptr [ebp - 4], edx
        jz      L2C35
        mov     ecx, dword ptr [eax + edx*4 + 0xc4]
        mov     edi, dword ptr [eax + edx*4 + 0x44]
        and     ecx, dword ptr [ebp - 8]
        and     edi, esi
        or      ecx, edi
        jnz     L2C6C
L2C35:
        mov     edx, dword ptr [eax + 0xc4]
        mov     esi, dword ptr [eax + 0x44]
        and     edx, dword ptr [ebp - 8]
        and     esi, dword ptr [ebp - 0xc]
        and     dword ptr [ebp - 4], 0
        lea     ecx, [eax + 0x44]
        or      edx, esi
        mov     esi, dword ptr [ebp - 0xc]
        jnz     L2C69
L2C52:
        mov     edx, dword ptr [ecx + 0x84]
        inc     dword ptr [ebp - 4]
        and     edx, dword ptr [ebp - 8]
        add     ecx, 4
        mov     edi, esi
        and     edi, dword ptr [ecx]
        or      edx, edi
        jz      L2C52
L2C69:
        mov     edx, dword ptr [ebp - 4]
L2C6C:
        mov     ecx, edx
        xor     edi, edi
        imul    ecx, ecx, 0x204
        lea     ecx, [ecx + eax + 0x144]
        mov     dword ptr [ebp - 0xc], ecx
        mov     ecx, dword ptr [eax + edx*4 + 0x44]
        and     ecx, esi
        jnz     L2C95
        mov     ecx, dword ptr [eax + edx*4 + 0xc4]
        push    0x20
        and     ecx, dword ptr [ebp - 8]
        pop     edi
L2C95:
        test    ecx, ecx
        jl      L2C9E
        shl     ecx, 1
        inc     edi
        jmp     L2C95
L2C9E:
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ecx + edi*8 + 4]
        mov     ecx, dword ptr [edx]
        sub     ecx, dword ptr [ebp - 0x10]
        mov     esi, ecx
        mov     dword ptr [ebp - 8], ecx
        sar     esi, 4
        dec     esi
        cmp     esi, 0x3f
        jle     L2CBB
        push    0x3f
        pop     esi
L2CBB:
        cmp     esi, edi
        jz      L2DD0
        mov     ecx, dword ptr [edx + 4]
        cmp     ecx, dword ptr [edx + 8]
        jnz     L2D2C
        cmp     edi, 0x20
        jge     L2CFB
        mov     ebx, 0x80000000
        mov     ecx, edi
        shr     ebx, cl
        mov     ecx, dword ptr [ebp - 4]
        lea     edi, [eax + edi + 4]
        not     ebx
        mov     dword ptr [ebp - 0x14], ebx
        and     ebx, dword ptr [eax + ecx*4 + 0x44]
        mov     dword ptr [eax + ecx*4 + 0x44], ebx
        dec     byte ptr [edi]
        jnz     L2D29
        mov     ebx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp - 0x14]
        and     dword ptr [ebx], ecx
        jmp     L2D2C
L2CFB:
        lea     ecx, [edi - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        mov     ecx, dword ptr [ebp - 4]
        lea     edi, [eax + edi + 4]
        lea     ecx, [eax + ecx*4 + 0xc4]
        not     ebx
        and     dword ptr [ecx], ebx
        dec     byte ptr [edi]
        mov     dword ptr [ebp - 0x14], ebx
        jnz     L2D29
        mov     ebx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp - 0x14]
        and     dword ptr [ebx + 4], ecx
        jmp     L2D2C
L2D29:
        mov     ebx, dword ptr [ebp + 0x8]
L2D2C:
        mov     ecx, dword ptr [edx + 8]
        mov     edi, dword ptr [edx + 4]
        cmp     dword ptr [ebp - 8], 0
        mov     dword ptr [ecx + 4], edi
        mov     ecx, dword ptr [edx + 4]
        mov     edi, dword ptr [edx + 8]
        mov     dword ptr [ecx + 8], edi
        jz      L2DDC
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ecx + esi*8 + 4]
        lea     ecx, [ecx + esi*8]
        mov     dword ptr [edx + 4], edi
        mov     dword ptr [edx + 8], ecx
        mov     dword ptr [ecx + 4], edx
        mov     ecx, dword ptr [edx + 4]
        mov     dword ptr [ecx + 8], edx
        mov     ecx, dword ptr [edx + 4]
        cmp     ecx, dword ptr [edx + 8]
        jnz     L2DCD
        mov     cl, byte ptr [esi + eax + 4]
        cmp     esi, 0x20
        mov     byte ptr [ebp + 0xb], cl
        jge     L2D9E
        inc     cl
        cmp     byte ptr [ebp + 0xb], 0
        mov     byte ptr [esi + eax + 4], cl
        jnz     L2D8C
        mov     edi, 0x80000000
        mov     ecx, esi
        shr     edi, cl
        or      dword ptr [ebx], edi
L2D8C:
        mov     edi, 0x80000000
        mov     ecx, esi
        shr     edi, cl
        mov     ecx, dword ptr [ebp - 4]
        or      dword ptr [eax + ecx*4 + 0x44], edi
        jmp     L2DCD
L2D9E:
        inc     cl
        cmp     byte ptr [ebp + 0xb], 0
        mov     byte ptr [esi + eax + 4], cl
        jnz     L2DB7
        lea     ecx, [esi - 0x20]
        mov     edi, 0x80000000
        shr     edi, cl
        or      dword ptr [ebx + 4], edi
L2DB7:
        mov     ecx, dword ptr [ebp - 4]
        lea     edi, [eax + ecx*4 + 0xc4]
        lea     ecx, [esi - 0x20]
        mov     esi, 0x80000000
        shr     esi, cl
        or      dword ptr [edi], esi
L2DCD:
        mov     ecx, dword ptr [ebp - 8]
L2DD0:
        test    ecx, ecx
        jz      L2DDF
        mov     dword ptr [edx], ecx
        mov     dword ptr [ecx + edx - 4], ecx
        jmp     L2DDF
L2DDC:
        mov     ecx, dword ptr [ebp - 8]
L2DDF:
        mov     esi, dword ptr [ebp - 0x10]
        add     edx, ecx
        lea     ecx, [esi + 1]
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + esi - 4], ecx
        mov     esi, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        lea     edi, [ecx + 1]
        mov     dword ptr [esi], edi
        jnz     L2E15
        cmp     ebx, dword ptr [g_10005574]
        jnz     L2E15
        mov     ecx, dword ptr [ebp - 4]
        cmp     ecx, dword ptr [g_1000556c]
        jnz     L2E15
        and     dword ptr [g_10005574], 0
L2E15:
        mov     ecx, dword ptr [ebp - 4]
        mov     dword ptr [eax], ecx
        lea     eax, [edx + 4]
L2E1D:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
