/*
 * FUN_00759740 (364 B) — __thiscall (ECX = this, RET 0x10, 4 stack params).
 *
 * In-.text data block at 0x759740 (368 B). Reserves a 0x1004-byte frame via
 * __chkstk (FUN_0075dc00), then tries a sequence of IAT calls (0x8aacfc /
 * 0x8aacf8 / 0x8aacf4) to open a device; on success dispatches through the
 * object vtable (call [eax+0xc] / [eax+8]) and returns 0, else formats a
 * message via sprintf (0x76b420) and returns 1. Trailing 4 NOPs excluded.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075dc00(void);

extern void *g_8aacfc;   /* IAT */
extern void *g_8aacf8;   /* IAT */
extern void *g_8aacf4;   /* IAT */
extern void *g_76b420;   /* IAT sprintf */

__declspec(naked) void __cdecl FUN_00759740(void)
{
    __asm {
        mov     eax, 0x1004
        call    FUN_0075dc00
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     ebx, [esi + 4]
        push    ebx
        push    0
        push    1
        call    dword ptr [g_8aacfc]
        test    ax, ax
        mov     word ptr [esi + 0xc], ax
        je      L978d
        mov     edx, dword ptr [ebx]
        mov     eax, dword ptr [esi]
        lea     ecx, [esi + 0xe]
        push    ecx
        push    edx
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 8]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1004
        ret     0x10
L978d:
        mov     edi, dword ptr [ebx]
        push    -6
        push    3
        push    0xc8
        push    edi
        call    dword ptr [g_8aacf8]
        test    ax, ax
        mov     word ptr [esi + 0xc], ax
        je      L97cc
        mov     edx, dword ptr [esi]
        lea     eax, [esi + 0xe]
        push    eax
        push    edi
        push    1
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 8]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1004
        ret     0x10
L97cc:
        lea     ebp, [esi + 8]
        push    ebp
        push    edi
        push    2
        call    dword ptr [g_8aacfc]
        test    ax, ax
        mov     word ptr [esi + 0xc], ax
        je      L9808
        mov     edx, dword ptr [ebx]
        mov     eax, dword ptr [esi]
        lea     ecx, [esi + 0xe]
        push    ecx
        push    edx
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 8]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1004
        ret     0x10
L9808:
        mov     ecx, dword ptr [esp + 0x1024]
        mov     edx, dword ptr [esp + 0x1020]
        mov     eax, dword ptr [esp + 0x101c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x101c]
        push    edx
        push    eax
        push    ecx
        lea     edx, [esp + 0x24]
        push    0x7aee90
        push    edx
        mov     dword ptr [esp + 0x28], 0
        call    dword ptr [g_76b420]
        mov     ebp, dword ptr [ebp]
        add     esp, 0x18
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        push    0x800
        lea     ecx, [esp + 0x820]
        push    ecx
        push    -3
        lea     edx, [esp + 0x28]
        push    edx
        push    0
        push    ebp
        call    dword ptr [g_8aacf4]
        test    ax, ax
        mov     word ptr [esi + 0xc], ax
        je      L989d
        cmp     ax, 1
        je      L989d
        mov     eax, dword ptr [esi]
        lea     ecx, [esi + 0xe]
        push    ecx
        push    ebp
        push    2
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 8]
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1004
        ret     0x10
L989d:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x1004
        ret     0x10
    }
}
