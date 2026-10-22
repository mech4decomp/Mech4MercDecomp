/*
 * FUN_006094d0 (51 B) — animation-blend/archive subsystem. Looks up an
 * object (FUN_00416b60) and dispatches FUN_00609590/FUN_006096c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00609590(void);
extern void __cdecl FUN_006096c0(void);

__declspec(naked) void FUN_006094d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esi + 0x28]
        call    FUN_00416b60
        test    eax, eax
        jz      L_6094ff
        mov     ecx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [eax + 0x10]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00609590
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        mov     ecx, esi
        call    FUN_006096c0
L_6094ff:
        pop     esi
        ret     0x4
    }
}
