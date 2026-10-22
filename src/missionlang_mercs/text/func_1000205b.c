/*
 * FUN_1000205b (429 B) — codepage/string-table loader. Looks up a string in
 * the 0x10005248 table, builds a 0x100-byte bitmap at 0x100056a0, and
 * installs it into the 0x10005590 state block.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Rewritten from byte-lock to real mnemonics: the unconditional short jumps
 * (EB rel8) are now native `jmp label` (MSVC6 emits EB rel8 for in-range
 * targets). No __emit remains.
 */

extern int g_10005580;                                /* 0x10005580 */
extern int g_10005248;                                /* 0x10005248 table base */
extern int g_10005338;                                /* 0x10005338 table end */
extern int g_100057a4;                                /* 0x100057a4 */
extern char g_100056a0;                               /* 0x100056a0 bitmap base */
extern char g_100056a1;                               /* 0x100056a1 bitmap+1 */
extern char g_10005258;                               /* 0x10005258 table */
extern char g_10005240;                               /* 0x10005240 table */
extern char g_1000524c;                               /* 0x1000524c table */
extern int g_1000559c;                                /* 0x1000559c */
extern int g_10005590;                                /* 0x10005590 state block */
extern int g_10005528;                                /* 0x10005528 */

extern int (__stdcall *g_10004078)(void *, void *);   /* IAT 0x10004078 */

extern void __cdecl FUN_10001d0c(int);
extern void *__cdecl FUN_10002208(void *);
extern int __cdecl FUN_10002252(void *);
extern void __stdcall FUN_10002285(void);
extern void __stdcall FUN_100022ae(void);
extern void __cdecl FUN_10001d6d(int);

__declspec(naked) int __cdecl FUN_1000205b(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        push    0x19
        call    FUN_10001d0c
        push    dword ptr [ebp + 8]
        call    FUN_10002208
        mov     ebx, eax
        pop     ecx
        cmp     ebx, dword ptr [g_10005580]
        pop     ecx
        mov     dword ptr [ebp + 8], ebx
        jnz     L2089
L2082:
        xor     esi, esi
        jmp     L21F9
L2089:
        test    ebx, ebx
        jz      L21E7
        xor     edx, edx
        mov     eax, offset g_10005248
L2098:
        cmp     dword ptr [eax], ebx
        jz      L2110
        add     eax, 0x30
        inc     edx
        cmp     eax, offset g_10005338
        jl      L2098
        lea     eax, [ebp - 0x18]
        push    eax
        push    ebx
        call    dword ptr [g_10004078]
        push    1
        pop     esi
        cmp     eax, esi
        jnz     L21DE
        push    0x40
        and     dword ptr [g_100057a4], 0
        pop     ecx
        xor     eax, eax
        mov     edi, offset g_100056a0
        cmp     dword ptr [ebp - 0x18], esi
        rep stosd
        stosb
        mov     dword ptr [g_10005580], ebx
        jbe     L21CB
        cmp     byte ptr [ebp - 0x12], 0
        jz      L21A6
        lea     ecx, [ebp - 0x11]
L20ED:
        mov     dl, byte ptr [ecx]
        test    dl, dl
        jz      L21A6
        movzx   eax, byte ptr [ecx - 1]
        movzx   edx, dl
L20FE:
        cmp     eax, edx
        ja      L219A
        or      byte ptr [eax + g_100056a1], 4
        inc     eax
        jmp     L20FE
L2110:
        and     dword ptr [ebp - 4], 0
        push    0x40
        pop     ecx
        xor     eax, eax
        mov     edi, offset g_100056a0
        lea     esi, [edx + edx*2]
        rep stosd
        shl     esi, 4
        stosb
        lea     ebx, [esi + g_10005258]
L212D:
        cmp     byte ptr [ebx], 0
        mov     ecx, ebx
        jz      L2160
L2134:
        mov     dl, byte ptr [ecx + 1]
        test    dl, dl
        jz      L2160
        movzx   eax, byte ptr [ecx]
        movzx   edi, dl
        cmp     eax, edi
        ja      L2159
        mov     edx, dword ptr [ebp - 4]
        mov     dl, byte ptr [edx + g_10005240]
L214E:
        or      byte ptr [eax + g_100056a1], dl
        inc     eax
        cmp     eax, edi
        jbe     L214E
L2159:
        inc     ecx
        inc     ecx
        cmp     byte ptr [ecx], 0
        jnz     L2134
L2160:
        inc     dword ptr [ebp - 4]
        add     ebx, 8
        cmp     dword ptr [ebp - 4], 4
        jc      L212D
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [g_1000559c], 1
        push    eax
        mov     dword ptr [g_10005580], eax
        call    FUN_10002252
        lea     esi, [esi + g_1000524c]
        mov     edi, offset g_10005590
        movsd
        movsd
        pop     ecx
        mov     dword ptr [g_100057a4], eax
        movsd
        jmp     L21EC
L219A:
        inc     ecx
        inc     ecx
        cmp     byte ptr [ecx - 1], 0
        jnz     L20ED
L21A6:
        mov     eax, esi
L21A8:
        or      byte ptr [eax + g_100056a1], 8
        inc     eax
        cmp     eax, 0xff
        jc      L21A8
        push    ebx
        call    FUN_10002252
        pop     ecx
        mov     dword ptr [g_100057a4], eax
        mov     dword ptr [g_1000559c], esi
        jmp     L21D2
L21CB:
        and     dword ptr [g_1000559c], 0
L21D2:
        xor     eax, eax
        mov     edi, offset g_10005590
        stosd
        stosd
        stosd
        jmp     L21EC
L21DE:
        cmp     dword ptr [g_10005528], 0
        jz      L21F6
L21E7:
        call    FUN_10002285
L21EC:
        call    FUN_100022ae
        jmp     L2082
L21F6:
        or      esi, 0xffffffff
L21F9:
        push    0x19
        call    FUN_10001d6d
        pop     ecx
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
