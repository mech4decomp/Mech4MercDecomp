/*
 * FUN_00606ca0 (90 B) — __thiscall (ECX = this), RET 0x4 (1 stack param).
 * Constructor: calls FUN_00415180(DAT_007b8c10), computes a count from
 * param->0x10 / 12, installs vtable 0x78bad0, and optionally allocates a
 * buffer via FUN_004084d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __stdcall FUN_00415180(int param);
extern void __cdecl FUN_004084d0(int size);

__declspec(naked) void __stdcall FUN_00606ca0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, 0xaaaaaaab
        mul     dword ptr [ecx + 0x10]
        shr     edx, 0x3
        test    dl, dl
        mov     dword ptr [esi + 0x8], 0x0
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi], 0x78bad0
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], 0x0
        jz      L_ret
        and     edx, 0xff
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi + 0x14], eax
L_ret:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
