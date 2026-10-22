/*
 * FUN_1003a70a (280 B) — __cdecl.
 * Buffer/stream write helper: manipulates a state struct (param_2),
 * calls FUN_10040ba9/FUN_10040b65/FUN_10040975/FUN_1004089d, indexes
 * global table 0x10076aa0.
 *
 * CFLAGS: /O1
 */

extern char g_10054740[];          /* DAT_10054740 */
extern char g_10054760[];          /* DAT_10054760 */
extern unsigned int g_10076aa0[];  /* DAT_10076aa0 (dword array) */
extern char g_100518b8[];          /* DAT_100518b8 */
extern void __cdecl FUN_10040ba9(void);
extern void __cdecl FUN_10040b65(void);
extern void __cdecl FUN_10040975(void);
extern void __cdecl FUN_1004089d(void);

__declspec(naked) void func_1003a70a(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        mov     ebx, dword ptr [esi + 0x10]
        test    al, 0x82
        jz      L_a816
        test    al, 0x40
        jnz     L_a816
        test    al, 0x1
        jz      L_a742
        and     dword ptr [esi + 4], 0
        test    al, 0x10
        jz      L_a816
        mov     ecx, dword ptr [esi + 8]
        and     al, 0xfe
        mov     dword ptr [esi], ecx
        mov     dword ptr [esi + 0xc], eax
    L_a742:
        mov     eax, dword ptr [esi + 0xc]
        and     dword ptr [esi + 4], 0
        and     dword ptr [ebp + 0xc], 0
        and     al, 0xef
        or      al, 0x2
        test    ax, 0x10c
        mov     dword ptr [esi + 0xc], eax
        jnz     L_a77c
        cmp     esi, offset g_10054740
        jz      L_a76a
        cmp     esi, offset g_10054760
        jnz     L_a775
    L_a76a:
        push    ebx
        call    FUN_10040ba9
        test    eax, eax
        pop     ecx
        jnz     L_a77c
    L_a775:
        push    esi
        call    FUN_10040b65
        pop     ecx
    L_a77c:
        test    word ptr [esi + 0xc], 0x108
        push    edi
        jz      L_a7ec
        mov     eax, dword ptr [esi + 8]
        mov     edi, dword ptr [esi]
        sub     edi, eax
        lea     ecx, [eax + 1]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [esi + 0x18]
        dec     ecx
        test    edi, edi
        mov     dword ptr [esi + 4], ecx
        jle     L_a7ac
        push    edi
        push    eax
        push    ebx
        call    FUN_10040975
        add     esp, 0xc
        mov     dword ptr [ebp + 0xc], eax
        jmp     L_a7e2
    L_a7ac:
        cmp     ebx, -1
        jz      L_a7ca
        mov     ecx, ebx
        mov     eax, ebx
        sar     ecx, 5
        and     eax, 0x1f
        mov     ecx, dword ptr [ecx * 4 + g_10076aa0]
        lea     eax, [eax + eax * 8]
        lea     eax, [ecx + eax * 4]
        jmp     L_a7cf
    L_a7ca:
        mov     eax, offset g_100518b8
    L_a7cf:
        test    byte ptr [eax + 4], 0x20
        jz      L_a7e2
        push    2
        push    0
        push    ebx
        call    FUN_1004089d
        add     esp, 0xc
    L_a7e2:
        mov     eax, dword ptr [esi + 8]
        mov     cl, byte ptr [ebp + 8]
        mov     byte ptr [eax], cl
        jmp     L_a800
    L_a7ec:
        push    1
        lea     eax, [ebp + 8]
        pop     edi
        push    edi
        push    eax
        push    ebx
        call    FUN_10040975
        add     esp, 0xc
        mov     dword ptr [ebp + 0xc], eax
    L_a800:
        cmp     dword ptr [ebp + 0xc], edi
        pop     edi
        jz      L_a80c
        or      dword ptr [esi + 0xc], 0x20
        jmp     L_a81b
    L_a80c:
        mov     eax, dword ptr [ebp + 8]
        and     eax, 0xff
        jmp     L_a81e
    L_a816:
        or      al, 0x20
        mov     dword ptr [esi + 0xc], eax
    L_a81b:
        or      eax, 0xffffffff
    L_a81e:
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
