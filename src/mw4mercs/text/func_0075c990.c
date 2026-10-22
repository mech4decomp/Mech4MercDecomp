/*
 * FUN_0075c990 (201 B) — Number parser (decimal or hex) over a global string.
 *
 * Parses an integer from the string at *g_008bd2cc. Handles "0x" hex prefix
 * and plain decimal. Calls FUN_0075c8e0 with an error string on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_008bd2cc;
extern void __cdecl FUN_0075c8c0(void);
extern int __cdecl FUN_0075ca60(void);
extern void __cdecl FUN_0075c8e0(void *s);

__declspec(naked) void __stdcall FUN_0075c990(void)
{
    __asm {
        push    esi
        call    FUN_0075c8c0
        mov     eax, dword ptr [g_008bd2cc]
        cmp     word ptr [eax], 0x7830
        jz      L_CA0E
        mov     al, byte ptr [eax]
        cmp     al, 0x30
        jl      L_CA22
        cmp     al, 0x39
        jg      L_CA22
        call    FUN_0075ca60
        mov     esi, eax
        cmp     esi, -1
        jnz     L_C9C6
        push    0x79d0cc
        call    FUN_0075c8e0
        or      eax, esi
        pop     esi
        ret
L_C9C6:
        mov     eax, dword ptr [g_008bd2cc]
        mov     al, byte ptr [eax]
        cmp     al, 0x30
        jl      L_CA05
L_C9D1:
        cmp     al, 0x39
        jg      L_CA05
        call    FUN_0075ca60
        cmp     eax, -1
        jz      L_CA05
        xor     ecx, ecx
        cmp     ecx, 0xe6666666
        ja      L_CA4A
        jc      L_C9F3
        cmp     esi, 0x66666668
        jnc     L_CA4A
L_C9F3:
        mov     edx, dword ptr [g_008bd2cc]
        lea     ecx, [esi + esi*4]
        lea     esi, [eax + ecx*2]
        mov     al, byte ptr [edx]
        cmp     al, 0x30
        jge     L_C9D1
L_CA05:
        call    FUN_0075c8c0
        mov     eax, esi
        pop     esi
        ret
L_CA0E:
        add     eax, 2
        mov     dword ptr [g_008bd2cc], eax
        call    FUN_0075ca60
        mov     esi, eax
        cmp     esi, -1
        jnz     L_CA31
L_CA22:
        push    0x79d0cc
        call    FUN_0075c8e0
        or      eax, 0xffffffff
        pop     esi
        ret
L_CA31:
        call    FUN_0075ca60
        cmp     eax, -1
        jz      L_CA05
        cmp     esi, 0x10000000
        jnc     L_CA4A
        shl     esi, 4
        add     esi, eax
        jmp     L_CA31
L_CA4A:
        push    0x7af990
        call    FUN_0075c8e0
        or      eax, 0xffffffff
        pop     esi
        ret
    }
}
