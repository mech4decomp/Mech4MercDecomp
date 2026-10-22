/*
 * FUN_004da620 (75 B) — __thiscall, RET 0x8. MLR/Adept core: sets
 * [this+0x154]=1, calls FUN_004da360, calls FUN_004da2f0(arg), and if
 * [this+0x164] != -1, calls FUN_004d64d0(1, [this+0x164]) via a
 * global-object indirection chain.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void FUN_004da360(void);
extern void FUN_004da2f0(void);
extern void FUN_004d64d0(void);

__declspec(naked) void FUN_004da620(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x154], 0x1
        call    FUN_004da360
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        mov     ecx, esi
        call    FUN_004da2f0
        mov     esi, dword ptr [esi + 0x164]
        cmp     esi, -0x1
        jz      L1
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx]
        push    esi
        push    0x1
        xor     ecx, 0x85739531
        call    FUN_004d64d0
L1:
        pop     esi
        ret     0x8
    }
}
