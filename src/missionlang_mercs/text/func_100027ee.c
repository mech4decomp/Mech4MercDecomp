/*
 * FUN_100027ee (811 B) — buddy-allocator free: coalesce the freed block with
 * its buddies, update the free-list / bitmap, and when the whole arena
 * becomes empty, VirtualFree the region and HeapFree the arena block.
 *
 * __cdecl, 2 args (param_1 = arena header, param_2 = block pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10005574;                                /* 0x10005574 arena ptr */
extern int g_1000556c;                                /* 0x1000556c */
extern int g_10005578;                                /* 0x10005578 */
extern int g_1000557c;                                /* 0x1000557c */
extern int g_10005570;                                /* 0x10005570 */
extern void *g_100057a8;                              /* 0x100057a8 heap handle */
extern void *(__stdcall *g_1000405c)(void *, unsigned int, unsigned int); /* IAT 0x1000405c VirtualFree */
extern void *(__stdcall *g_10004060)(void *, unsigned int, void *);       /* IAT 0x10004060 HeapFree */
extern void __cdecl FUN_10003570(void);

__declspec(naked) void __cdecl FUN_100027ee(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        mov     eax, dword ptr [ecx + 0x10]
        mov     esi, edx
        sub     esi, dword ptr [ecx + 0xc]
        mov     ebx, dword ptr [edx - 4]
        add     edx, -4
        push    edi
        shr     esi, 0xf
        mov     ecx, esi
        mov     edi, dword ptr [edx - 4]
        imul    ecx, ecx, 0x204
        dec     ebx
        mov     dword ptr [ebp - 4], edi
        lea     ecx, [ecx + eax + 0x144]
        mov     dword ptr [ebp - 0xc], ebx
        mov     dword ptr [ebp - 0x10], ecx
        mov     ecx, dword ptr [ebx + edx]
        test    cl, 1
        mov     dword ptr [ebp - 8], ecx
        jnz     L28B4
        sar     ecx, 4
        push    0x3f
        dec     ecx
        pop     edi
        mov     dword ptr [ebp + 0xc], ecx
        cmp     ecx, edi
        jbe     L2846
        mov     dword ptr [ebp + 0xc], edi
L2846:
        mov     ecx, dword ptr [ebx + edx + 4]
        cmp     ecx, dword ptr [ebx + edx + 8]
        jnz     L2898
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, 0x20
        jnc     L2874
        mov     edi, 0x80000000
        shr     edi, cl
        lea     ecx, [ecx + eax + 4]
        not     edi
        and     dword ptr [eax + esi*4 + 0x44], edi
        dec     byte ptr [ecx]
        jnz     L2898
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx], edi
        jmp     L2898
L2874:
        add     ecx, -0x20
        mov     edi, 0x80000000
        shr     edi, cl
        mov     ecx, dword ptr [ebp + 0xc]
        lea     ecx, [ecx + eax + 4]
        not     edi
        and     dword ptr [eax + esi*4 + 0xc4], edi
        dec     byte ptr [ecx]
        jnz     L2898
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx + 4], edi
L2898:
        mov     ecx, dword ptr [ebx + edx + 8]
        mov     edi, dword ptr [ebx + edx + 4]
        mov     dword ptr [ecx + 4], edi
        mov     ecx, dword ptr [ebx + edx + 4]
        mov     edi, dword ptr [ebx + edx + 8]
        add     ebx, dword ptr [ebp - 8]
        mov     dword ptr [ecx + 8], edi
        mov     dword ptr [ebp - 0xc], ebx
L28B4:
        mov     edi, ebx
        sar     edi, 4
        dec     edi
        cmp     edi, 0x3f
        jbe     L28C2
        push    0x3f
        pop     edi
L28C2:
        mov     ecx, dword ptr [ebp - 4]
        and     ecx, 1
        mov     dword ptr [ebp - 0x14], ecx
        jnz     L2971
        sub     edx, dword ptr [ebp - 4]
        mov     ecx, dword ptr [ebp - 4]
        sar     ecx, 4
        push    0x3f
        mov     dword ptr [ebp - 8], edx
        dec     ecx
        pop     edx
        cmp     ecx, edx
        mov     dword ptr [ebp + 0xc], ecx
        jbe     L28ED
        mov     dword ptr [ebp + 0xc], edx
        mov     ecx, edx
L28ED:
        add     ebx, dword ptr [ebp - 4]
        mov     edi, ebx
        mov     dword ptr [ebp - 0xc], ebx
        sar     edi, 4
        dec     edi
        cmp     edi, edx
        jbe     L28FF
        mov     edi, edx
L28FF:
        cmp     ecx, edi
        jz      L296E
        mov     ecx, dword ptr [ebp - 8]
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, dword ptr [ecx + 8]
        jnz     L2956
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, 0x20
        jnc     L2932
        mov     edx, 0x80000000
        shr     edx, cl
        lea     ecx, [ecx + eax + 4]
        not     edx
        and     dword ptr [eax + esi*4 + 0x44], edx
        dec     byte ptr [ecx]
        jnz     L2956
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx], edx
        jmp     L2956
L2932:
        add     ecx, -0x20
        mov     edx, 0x80000000
        shr     edx, cl
        mov     ecx, dword ptr [ebp + 0xc]
        lea     ecx, [ecx + eax + 4]
        not     edx
        and     dword ptr [eax + esi*4 + 0xc4], edx
        dec     byte ptr [ecx]
        jnz     L2956
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx + 4], edx
L2956:
        mov     ecx, dword ptr [ebp - 8]
        mov     edx, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 4]
        mov     dword ptr [edx + 4], ecx
        mov     ecx, dword ptr [ebp - 8]
        mov     edx, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [edx + 8], ecx
L296E:
        mov     edx, dword ptr [ebp - 8]
L2971:
        cmp     dword ptr [ebp - 0x14], 0
        jnz     L2980
        cmp     dword ptr [ebp + 0xc], edi
        jz      L2A09
L2980:
        mov     ecx, dword ptr [ebp - 0x10]
        lea     ecx, [ecx + edi*8]
        mov     ecx, dword ptr [ecx + 4]
        mov     dword ptr [edx + 4], ecx
        mov     ecx, dword ptr [ebp - 0x10]
        lea     ecx, [ecx + edi*8]
        mov     dword ptr [edx + 8], ecx
        mov     dword ptr [ecx + 4], edx
        mov     ecx, dword ptr [edx + 4]
        mov     dword ptr [ecx + 8], edx
        mov     ecx, dword ptr [edx + 4]
        cmp     ecx, dword ptr [edx + 8]
        jnz     L2A09
        mov     cl, byte ptr [edi + eax + 4]
        cmp     edi, 0x20
        mov     byte ptr [ebp + 0xf], cl
        inc     cl
        mov     byte ptr [edi + eax + 4], cl
        jnc     L29DD
        cmp     byte ptr [ebp + 0xf], 0
        jnz     L29CC
        mov     ebx, 0x80000000
        mov     ecx, edi
        shr     ebx, cl
        mov     ecx, dword ptr [ebp + 0x8]
        or      dword ptr [ecx], ebx
L29CC:
        mov     ebx, 0x80000000
        mov     ecx, edi
        shr     ebx, cl
        lea     eax, [eax + esi*4 + 0x44]
        or      dword ptr [eax], ebx
        jmp     L2A06
L29DD:
        cmp     byte ptr [ebp + 0xf], 0
        jnz     L29F3
        lea     ecx, [edi - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        mov     ecx, dword ptr [ebp + 0x8]
        or      dword ptr [ecx + 4], ebx
L29F3:
        lea     ecx, [edi - 0x20]
        mov     edi, 0x80000000
        shr     edi, cl
        lea     eax, [eax + esi*4 + 0xc4]
        or      dword ptr [eax], edi
L2A06:
        mov     ebx, dword ptr [ebp - 0xc]
L2A09:
        mov     eax, dword ptr [ebp - 0x10]
        mov     dword ptr [edx], ebx
        mov     dword ptr [ebx + edx - 4], ebx
        dec     dword ptr [eax]
        jnz     L2B14
        mov     eax, dword ptr [g_10005574]
        test    eax, eax
        jz      L2B06
        mov     ecx, dword ptr [g_1000556c]
        mov     edi, dword ptr [g_1000405c]
        shl     ecx, 0xf
        add     ecx, dword ptr [eax + 0xc]
        mov     ebx, 0x8000
        push    0x4000
        push    ebx
        push    ecx
        call    edi
        mov     ecx, dword ptr [g_1000556c]
        mov     eax, dword ptr [g_10005574]
        mov     edx, 0x80000000
        shr     edx, cl
        or      dword ptr [eax + 8], edx
        mov     eax, dword ptr [g_10005574]
        mov     ecx, dword ptr [g_1000556c]
        mov     eax, dword ptr [eax + 0x10]
        and     dword ptr [eax + ecx*4 + 0xc4], 0
        mov     eax, dword ptr [g_10005574]
        mov     eax, dword ptr [eax + 0x10]
        dec     byte ptr [eax + 0x43]
        mov     eax, dword ptr [g_10005574]
        mov     ecx, dword ptr [eax + 0x10]
        cmp     byte ptr [ecx + 0x43], 0
        jnz     L2A94
        and     dword ptr [eax + 4], 0xfffffffe
        mov     eax, dword ptr [g_10005574]
L2A94:
        cmp     dword ptr [eax + 8], -1
        jnz     L2B06
        push    ebx
        push    0
        push    dword ptr [eax + 0xc]
        call    edi
        mov     eax, dword ptr [g_10005574]
        push    dword ptr [eax + 0x10]
        push    0
        push    dword ptr [g_100057a8]
        call    dword ptr [g_10004060]
        mov     eax, dword ptr [g_10005578]
        mov     edx, dword ptr [g_1000557c]
        lea     eax, [eax + eax*4]
        shl     eax, 2
        mov     ecx, eax
        mov     eax, dword ptr [g_10005574]
        sub     ecx, eax
        lea     ecx, [ecx + edx - 0x14]
        push    ecx
        lea     ecx, [eax + 0x14]
        push    ecx
        push    eax
        call    FUN_10003570
        mov     eax, dword ptr [ebp + 0x8]
        add     esp, 0xc
        dec     dword ptr [g_10005578]
        cmp     eax, dword ptr [g_10005574]
        jbe     L2AF8
        sub     eax, 0x14
L2AF8:
        mov     ecx, dword ptr [g_1000557c]
        mov     dword ptr [g_10005570], ecx
        jmp     L2B09
L2B06:
        mov     eax, dword ptr [ebp + 0x8]
L2B09:
        mov     dword ptr [g_10005574], eax
        mov     dword ptr [g_1000556c], esi
L2B14:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
