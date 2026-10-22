/*
 * FUN_00717f30 (829 B) — system message dispatcher. Enters a critical
 * section, walks a linked list of pending messages (0x008aaa0c), and
 * dispatches each message type through a jump table (0x718274/0x7182a4)
 * to per-type handlers that allocate/queue output records.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_8aaa0c;      /* 0x008aaa0c message list head */
extern int   g_8aaa10;      /* 0x008aaa10 free list head */
extern int   g_8aaa08;      /* 0x008aaa08 */
extern int   g_849314;      /* 0x00849314 allocator context */
extern int   g_8aaabc;      /* 0x008aaabc */
extern char  g_8aaac0;      /* 0x008aaac0 */
extern char  g_8aaa48[];    /* 0x008aaa48 critical section */
extern char  g_7a27b0[];    /* 0x007a27b0 "Unknown system message 0x%x" */
extern char  g_718284[];    /* 0x718284 jump-table index table */
extern void* g_76b110;      /* IAT EnterCriticalSection */
extern void* g_76b100;      /* IAT LeaveCriticalSection */

extern void __cdecl FUN_00742770(void);
extern void __cdecl FUN_006f8f30(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00701740(void);
extern void __cdecl FUN_007018a0(void);
extern void __cdecl FUN_007182d0(void);
extern void __cdecl FUN_006f8f80(void);
extern void __cdecl FUN_007018c0(void);
extern void __cdecl FUN_007019a0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00717e20(void);

__declspec(naked) void FUN_00717f30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        push    ebx
        push    0x8aaa48
        call    dword ptr [g_76b110]
        mov     eax, dword ptr [g_8aaa0c]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      L_1805b
        push    esi
        push    edi
    L_17f53:
        mov     ecx, dword ptr [eax + 0x10]
        mov     edi, dword ptr [eax + 0xc]
        cmp     edi, ebx
        mov     edx, dword ptr [eax + 0x14]
        mov     esi, dword ptr [eax + 0x8]
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [eax + 0x18]
        mov     dword ptr [ebp - 0xc], edi
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x10], ecx
        jnz     L_1816c
        mov     ecx, dword ptr [eax + 0x1d]
        cmp     ecx, 0x104
        lea     esi, [eax + 0x1d]
        ja      L_1813e
        jz      L_1803b
        cmp     ecx, 0x31
        ja      L_18118
        jz      L_180ef
        lea     edi, [ecx - 0x3]
        cmp     edi, 0x1e
        ja      L_18150
        xor     edx, edx
        mov     dl, byte ptr [edi + g_718284]
        /* __emit: MSVC6 re-bases [edx*4+imm32] jump dispatch via EBX; emit exact FF 24 95 bytes */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x74
        __emit 0x82
        __emit 0x71
        __emit 0x00
    L_17fb8:
        cmp     dword ptr [esi + 0x4], 0x1
        jnz     L_1803b
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [esi + 0x20]
        push    eax
        add     ecx, esi
        push    ecx
        push    0x8aab0c
        call    FUN_00742770
        mov     edx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [esi + 0x8]
        push    ebx
        add     edx, esi
        push    edx
        push    eax
        call    FUN_006f8f30
        mov     ecx, dword ptr [g_849314]
        push    ecx
        push    0x1c
        call    FUN_006f3c80
        cmp     eax, ebx
        jz      L_18009
        mov     edx, dword ptr [esi + 0x8]
        push    edx
        mov     ecx, eax
        call    FUN_00701740
        cmp     eax, ebx
        jz      L_18009
        push    eax
        call    FUN_007018a0
    L_18009:
        mov     eax, dword ptr [g_849314]
        push    eax
        push    0x20
        call    FUN_006f3c80
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ecx
        mov     word ptr [eax + 0xc], bx
        mov     word ptr [eax + 0x16], bx
        mov     dword ptr [eax + 0x19], ebx
        mov     dword ptr [eax + 0x8], ebx
        mov     byte ptr [eax + 0x18], 0xf0
    L_18030:
        push    eax
        call    FUN_007182d0
    L_18036:
        mov     eax, dword ptr [g_8aaa0c]
    L_1803b:
        mov     edx, dword ptr [g_8aaa10]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [eax], edx
        mov     dword ptr [g_8aaa10], eax
        mov     eax, ecx
        mov     dword ptr [g_8aaa0c], eax
    L_18051:
        cmp     eax, ebx
        jnz     L_17f53
        pop     edi
        pop     esi
    L_1805b:
        push    0x8aaa48
        mov     dword ptr [g_8aaa08], ebx
        call    dword ptr [g_76b100]
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_18071:
        cmp     dword ptr [esi + 0x4], 0x1
        jnz     L_1803b
        mov     edx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x8]
        push    ebx
        add     edx, esi
        push    edx
        push    eax
        call    FUN_006f8f80
        mov     ecx, dword ptr [esi + 0x8]
        push    ecx
        call    FUN_007018c0
        cmp     eax, ebx
        jz      L_1809a
        push    eax
        call    FUN_007019a0
    L_1809a:
        mov     edx, dword ptr [g_849314]
        push    edx
        push    0x20
        call    FUN_006f3c80
        mov     esi, dword ptr [esi + 0x8]
        cmp     esi, dword ptr [g_8aaabc]
        mov     dword ptr [eax], ebx
        jnz     L_180d5
        mov     dword ptr [eax + 0x4], ebx
        mov     word ptr [eax + 0xc], bx
        mov     word ptr [eax + 0x16], bx
        mov     dword ptr [eax + 0x19], ebx
        mov     dword ptr [eax + 0x8], ebx
        mov     byte ptr [eax + 0x18], 0xf2
        mov     dword ptr [g_8aaabc], ebx
        jmp     L_18030
    L_180d5:
        mov     dword ptr [eax + 0x4], esi
        mov     word ptr [eax + 0xc], bx
        mov     word ptr [eax + 0x16], bx
        mov     dword ptr [eax + 0x19], ebx
        mov     dword ptr [eax + 0x8], ebx
        mov     byte ptr [eax + 0x18], 0xf1
        jmp     L_18030
    L_180ef:
        mov     eax, dword ptr [g_849314]
        push    eax
        push    0x20
        call    FUN_006f3c80
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ebx
        mov     word ptr [eax + 0xc], bx
        mov     word ptr [eax + 0x16], bx
        mov     dword ptr [eax + 0x19], ebx
        mov     dword ptr [eax + 0x8], ebx
        mov     byte ptr [eax + 0x18], 0xf2
        jmp     L_18030
    L_18118:
        mov     edx, ecx
        sub     edx, 0x101
        jz      L_18132
        dec     edx
        jz      L_1803b
        dec     edx
        jz      L_1803b
        jmp     L_18150
    L_18132:
        mov     byte ptr [g_8aaac0], 0x1
        jmp     L_1803b
    L_1813e:
        lea     edx, [ecx - 0x105]
        cmp     edx, 0x8
        ja      L_18150
        /* __emit: MSVC6 re-bases [edx*4+imm32] jump dispatch via EBX; emit exact FF 24 95 bytes */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0xA4
        __emit 0x82
        __emit 0x71
        __emit 0x00
    L_18150:
        push    ecx
        push    0x7a27b0
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_18036
        int     3
        jmp     L_18036
    L_1816c:
        sub     esi, 0x5
        cmp     esi, 0x400
        mov     dword ptr [ebp - 0x8], esi
        ja      L_18051
        mov     ecx, dword ptr [g_849314]
        push    ecx
        lea     edx, [esi + 0x20]
        push    edx
        call    FUN_006f3c80
        mov     ebx, eax
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [ebx + 0x8], eax
        mov     eax, dword ptr [g_8aaa0c]
        mov     cl, byte ptr [eax + 0x1c]
        mov     dl, byte ptr [eax + 0x1d]
        neg     cl
        mov     byte ptr [ebx + 0x18], dl
        mov     edx, dword ptr [ebp - 0x10]
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [ebx + 0x4], edi
        sbb     ecx, ecx
        and     ecx, 0x2
        mov     word ptr [ebx + 0xc], cx
        mov     ecx, dword ptr [ebp - 0x14]
        mov     dword ptr [ebx + 0xe], ecx
        xor     ecx, ecx
        cmp     esi, ecx
        mov     dword ptr [ebx + 0x12], edx
        jnz     L_181d3
        mov     word ptr [ebx + 0x16], cx
        mov     dword ptr [ebx + 0x19], ecx
        jmp     L_181f9
    L_181d3:
        mov     ecx, esi
        lea     esi, [eax + 0x22]
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [ebx + 0x20]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     cx, word ptr [ebp - 0x8]
        mov     edi, dword ptr [ebp - 0xc]
        mov     word ptr [ebx + 0x16], cx
        mov     dword ptr [ebx + 0x19], edx
    L_181f9:
        push    edi
        call    FUN_007018c0
        mov     esi, eax
        test    esi, esi
        jz      L_18260
        mov     eax, dword ptr [g_8aaa0c]
        cmp     byte ptr [eax + 0x1d], 0xf3
        jz      L_18260
        mov     di, word ptr [eax + 0x1e]
        xor     edx, edx
        mov     dx, word ptr [esi + 0xa]
        push    0x1770
        mov     eax, edi
        and     eax, 0xffff
        push    edx
        push    eax
        call    FUN_00717e20
        test    al, al
        jnz     L_18235
        mov     word ptr [esi + 0xa], di
    L_18235:
        mov     ecx, dword ptr [g_8aaa0c]
        mov     di, word ptr [ecx + 0x20]
        xor     edx, edx
        mov     dx, word ptr [esi + 0xc]
        push    0x1770
        mov     eax, edi
        and     eax, 0xffff
        push    edx
        push    eax
        call    FUN_00717e20
        test    al, al
        jnz     L_18260
        mov     word ptr [esi + 0xc], di
    L_18260:
        push    ebx
        call    FUN_007182d0
        mov     eax, dword ptr [g_8aaa0c]
        xor     ebx, ebx
        jmp     L_1803b
    }
}
