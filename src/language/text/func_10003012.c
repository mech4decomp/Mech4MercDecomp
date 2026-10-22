/*
 * FUN_10003012 (809 B, __cdecl) — string-table entry allocator/free-list
 * maintenance. param_1 = table header (uint*), param_2 = address being
 * freed. Manipulates a 0x204-byte-per-bucket free-list structure and the
 * 0x44/0xc4 bitmaps; frees whole 0x8000-byte pages via VirtualFree when a
 * bucket empties.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_10008da4;
extern int   g_10008d9c;
extern int   g_10008da8;
extern int   g_10008dac;
extern int   g_10008da0;
extern void *g_10008fe8;   /* heap handle */
extern void *g_10005070;   /* IAT: VirtualFree */
extern void *g_10005074;   /* IAT: HeapFree */
extern void __cdecl FUN_10004740(void);

__declspec(naked) void FUN_10003012(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     ecx, dword ptr [ebp + 8]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx + 0x10]
        push    edi
        mov     edi, esi
        add     esi, -4
        sub     edi, dword ptr [ecx + 0xc]
        shr     edi, 0xf
        mov     ecx, edi
        imul    ecx, ecx, 0x204
        lea     ecx, [ecx + eax + 0x144]
        mov     dword ptr [ebp - 0x10], ecx
        mov     ecx, dword ptr [esi]
        dec     ecx
        test    cl, 1
        mov     dword ptr [ebp - 4], ecx
        jnz     L_3336
        mov     edx, dword ptr [ecx + esi]
        lea     ebx, [ecx + esi]
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [esi - 4]
        mov     dword ptr [ebp - 8], edx
        mov     edx, dword ptr [ebp - 0xc]
        test    dl, 1
        mov     dword ptr [ebp + 0xc], ebx
        jnz     L_30e8
        sar     edx, 4
        dec     edx
        cmp     edx, 0x3f
        jbe     L_3076
        push    0x3f
        pop     edx
L_3076:
        mov     ecx, dword ptr [ebx + 4]
        cmp     ecx, dword ptr [ebx + 8]
        jnz     L_30ca
        cmp     edx, 0x20
        jnc     L_30a1
        mov     ebx, 0x80000000
        mov     ecx, edx
        shr     ebx, cl
        lea     ecx, [edx + eax + 4]
        not     ebx
        and     dword ptr [eax + edi*4 + 0x44], ebx
        dec     byte ptr [ecx]
        jnz     L_30c2
        mov     ecx, dword ptr [ebp + 8]
        and     dword ptr [ecx], ebx
        jmp     L_30c2
L_30a1:
        lea     ecx, [edx - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        lea     ecx, [edx + eax + 4]
        not     ebx
        and     dword ptr [eax + edi*4 + 0xc4], ebx
        dec     byte ptr [ecx]
        jnz     L_30c2
        mov     ecx, dword ptr [ebp + 8]
        and     dword ptr [ecx + 4], ebx
L_30c2:
        mov     ecx, dword ptr [ebp - 4]
        mov     ebx, dword ptr [ebp + 0xc]
        jmp     L_30cd
L_30ca:
        mov     ecx, dword ptr [ebp - 4]
L_30cd:
        mov     edx, dword ptr [ebx + 8]
        mov     ebx, dword ptr [ebx + 4]
        add     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [edx + 4], ebx
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 4], ecx
        mov     ebx, dword ptr [edx + 4]
        mov     edx, dword ptr [edx + 8]
        mov     dword ptr [ebx + 8], edx
L_30e8:
        mov     edx, ecx
        sar     edx, 4
        dec     edx
        cmp     edx, 0x3f
        jbe     L_30f6
        push    0x3f
        pop     edx
L_30f6:
        mov     ebx, dword ptr [ebp - 8]
        and     ebx, 1
        mov     dword ptr [ebp - 0xc], ebx
        jnz     L_3199
        sub     esi, dword ptr [ebp - 8]
        mov     ebx, dword ptr [ebp - 8]
        sar     ebx, 4
        push    0x3f
        mov     dword ptr [ebp + 0xc], esi
        dec     ebx
        pop     esi
        cmp     ebx, esi
        jbe     L_311b
        mov     ebx, esi
L_311b:
        add     ecx, dword ptr [ebp - 8]
        mov     edx, ecx
        mov     dword ptr [ebp - 4], ecx
        sar     edx, 4
        dec     edx
        cmp     edx, esi
        jbe     L_312d
        mov     edx, esi
L_312d:
        cmp     ebx, edx
        jz      L_3194
        mov     ecx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ecx + 4]
        cmp     esi, dword ptr [ecx + 8]
        jnz     L_317c
        cmp     ebx, 0x20
        jnc     L_315d
        mov     esi, 0x80000000
        mov     ecx, ebx
        shr     esi, cl
        not     esi
        and     dword ptr [eax + edi*4 + 0x44], esi
        dec     byte ptr [ebx + eax + 4]
        jnz     L_317c
        mov     ecx, dword ptr [ebp + 8]
        and     dword ptr [ecx], esi
        jmp     L_317c
L_315d:
        lea     ecx, [ebx - 0x20]
        mov     esi, 0x80000000
        shr     esi, cl
        not     esi
        and     dword ptr [eax + edi*4 + 0xc4], esi
        dec     byte ptr [ebx + eax + 4]
        jnz     L_317c
        mov     ecx, dword ptr [ebp + 8]
        and     dword ptr [ecx + 4], esi
L_317c:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 4]
        mov     dword ptr [esi + 4], ecx
        mov     ecx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [esi + 8], ecx
L_3194:
        mov     esi, dword ptr [ebp + 0xc]
        jmp     L_319c
L_3199:
        mov     ebx, dword ptr [ebp + 8]
L_319c:
        cmp     dword ptr [ebp - 0xc], 0
        jnz     L_31aa
        cmp     ebx, edx
        jz      L_322b
L_31aa:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     ebx, dword ptr [ecx + edx*8 + 4]
        lea     ecx, [ecx + edx*8]
        mov     dword ptr [esi + 4], ebx
        mov     dword ptr [esi + 8], ecx
        mov     dword ptr [ecx + 4], esi
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [ecx + 8], esi
        mov     ecx, dword ptr [esi + 4]
        cmp     ecx, dword ptr [esi + 8]
        jnz     L_322b
        mov     cl, byte ptr [edx + eax + 4]
        cmp     edx, 0x20
        mov     byte ptr [ebp + 0xf], cl
        inc     cl
        mov     byte ptr [edx + eax + 4], cl
        jnc     L_3202
        cmp     byte ptr [ebp + 0xf], 0
        jnz     L_31f1
        mov     ebx, 0x80000000
        mov     ecx, edx
        shr     ebx, cl
        mov     ecx, dword ptr [ebp + 8]
        or      dword ptr [ecx], ebx
L_31f1:
        mov     ebx, 0x80000000
        mov     ecx, edx
        shr     ebx, cl
        lea     eax, [eax + edi*4 + 0x44]
        or      dword ptr [eax], ebx
        jmp     L_322b
L_3202:
        cmp     byte ptr [ebp + 0xf], 0
        jnz     L_3218
        lea     ecx, [edx - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        mov     ecx, dword ptr [ebp + 8]
        or      dword ptr [ecx + 4], ebx
L_3218:
        lea     ecx, [edx - 0x20]
        mov     edx, 0x80000000
        shr     edx, cl
        lea     eax, [eax + edi*4 + 0xc4]
        or      dword ptr [eax], edx
L_322b:
        mov     eax, dword ptr [ebp - 4]
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + esi - 4], eax
        mov     eax, dword ptr [ebp - 0x10]
        dec     dword ptr [eax]
        jnz     L_3336
        mov     eax, dword ptr [g_10008da4]
        test    eax, eax
        jz      L_3328
        mov     ecx, dword ptr [g_10008d9c]
        mov     esi, dword ptr [g_10005070]
        shl     ecx, 0xf
        add     ecx, dword ptr [eax + 0xc]
        mov     ebx, 0x8000
        push    0x4000
        push    ebx
        push    ecx
        call    esi
        mov     ecx, dword ptr [g_10008d9c]
        mov     eax, dword ptr [g_10008da4]
        mov     edx, 0x80000000
        shr     edx, cl
        or      dword ptr [eax + 8], edx
        mov     eax, dword ptr [g_10008da4]
        mov     ecx, dword ptr [g_10008d9c]
        mov     eax, dword ptr [eax + 0x10]
        and     dword ptr [eax + ecx*4 + 0xc4], 0
        mov     eax, dword ptr [g_10008da4]
        mov     eax, dword ptr [eax + 0x10]
        dec     byte ptr [eax + 0x43]
        mov     eax, dword ptr [g_10008da4]
        mov     ecx, dword ptr [eax + 0x10]
        cmp     byte ptr [ecx + 0x43], 0
        jnz     L_32b9
        and     dword ptr [eax + 4], 0xfffffffe
        mov     eax, dword ptr [g_10008da4]
L_32b9:
        cmp     dword ptr [eax + 8], -1
        jnz     L_3328
        push    ebx
        push    0
        push    dword ptr [eax + 0xc]
        call    esi
        mov     eax, dword ptr [g_10008da4]
        push    dword ptr [eax + 0x10]
        push    0
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_10005074]
        mov     eax, dword ptr [g_10008da8]
        mov     edx, dword ptr [g_10008dac]
        lea     eax, [eax + eax*4]
        shl     eax, 2
        mov     ecx, eax
        mov     eax, dword ptr [g_10008da4]
        sub     ecx, eax
        lea     ecx, [ecx + edx - 0x14]
        push    ecx
        lea     ecx, [eax + 0x14]
        push    ecx
        push    eax
        call    FUN_10004740
        mov     eax, dword ptr [ebp + 8]
        add     esp, 0xc
        dec     dword ptr [g_10008da8]
        cmp     eax, dword ptr [g_10008da4]
        jbe     L_331e
        sub     dword ptr [ebp + 8], 0x14
L_331e:
        mov     eax, dword ptr [g_10008dac]
        mov     dword ptr [g_10008da0], eax
L_3328:
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [g_10008d9c], edi
        mov     dword ptr [g_10008da4], eax
L_3336:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
