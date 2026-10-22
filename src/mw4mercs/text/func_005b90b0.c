/*
 * FUN_005b90b0 (62 B) — MechWarrior4::Sensor singleton teardown.
 *
 * If global 0x007f2140 non-null, calls FUN_00501b40 (thiscall) then
 * frees it. Clears 0x007f2140, unregisters the "Sensor" log stream
 * (FUN_006f4850), clears 0x007f2138.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void *param);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_006f4850(void *a, int b);

__declspec(naked) void __stdcall FUN_005b90b0(void)
{
    

extern int DAT_007f2140;
extern int DAT_007f2138;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2140]
        test    esi, esi
        jz      L_skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov eax, dword ptr [DAT_007f2138]
        push    0x1
        push    eax
        mov dword ptr [DAT_007f2140], 0x0
        call    FUN_006f4850
        mov dword ptr [DAT_007f2138], 0x0
        pop     esi
        ret
    }


}
