/*
 * FUN_004f9430 (639 B) — MLR/Adept: config/state loader. Calls
 * FUN_00411c40 (key/value setter) many times, FUN_004d1f80 /
 * FUN_004d21c0 (string helpers), FUN_00412780 / FUN_00412740 /
 * FUN_004125e0, and refcount-decrements several strings.
 * __thiscall (ECX = this), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00772408;
extern char g_00775b1c;
extern char g_00775b14;
extern char g_00775b10;
extern char g_00775b00;
extern char g_00775af0;
extern char g_00775ae0;
extern char g_00775ad0;
extern char g_00775ac4;
extern char g_00775ab0;
extern char g_00775a9c;
extern char g_00775a88;
extern char g_00773250;
extern char g_00775a80;
extern char g_00775a74;
extern short g_007db0ac;
extern short g_007db0ae;

extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004f9430(void)
{
    __asm {
        sub     esp, 0x164
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x5c]
        push    edi
        mov     edi, dword ptr [esp+0x170]
        push    eax
        push    offset g_00772408
        mov     ecx, edi
        call    FUN_00411c40
        push    1
        lea     ecx, [esi+0x16e]
        push    ecx
        lea     ecx, [esp+0x130]
        call    FUN_004d1f80
        push    1
        lea     edx, [esi+0x16a]
        push    edx
        lea     ecx, [esp+0xa8]
        call    FUN_004d1f80
        push    1
        lea     eax, [esi+0x17a]
        push    eax
        lea     ecx, [esp+0x64]
        call    FUN_004d1f80
        push    1
        lea     ecx, [esi+0x176]
        push    ecx
        lea     ecx, [esp+0xec]
        call    FUN_004d1f80
        mov     edx, dword ptr [esp+0x150]
        push    edx
        push    offset g_00775b1c
        mov     ecx, edi
        call    FUN_00411c40
        mov     eax, dword ptr [esp+0xc8]
        push    eax
        push    offset g_00775b14
        mov     ecx, edi
        call    FUN_00411c40
        mov     ecx, dword ptr [esp+0x84]
        push    ecx
        push    offset g_00775b10
        mov     ecx, edi
        call    FUN_00411c40
        push    offset g_00775b00
        push    offset g_00775af0
        mov     ecx, edi
        call    FUN_00411c40
        push    offset g_00775ae0
        push    offset g_00775ad0
        mov     ecx, edi
        call    FUN_00411c40
        mov     dx, word ptr [esi+0x17e]
        cmp     dx, word ptr [g_007db0ac]
        lea     eax, [esi+0x17e]
        jnz     L9523
        mov     cx, word ptr [eax+2]
        cmp     cx, word ptr [g_007db0ae]
        jz      L9549
L9523:
        push    1
        push    eax
        lea     ecx, [esp+0x20]
        call    FUN_004d1f80
        mov     edx, dword ptr [esp+0x40]
        push    edx
        push    offset g_00775ac4
        mov     ecx, edi
        call    FUN_00411c40
        lea     ecx, [esp+0x18]
        call    FUN_004d21c0
L9549:
        mov     eax, dword ptr [esi+0xe0]
        mov     eax, dword ptr [eax+0x14]
        dec     eax
        mov     dword ptr [esp+0x8], 0
        jz      L9571
        dec     eax
        jz      L9563
        dec     eax
        jz      L956a
L9563:
        push    offset g_00775ab0
        jmp     L9576
L956a:
        push    offset g_00775a9c
        jmp     L9576
L9571:
        push    offset g_00775a88
L9576:
        lea     ecx, [esp+0xc]
        call    FUN_00412780
        mov     ecx, dword ptr [esp+0x8]
        push    ecx
        push    offset g_00773250
        mov     ecx, edi
        call    FUN_00411c40
        mov     edx, dword ptr [esp+0x10c]
        push    edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x14], 0
        mov     dword ptr [esp+0x10], 0
        call    FUN_00412780
        mov     edx, dword ptr [esp+0x10]
        mov     cl, byte ptr [edx]
        xor     eax, eax
        test    cl, cl
        jz      L95cb
L95bd:
        cmp     cl, 0x7b
        jz      L95cb
        mov     cl, byte ptr [eax+edx+1]
        inc     eax
        test    cl, cl
        jnz     L95bd
L95cb:
        mov     byte ptr [eax+edx], 0
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x10]
        call    FUN_00412740
        mov     ecx, dword ptr [esp+0xc]
        push    offset g_00775a80
        push    ecx
        lea     ecx, [esp+0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        jz      L9615
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L9615
        push    eax
        call    FUN_004084e0
        add     esp, 4
L9615:
        mov     edx, dword ptr [esp+0xc]
        push    edx
        push    offset g_00775a74
        mov     ecx, edi
        call    FUN_00411c40
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        pop     edi
        pop     esi
        jz      L9643
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L9643
        push    eax
        call    FUN_004084e0
        add     esp, 4
L9643:
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      L965e
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L965e
        push    eax
        call    FUN_004084e0
        add     esp, 4
L965e:
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (8B 04 24); ref needs 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        jz      L9679
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L9679
        push    eax
        call    FUN_004084e0
        add     esp, 4
L9679:
        lea     ecx, [esp+0xdc]
        call    FUN_004d21c0
        lea     ecx, [esp+0x54]
        call    FUN_004d21c0
        lea     ecx, [esp+0x98]
        call    FUN_004d21c0
        lea     ecx, [esp+0x120]
        call    FUN_004d21c0
        add     esp, 0x164
        ret     0x4
    }
}
