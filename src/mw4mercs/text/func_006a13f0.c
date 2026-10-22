/*
 * FUN_006a13f0 (29 B) — __thiscall: negates three floats from the object
 * (offsets 0x00/0x10/0x20) and stores them into the caller's output buffer
 * (offsets 0x00/0x04/0x08). RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a13f0(void)
{
    __asm {
        fld     dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x4]
        fchs
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0x10]
        fchs
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x20]
        fchs
        fstp    dword ptr [eax + 0x8]
        ret     0x4
    }
}
