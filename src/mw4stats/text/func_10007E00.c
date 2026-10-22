/*
 * FUN_10007E00 (208 B) - __fastcall (ECX = this). Validates a character
 * code (ushort at [this+0x14]) against a set of allowed ranges; if invalid,
 * reports an error via FUN_10008d30 and returns 0. Otherwise loops consuming
 * characters through FUN_10006ef0 until a terminator is found, returning 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100094a0(void);
extern void __cdecl FUN_10006ef0(void);
extern void __cdecl FUN_100094e0(void);
extern void __cdecl FUN_100094c0(void);
extern void __cdecl FUN_10009500(void);
extern void __cdecl FUN_10008d30(void);
extern char g_str_10025690[];

__declspec(naked) void __cdecl FUN_10007E00(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x14]
        mov     si, word ptr [eax]
        push    esi
        call    FUN_100094a0
        test    al, al
        jnz     L43
        cmp     si, 0x4e00
        jc      L22
        cmp     si, 0x9fa5
        jbe     L43
L22:
        cmp     si, 0x3007
        jz      L43
        cmp     si, 0x3021
        jc      L37
        cmp     si, 0x3029
        jbe     L43
L37:
        cmp     si, 0x5f
        jz      L43
        cmp     si, 0x3a
        jnz     Lbf
L43:
        push    ebx
        lea     ebx, [edi + 0xc]
L47:
        push    0x0
        mov     ecx, ebx
        call    FUN_10006ef0
        mov     ecx, dword ptr [edi + 0x14]
        mov     si, word ptr [ecx]
        push    esi
        call    FUN_100094a0
        test    al, al
        jnz     L47
        cmp     si, 0x4e00
        jc      L6e
        cmp     si, 0x9fa5
        jbe     L47
L6e:
        cmp     si, 0x3007
        jz      L47
        cmp     si, 0x3021
        jc      L83
        cmp     si, 0x3029
        jbe     L47
L83:
        push    esi
        call    FUN_100094e0
        test    al, al
        jnz     L47
        cmp     si, 0x2e
        jz      L47
        cmp     si, 0x2d
        jz      L47
        cmp     si, 0x5f
        jz      L47
        cmp     si, 0x3a
        jz      L47
        push    esi
        call    FUN_100094c0
        test    al, al
        jnz     L47
        push    esi
        call    FUN_10009500
        test    al, al
        jnz     L47
        pop     ebx
        pop     edi
        mov     al, 0x1
        pop     esi
        ret
Lbf:
        push    offset g_str_10025690
        mov     ecx, edi
        call    FUN_10008d30
        pop     edi
        xor     al, al
        pop     esi
        ret
    }
}
