/*
 * FUN_00411610 (19 B) — __thiscall copy ctor: copies a dword and a
 * byte from arg1 into this at +0/+4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00411610(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     cl, byte ptr [ecx + 4]
        mov     dword ptr [eax], edx
        mov     byte ptr [eax + 4], cl
        ret     4
    }
}
