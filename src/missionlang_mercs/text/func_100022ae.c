/*
 * FUN_100022ae (389 B) — build the codepage bitmap (0x100056a0) and the
 * 0x100055a0 case-mapping table from the loaded string table, using three
 * __cdecl conversion helpers (0x10003422 / 0x100031d3).
 *
 * __stdcall, 0 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Rewritten from byte-lock to real mnemonics: the unconditional short jumps
 * (EB rel8) are now native `jmp label` (MSVC6 emits EB rel8 for in-range
 * targets). No __emit remains.
 */

extern int g_10005580;                                /* 0x10005580 */
extern int g_100057a4;                                /* 0x100057a4 */
extern char g_100056a1;                               /* 0x100056a1 bitmap+1 */
extern char g_100055a0;                               /* 0x100055a0 case table */

extern int (__stdcall *g_10004078)(void *, void *);   /* IAT 0x10004078 */

extern void __cdecl FUN_10003422(void);
extern void __cdecl FUN_100031d3(void);

__declspec(naked) void __stdcall FUN_100022ae(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x514
        lea     eax, [ebp - 0x14]
        push    esi
        push    eax
        push    dword ptr [g_10005580]
        call    dword ptr [g_10004078]
        cmp     eax, 1
        jnz     L23E7
        xor     eax, eax
        mov     esi, 0x100
L22D8:
        mov     byte ptr [ebp + eax - 0x114], al
        inc     eax
        cmp     eax, esi
        jc      L22D8
        mov     al, byte ptr [ebp - 0xe]
        mov     byte ptr [ebp - 0x114], 0x20
        test    al, al
        jz      L2329
        push    ebx
        push    edi
        lea     edx, [ebp - 0xd]
L22F7:
        movzx   ecx, byte ptr [edx]
        movzx   eax, al
        cmp     eax, ecx
        ja      L231E
        sub     ecx, eax
        lea     edi, [ebp + eax - 0x114]
        inc     ecx
        mov     eax, 0x20202020
        mov     ebx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, ebx
        and     ecx, 3
        rep stosb
L231E:
        inc     edx
        inc     edx
        mov     al, byte ptr [edx - 1]
        test    al, al
        jnz     L22F7
        pop     edi
        pop     ebx
L2329:
        push    0
        lea     eax, [ebp - 0x514]
        push    dword ptr [g_100057a4]
        push    dword ptr [g_10005580]
        push    eax
        lea     eax, [ebp - 0x114]
        push    esi
        push    eax
        push    1
        call    FUN_10003422
        push    0
        lea     eax, [ebp - 0x214]
        push    dword ptr [g_10005580]
        push    esi
        push    eax
        lea     eax, [ebp - 0x114]
        push    esi
        push    eax
        push    esi
        push    dword ptr [g_100057a4]
        call    FUN_100031d3
        push    0
        lea     eax, [ebp - 0x314]
        push    dword ptr [g_10005580]
        push    esi
        push    eax
        lea     eax, [ebp - 0x114]
        push    esi
        push    eax
        push    0x200
        push    dword ptr [g_100057a4]
        call    FUN_100031d3
        add     esp, 0x5c
        xor     eax, eax
        lea     ecx, [ebp - 0x514]
L23A4:
        mov     dx, word ptr [ecx]
        test    dl, 1
        jz      L23C2
        or      byte ptr [eax + g_100056a1], 0x10
        mov     dl, byte ptr [ebp + eax - 0x214]
L23BA:
        mov     byte ptr [eax + g_100055a0], dl
        jmp     L23DE
L23C2:
        test    dl, 2
        jz      L23D7
        or      byte ptr [eax + g_100056a1], 0x20
        mov     dl, byte ptr [ebp + eax - 0x314]
        jmp     L23BA
L23D7:
        and     byte ptr [eax + g_100055a0], 0
L23DE:
        inc     eax
        inc     ecx
        inc     ecx
        cmp     eax, esi
        jc      L23A4
        jmp     L2430
L23E7:
        xor     eax, eax
        mov     esi, 0x100
L23EE:
        cmp     eax, 0x41
        jc      L240C
        cmp     eax, 0x5a
        ja      L240C
        or      byte ptr [eax + g_100056a1], 0x10
        mov     cl, al
        add     cl, 0x20
L2404:
        mov     byte ptr [eax + g_100055a0], cl
        jmp     L242B
L240C:
        cmp     eax, 0x61
        jc      L2424
        cmp     eax, 0x7a
        ja      L2424
        or      byte ptr [eax + g_100056a1], 0x20
        mov     cl, al
        sub     cl, 0x20
        jmp     L2404
L2424:
        and     byte ptr [eax + g_100055a0], 0
L242B:
        inc     eax
        cmp     eax, esi
        jc      L23EE
L2430:
        pop     esi
        leave
        ret
    }
}
