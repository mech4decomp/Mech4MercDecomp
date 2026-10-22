/*
 * FUN_004651c0 (59 B) — MLR PMesh-family constructor (__thiscall, RET 4).
 * Sets vtable 0x76ef40, calls sub-constructors on members at +0x6c/+0x74,
 * initializes fields at +0x8c (=-1.0f), +0x68 (=1), +0x11 (=2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0047a680(void);
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_00491280(void);

__declspec(naked) void FUN_004651c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_0047a680
        lea     ecx, [esi + 0x6c]
        call    FUN_004911e0
        lea     ecx, [esi + 0x74]
        call    FUN_00491280
        mov     dword ptr [esi], 0x76ef40
        mov     dword ptr [esi + 0x8c], 0xbf800000
        mov     byte ptr [esi + 0x68], 0x1
        mov     byte ptr [esi + 0x11], 0x2
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
