/*
 * FUN_005EAF10 (16 B) — __thiscall (ECX = this).
 *
 * Loads sub-object pointer at this+0x78, calls its vtable method at +4,
 * then returns the float at result+0x638.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005eaf10(void *param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x78]
        add     ecx, 0x78
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x638]
        ret
    }
}
