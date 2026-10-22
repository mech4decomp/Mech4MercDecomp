/*
 * FUN_004c85e0 (212 B) — __cdecl. MLR helper: builds a descriptor on the
 * stack (bitfield packing via AND/OR), stores a float from param_1+0x3c,
 * calls FUN_0048bcd0 and FUN_0048dd20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048bcd0(void);
extern void __cdecl FUN_0048dd20(void);
extern int g_007dab20;

__declspec(naked) void FUN_004c85e0(void)
{
    __asm {
        sub     esp, 0x44
        push    esi
        push    edi
        lea     ecx, [esp + 0x14]
        call    FUN_0048bcd0
        mov     ecx, dword ptr [esp + 0x54]
        mov     eax, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x50]
        mov     esi, dword ptr [esp + 0x5c]
        fld     dword ptr [edx + 0x3c]
        and     eax, 0x3f
        fst     dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x44], ecx
        fst     dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x30], eax
        fstp    dword ptr [esp + 0x8]
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x38], 0x0
        mov     ecx, 0x6
        lea     edi, [esp + 0x18]
        rep movsd
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x28]
        and     eax, 0xffffc000
        and     eax, 0xffff3fff
        or      ecx, 0x3fff
        or      eax, 0x10000
        or      ecx, 0x1c000
        and     eax, 0xfbffffff
        or      ecx, 0x4000000
        and     eax, 0xffe7ffff
        or      ecx, 0x180000
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [g_007dab20]
        mov     dword ptr [esp + 0x20], ecx
        and     esi, 0xfffffff0
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x58]
        lea     ecx, [esp + 0x8]
        lea     edx, [esp + 0x14]
        or      edi, 0xf
        or      esi, 0x1
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [eax + 0x26c]
        push    edx
        mov     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x20], esi
        call    FUN_0048dd20
        pop     edi
        pop     esi
        add     esp, 0x44
        ret
    }
}
