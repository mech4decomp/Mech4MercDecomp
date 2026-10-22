/*
 * FUN_004ffa90 (252 B) — MLR/Adept UDP receive loop. select()s on the
 * socket, recvfrom()s a datagram, looks for "\\final\\", resolves the
 * sender via ntohs/inet_ntoa and reports it through FUN_004ff9e0. After
 * the loop, if >3000ms elapsed since the last tick, closes the socket and
 * signals FUN_004ff5e0(3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b298;                 /* strstr IAT */
extern char g_00772fec[];                /* "\\final\\" */
extern int __cdecl FUN_0075dfce(void);   /* select */
extern int __cdecl FUN_0075dfc8(void);   /* recvfrom */
extern int __cdecl FUN_0075e010(void);   /* ntohs */
extern void *__cdecl FUN_0075e00a(void); /* inet_ntoa */
extern void __cdecl FUN_004ff9e0(void);
extern int __cdecl FUN_00500890(void);   /* GetTickCount */
extern int __cdecl FUN_0075dfb0(void);   /* closesocket */
extern void __cdecl FUN_004ff5e0(void);

__declspec(naked) void FUN_004ffa90(void)
{
    __asm {
        sub     esp, 0x6fc
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x708]
        mov     dword ptr [esp+0xc], 0x0
        mov     dword ptr [esp+0x10], 0x0
        mov     dword ptr [esp+0x8], 0x10
L_loop:
        mov     esi, dword ptr [edi+0x88]
        lea     eax, [esp+0xc]
        push    eax
        push    0x0
        push    0x0
        lea     ecx, [esp+0x30]
        push    ecx
        push    0x40
        mov     dword ptr [esp+0x3c], esi
        mov     dword ptr [esp+0x38], 0x1
        call    FUN_0075dfce
        cmp     eax, -0x1
        jz      L_done
        test    eax, eax
        jz      L_done
        lea     edx, [esp+0x8]
        push    edx
        lea     eax, [esp+0x18]
        push    eax
        push    0x0
        push    0x5db
        lea     ecx, [esp+0x138]
        push    ecx
        push    esi
        call    FUN_0075dfc8
        cmp     eax, -0x1
        jz      L_loop
        lea     edx, [esp+0x128]
        push    offset g_00772fec
        push    edx
        call    dword ptr [g_0076b298]
        add     esp, 0x8
        test    eax, eax
        jz      L_loop
        mov     eax, dword ptr [esp+0x16]
        push    eax
        call    FUN_0075e010
        mov     ecx, dword ptr [esp+0x18]
        and     eax, 0xffff
        push    eax
        push    ecx
        call    FUN_0075e00a
        push    eax
        push    edi
        call    FUN_004ff9e0
        add     esp, 0xc
        jmp     L_loop
L_done:
        call    FUN_00500890
        sub     eax, dword ptr [edi+0x8c]
        cmp     eax, 0xbb8
        jbe     L_exit
        mov     edx, dword ptr [edi+0x88]
        push    edx
        call    FUN_0075dfb0
        push    0x3
        push    edi
        mov     dword ptr [edi+0x88], 0xffffffff
        call    FUN_004ff5e0
        add     esp, 0x8
L_exit:
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x6fc
        ret
    }
}
