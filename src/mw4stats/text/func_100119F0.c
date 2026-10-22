/*
 * FUN_100119f0 (1060 B) - __fastcall. SEH-guarded stats-record loop.
 * Iterates over a record stream (vtable at [this+0x78]) building
 * string buffers and writing stats until the stream is exhausted.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_10004110(void);
extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_1000c8e0(void);
extern void __cdecl FUN_10011830(void);
extern void __cdecl FUN_10011810(void);

extern void *g_100210f4;   /* IAT: wcslen */
extern void *g_100210ac;   /* IAT: wcscpy */
extern void *g_100210bc;   /* IAT: wcsrchr */
extern void *g_100210ec;   /* IAT: free */
extern unsigned short g_10026628;  /* wchar_t array @ 0x10026628 */

__declspec(naked) void __cdecl FUN_100119f0(void)
{
    __asm {
        push    -1
        push    0x1001fd31
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xc18
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], 0x400
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0xc30], ebx
        call    FUN_100011a0
        lea     esi, [edi + 0x84]
        lea     ecx, [esp + 0x10]
        push    esi
        call    FUN_10004110
        push    0x10026638
        lea     ecx, [esp + 0x14]
        call    FUN_10001680
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0x10]
        ja      L11a6e
        mov     eax, 0x100274ec
L11a6e:
        mov     ecx, dword ptr [edi + 0x78]
        lea     ebp, [esp + 0x1d8]
        push    ebp
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x4]
        mov     ebp, eax
        cmp     ebp, -1
        jz      L11d10
        cmp     byte ptr [edi + 0x14], bl
        jnz     L11cf9
L11a93:
        mov     dword ptr [esp + 0xa8], ebx
        mov     dword ptr [esp + 0xac], ebx
        mov     dword ptr [esp + 0xb0], ebx
        mov     dword ptr [esp + 0xb4], ebx
        mov     dword ptr [esp + 0xb8], ebx
        mov     dword ptr [esp + 0xbc], 0x400
        lea     ecx, [esp + 0xa8]
        mov     byte ptr [esp + 0xc30], 0x1
        call    FUN_100011a0
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        jbe     L11aec
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        lea     ecx, [esp + 0xb0]
        call    FUN_100016b0
L11aec:
        lea     eax, [esp + 0x204]
        test    eax, eax
        jz      L11b29
        cmp     word ptr [esp + 0x204], bx
        jz      L11b29
        lea     ecx, [esp + 0x204]
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        lea     edx, [esp + 0x204]
        shl     eax, 0x1
        push    eax
        push    edx
        lea     ecx, [esp + 0xb0]
        call    FUN_100016b0
L11b29:
        mov     eax, dword ptr [esp + 0x1f0]
        mov     ecx, dword ptr [esp + 0x1ec]
        push    eax
        push    ecx
        push    edi
        call    FUN_1000c8e0
        cmp     eax, dword ptr [edi + 0x120]
        jbe     L11b66
        mov     eax, dword ptr [esp + 0xb4]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0xa8]
        ja      L11b5e
        mov     eax, 0x100274ec
L11b5e:
        push    eax
        mov     ecx, edi
        call    FUN_10011830
L11b66:
        mov     edx, dword ptr [esp + 0x1f8]
        mov     eax, dword ptr [edi + 0x11c]
        cmp     edx, eax
        jnc     L11c9f
        lea     eax, [esp + 0x204]
        lea     ecx, [esp + 0x428]
        push    eax
        push    ecx
        call    dword ptr [g_100210ac]
        lea     edx, [esp + 0x430]
        push    0x2e
        push    edx
        call    dword ptr [g_100210bc]
        add     esp, 0x10
        cmp     eax, ebx
        jz      L11bab
        mov     word ptr [eax], bx
L11bab:
        mov     dword ptr [esp + 0x140], ebx
        mov     dword ptr [esp + 0x144], ebx
        mov     dword ptr [esp + 0x148], ebx
        mov     dword ptr [esp + 0x14c], ebx
        mov     dword ptr [esp + 0x150], ebx
        mov     dword ptr [esp + 0x154], 0x400
        mov     eax, dword ptr [esi + 0xc]
        mov     byte ptr [esp + 0xc30], 0x2
        cmp     eax, ebx
        jbe     L11bf8
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x148]
        call    FUN_100016b0
L11bf8:
        lea     eax, [esp + 0x428]
        test    eax, eax
        jz      L11c35
        cmp     word ptr [esp + 0x428], bx
        jz      L11c35
        lea     ecx, [esp + 0x428]
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        lea     edx, [esp + 0x428]
        shl     eax, 0x1
        push    eax
        push    edx
        lea     ecx, [esp + 0x148]
        call    FUN_100016b0
L11c35:
        mov     eax, dword ptr [esp + 0x14c]
        mov     ecx, dword ptr [esp + 0x140]
        cmp     eax, ebx
        ja      L11c4c
        mov     ecx, 0x100274ec
L11c4c:
        mov     eax, dword ptr [esp + 0xb4]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0xa8]
        ja      L11c63
        mov     eax, 0x100274ec
L11c63:
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_10011810
        cmp     dword ptr [esp + 0x14c], ebx
        jbe     L11c8a
        mov     eax, dword ptr [esp + 0x140]
        cmp     eax, ebx
        jz      L11c8a
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L11c8a:
        mov     dword ptr [esp + 0x140], ebx
        mov     dword ptr [esp + 0x150], ebx
        mov     dword ptr [esp + 0x14c], ebx
L11c9f:
        mov     eax, dword ptr [esp + 0xb4]
        mov     byte ptr [esp + 0xc30], bl
        cmp     eax, ebx
        jbe     L11cc6
        mov     eax, dword ptr [esp + 0xa8]
        cmp     eax, ebx
        jz      L11cc6
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L11cc6:
        mov     ecx, dword ptr [edi + 0x78]
        lea     edx, [esp + 0x1d8]
        push    edx
        push    ebp
        mov     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0xb0], ebx
        mov     dword ptr [esp + 0xc0], ebx
        mov     dword ptr [esp + 0xbc], ebx
        call    dword ptr [eax + 0x8]
        test    eax, eax
        jz      L11d07
        cmp     byte ptr [edi + 0x14], bl
        jz      L11a93
L11cf9:
        lea     ecx, [esp + 0x10]
        call    FUN_100011a0
        jmp     L11df9
L11d07:
        mov     ecx, dword ptr [edi + 0x78]
        push    ebp
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xc]
L11d10:
        cmp     dword ptr [esp + 0x1c], ebx
        jbe     L11d2c
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L11d2c
        mov     ebp, dword ptr [g_100210ec]
        push    eax
        call    ebp
        add     esp, 0x4
        jmp     L11d32
L11d2c:
        mov     ebp, dword ptr [g_100210ec]
L11d32:
        push    esi
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_10004110
        mov     ecx, 0x10026628
        test    ecx, ecx
        jz      L11d75
        cmp     word ptr [g_10026628], bx
        jz      L11d75
        push    ecx
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        lea     ecx, [esp + 0x10]
        shl     eax, 0x1
        push    eax
        push    0x10026628
        call    FUN_100016b0
L11d75:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0x10]
        ja      L11d86
        mov     eax, 0x100274ec
L11d86:
        mov     ecx, dword ptr [edi + 0x78]
        lea     esi, [esp + 0x1d8]
        push    esi
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x4]
        mov     esi, eax
        cmp     esi, -1
        jz      L11de5
        cmp     byte ptr [edi + 0x14], bl
        jnz     L11dcc
L11da3:
        lea     eax, [esp + 0x204]
        mov     ecx, edi
        push    eax
        call    FUN_10011830
        mov     ecx, dword ptr [edi + 0x78]
        lea     eax, [esp + 0x1d8]
        push    eax
        push    esi
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x8]
        test    eax, eax
        jz      L11ddc
        cmp     byte ptr [edi + 0x14], bl
        jz      L11da3
L11dcc:
        cmp     dword ptr [esp + 0x1c], ebx
        jbe     L11df9
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L11df9
        jmp     L11df3
L11ddc:
        mov     ecx, dword ptr [edi + 0x78]
        push    esi
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xc]
L11de5:
        cmp     dword ptr [esp + 0x1c], ebx
        jbe     L11df9
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L11df9
L11df3:
        push    eax
        call    ebp
        add     esp, 0x4
L11df9:
        mov     ecx, dword ptr [esp + 0xc28]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0xc24
        ret
    }
}
