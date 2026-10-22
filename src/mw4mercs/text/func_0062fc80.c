/*
 * FUN_0062fc80 (341 B) — Builds a temporary object (vtable 0x76cd9c /
 * 0x76d1f0) via FUN_00415180 / FUN_0041ee70 / FUN_00412b80, swaps a global
 * (0x007db0b0), calls FUN_004cfbd0, then walks a linked list calling
 * FUN_004d0600 / virtual method 0x18, and finally cleans up via
 * FUN_004084e0 / FUN_004cfc90 / FUN_00412b60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8c10;   /* 0x007b8c10 */
extern int g_7db0b0;       /* 0x007db0b0 */
extern int g_7db0a0;       /* 0x007db0a0 */
extern int g_7b8810;       /* 0x007b8810 */
extern char g_7dc694;      /* 0x007dc694 */
extern short g_7dc696;     /* 0x007dc696 */
extern void __cdecl FUN_00415180(void *);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_004cfbd0(void);
extern void *__cdecl FUN_004084c0(int size, int a);
extern void __cdecl FUN_004d0600(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_00412b60(void);

__declspec(naked) void __cdecl FUN_0062fc80(void)
{
    __asm {
        sub     esp, 0x40
        mov     eax, dword ptr [DAT_007b8c10]
        push    ebp
        push    esi
        push    edi
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00415180
        push    0x0
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x18], 0x76cd9c
        call    FUN_0041ee70
        mov     edi, dword ptr [esp + 0x54]
        lea     ecx, [edi + 0xc]
        push    ecx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x76d1f0
        call    FUN_00412b80
        mov     ebp, dword ptr [g_7db0b0]
        mov     ecx, dword ptr [g_7db0a0]
        lea     edx, [esp + 0x14]
        push    edi
        mov     dword ptr [g_7db0b0], edx
        call    FUN_004cfbd0
        mov     esi, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esi]
        push    0x2
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x5c], 0x0
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [g_7b8810]
        mov     dl, byte ptr [g_7dc694]
        mov     ax, word ptr [g_7dc696]
        push    ecx
        push    0xc
        mov     byte ptr [esp + 0x14], dl
        mov     word ptr [esp + 0x16], ax
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      L_FD47
        mov     edx, dword ptr [edi + 0x44]
        lea     ecx, [edi + 0x44]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     edi, eax
        jmp     L_FD49
L_FD47:
        xor     edi, edi
L_FD49:
        mov     eax, dword ptr [edi + 0x8]
        test    eax, eax
        jz      L_FD7A
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [edi + 0x8], eax
        jz      L_FD7A
        lea     edx, [esp + 0xc]
        push    edx
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        push    esi
        call    FUN_004d0600
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        jmp     L_FD49
L_FD7A:
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, dword ptr [esi + 0x10]
        cmp     ecx, 0x2
        jbe     L_FDAB
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0xe]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x54], eax
        push    0x2
        lea     eax, [esp + 0x58]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x8], 0xffffffec
        call    dword ptr [edx + 0x24]
L_FDAB:
        push    edi
        mov     dword ptr [g_7db0b0], ebp
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0x14]
        call    FUN_00412b60
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x40
        ret
    }
}
