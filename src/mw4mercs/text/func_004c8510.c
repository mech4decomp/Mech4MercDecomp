/*
 * FUN_004c8510 (196 B) — __cdecl. MLR helper: builds a descriptor on the
 * stack (bitfield packing via AND/OR), calls FUN_0048bcd0 and FUN_0048dd20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048bcd0(void);
extern void __cdecl FUN_0048dd20(void);
extern int g_007dab24;

__declspec(naked) void FUN_004c8510(void)
{
    __asm {
        sub     esp, 0x38
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_0048bcd0
        mov     ecx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x44]
        mov     esi, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x38], ecx
        and     eax, 0x3f
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x2c], 0x0
        mov     ecx, 0x6
        lea     edi, [esp + 0xc]
        rep movsd
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x1c]
        and     eax, 0xffffc000
        or      ecx, 0x3fff
        and     eax, 0xffff3fff
        or      ecx, 0x1c000
        or      eax, 0x10000
        or      ecx, 0x4000000
        or      ecx, 0x180000
        and     eax, 0xfbffffff
        add     edx, 0x30
        and     eax, 0xffe7ffff
        mov     dword ptr [esp + 0x14], ecx
        and     esi, 0xfffffff0
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, dword ptr [esp + 0x4c]
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0xc], eax
        mov     eax, dword ptr [g_007dab24]
        or      edi, 0xf
        or      esi, 0x1
        push    ecx
        mov     ecx, dword ptr [edx + 0x26c]
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0xc], eax
        call    FUN_0048dd20
        pop     edi
        pop     esi
        add     esp, 0x38
        ret
    }
}
