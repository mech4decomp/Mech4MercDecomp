/*
 * FUN_004ff3e0 (169 B) — MLR/Adept TCP connect helper. Builds a sockaddr
 * (family 2, htons(port), inet_addr(host) with gethostbyname fallback),
 * opens a socket(2,1,6), stores it at param_1+0x88, and connect()s.
 * Returns 0 on success, 1/2/3 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0075dfe6(void);   /* htons */
extern int __cdecl FUN_0075dfe0(void);   /* inet_addr */
extern void *__cdecl FUN_0075dfda(void); /* gethostbyname */
extern int __cdecl FUN_0075dfc2(void);   /* socket */
extern int __cdecl FUN_0075dfd4(void);   /* connect */
extern int __cdecl FUN_0075dff8(void);   /* WSAGetLastError */
extern int __cdecl FUN_0075dfb0(void);   /* closesocket */

__declspec(naked) void FUN_004ff3e0(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp+0x1c]
        push    esi
        push    eax
        mov     word ptr [esp+0x8], 0x2
        call    FUN_0075dfe6
        mov     esi, dword ptr [esp+0x1c]
        push    esi
        mov     word ptr [esp+0xa], ax
        call    FUN_0075dfe0
        cmp     eax, -0x1
        mov     dword ptr [esp+0x8], eax
        jnz     L1
        push    esi
        call    FUN_0075dfda
        test    eax, eax
        jnz     L2
        mov     eax, 0x2
        pop     esi
        add     esp, 0x10
        ret
L2:
        mov     ecx, dword ptr [eax+0xc]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx]
        mov     dword ptr [esp+0x8], eax
L1:
        push    0x6
        xor     ecx, ecx
        push    0x1
        mov     dword ptr [esp+0x14], ecx
        push    0x2
        mov     dword ptr [esp+0x1c], ecx
        call    FUN_0075dfc2
        mov     edx, dword ptr [esp+0x18]
        mov     esi, eax
        cmp     esi, -0x1
        mov     dword ptr [edx+0x88], esi
        jnz     L3
        mov     eax, 0x1
        pop     esi
        add     esp, 0x10
        ret
L3:
        push    0x10
        lea     eax, [esp+0x8]
        push    eax
        push    esi
        call    FUN_0075dfd4
        test    eax, eax
        jz      L4
        call    FUN_0075dff8
        push    esi
        call    FUN_0075dfb0
        mov     eax, 0x3
        pop     esi
        add     esp, 0x10
        ret
L4:
        xor     eax, eax
        pop     esi
        add     esp, 0x10
        ret
    }
}
