/*
 * FUN_10039ded (283 B) — __cdecl.
 * Config registration helper: calls FUN_10039fc1, strlen/malloc via
 * FUN_1003c5f0/FUN_1003c3c5, updates global tables 0x10051d74/
 * 0x10075674/0x100756d4/0x1007568c/0x10075690, indirect call through
 * 0x10051d78.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10075674[];  /* DAT_10075674 (dword array) */
extern unsigned int g_10051d74[];  /* DAT_10051d74 (dword array) */
extern unsigned int g_100756d4[];  /* DAT_100756d4 (dword array) */
extern unsigned int g_1007568c;    /* DAT_1007568c */
extern unsigned int g_10075690;    /* DAT_10075690 */
extern void (__cdecl *g_10051d78[])(void);  /* DAT_10051d78 (fn ptr array) */
extern char g_10051c60[];          /* DAT_10051c60 */
extern void __cdecl FUN_10039fc1(void);
extern void __cdecl FUN_1003c5f0(void);
extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_1003ca70(void);
extern void __cdecl FUN_1003c500(void);
extern void __cdecl FUN_1003c2dc(void);

__declspec(naked) void func_10039ded(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xa4
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        lea     eax, [ebp - 0x18]
        push    edi
        push    eax
        lea     eax, [ebp - 0x10]
        push    eax
        lea     eax, [ebp - 0xa4]
        push    eax
        push    dword ptr [ebp + 0xc]
        call    FUN_10039fc1
        add     esp, 0x14
        test    eax, eax
        jz      L_a0ee7
        lea     eax, [ebp - 0xa4]
        push    eax
        call    FUN_1003c5f0
        inc     eax
        push    eax
        call    FUN_1003c3c5
        pop     ecx
        mov     dword ptr [ebp + 0xc], eax
        test    eax, eax
        pop     ecx
        jz      L_a0ee7
        lea     esi, [edi + edi * 2]
        lea     ebx, [edi * 4 + g_10075674]
        shl     esi, 2
        push    6
        mov     eax, dword ptr [esi + g_10051d74]
        mov     dword ptr [ebp + 8], eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [ebp - 0x14], eax
        lea     eax, [edi + edi * 2]
        lea     eax, [eax * 2 + g_100756d4]
        mov     dword ptr [ebp - 8], eax
        push    eax
        lea     eax, [ebp - 0x20]
        push    eax
        call    FUN_1003ca70
        mov     eax, dword ptr [g_1007568c]
        mov     dword ptr [ebp - 4], eax
        lea     eax, [ebp - 0xa4]
        push    eax
        push    dword ptr [ebp + 0xc]
        call    FUN_1003c500
        mov     dword ptr [esi + g_10051d74], eax
        push    6
        movzx   eax, word ptr [ebp - 0x10]
        mov     dword ptr [ebx], eax
        lea     eax, [ebp - 0x10]
        push    eax
        push    dword ptr [ebp - 8]
        call    FUN_1003ca70
        mov     eax, dword ptr [ebp - 0x18]
        add     esp, 0x20
        cmp     edi, 2
        jnz     L_a0eb4
        mov     dword ptr [g_1007568c], eax
    L_a0eb4:
        cmp     edi, 1
        jnz     L_a0ebe
        mov     dword ptr [g_10075690], eax
    L_a0ebe:
        call    dword ptr [esi + g_10051d78]
        test    eax, eax
        jz      L_a0eeb
        mov     eax, dword ptr [ebp + 8]
        push    dword ptr [ebp + 0xc]
        mov     dword ptr [esi + g_10051d74], eax
        call    FUN_1003c2dc
        mov     eax, dword ptr [ebp - 0x14]
        pop     ecx
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [ebp - 4]
        mov     dword ptr [g_1007568c], eax
    L_a0ee7:
        xor     eax, eax
        jmp     L_a0f03
    L_a0eeb:
        cmp     dword ptr [ebp + 8], offset g_10051c60
        jz      L_a0efd
        push    dword ptr [ebp + 8]
        call    FUN_1003c2dc
        pop     ecx
    L_a0efd:
        mov     eax, dword ptr [esi + g_10051d74]
    L_a0f03:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
