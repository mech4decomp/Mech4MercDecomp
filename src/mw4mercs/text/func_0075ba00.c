/*
 * FUN_0075ba00 (305 B) — __fastcall (ECX = this). Validates a header
 * against DAT_008b2830/32/36; if match, stores DAT_008b2838 and returns.
 * Otherwise builds a config struct and calls FUN_00735230 / FUN_007539e0 /
 * FUN_006f4940.
 *
 * RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_8b2838;   /* 0x008b2838 */
extern unsigned short g_8b2830; /* 0x008b2830 */
extern unsigned short g_8b2832; /* 0x008b2832 */
extern unsigned short g_8b2836; /* 0x008b2836 */
extern int  g_85a22c;   /* 0x0085a22c */
extern int  g_84931c;   /* 0x0084931c */

extern void __cdecl FUN_00747ac0(void);
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_007539e0(void);
extern void __cdecl FUN_006f4940(void);

__declspec(naked) void __stdcall FUN_0075ba00(void)
{
    __asm {
        mov     eax, [g_8b2838]
        sub     esp, 0x7c
        test    eax, eax
        push    esi
        mov     esi, ecx
        jz      L5ba4f
        mov     cx, word ptr [esi]
        cmp     cx, word ptr [g_8b2830]
        jnz     L5ba4f
        mov     dx, word ptr [esi + 2]
        cmp     dx, word ptr [g_8b2832]
        jnz     L5ba4f
        xor     ecx, ecx
        mov     cx, word ptr [esi + 6]
        xor     cx, word ptr [g_8b2836]
        test    ecx, 0x801
        jnz     L5ba4f
        mov     [esi + 8], eax
        mov     dword ptr [g_8b2838], 0
        pop     esi
        add     esp, 0x7c
        ret
L5ba4f:
        push    edi
        xor     eax, eax
        test    byte ptr [esi + 7], 8
        mov     ecx, 0x1f
        lea     edi, [esp + 8]
        rep     stosd
        mov     dword ptr [esp + 8], 0x7c
        pop     edi
        jz      L5baa4
        test    byte ptr [esi + 6], 1
        mov     dword ptr [esp + 8], 0x21007
        mov     dword ptr [esp + 0x6c], 0x401808
        jz      L5ba8c
        mov     dword ptr [esp + 0x1c], 1
        jmp     L5bab4
L5ba8c:
        xor     edx, edx
        mov     dx, word ptr [esi + 2]
        xor     eax, eax
        mov     ax, word ptr [esi]
        push    edx
        push    eax
        call    FUN_00747ac0
        mov     [esp + 0x1c], eax
        jmp     L5bab4
L5baa4:
        mov     dword ptr [esp + 8], 0x1007
        mov     dword ptr [esp + 0x6c], 0x1800
L5bab4:
        xor     ecx, ecx
        mov     cx, word ptr [esi]
        xor     edx, edx
        mov     dx, word ptr [esi + 2]
        mov     eax, 0x20
        push    0
        mov     [esp + 0x50], eax
        mov     [esp + 0x5c], eax
        lea     eax, [esi + 8]
        mov     [esp + 0x14], ecx
        push    eax
        lea     ecx, [esp + 0xc]
        mov     [esp + 0x14], edx
        mov     edx, dword ptr [g_85a22c]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x60], 0x40
        mov     dword ptr [esp + 0x78], 0xff000000
        mov     dword ptr [esp + 0x6c], 0xff0000
        mov     dword ptr [esp + 0x70], 0xff00
        mov     dword ptr [esp + 0x74], 0xff
        call    FUN_00735230
        push    1
        push    1
        push    0
        mov     ecx, esi
        call    FUN_007539e0
        push    eax
        mov     eax, [g_84931c]
        push    eax
        call    FUN_006f4940
        pop     esi
        add     esp, 0x7c
        ret
    }
}
