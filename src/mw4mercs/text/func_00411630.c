/*
 * FUN_00411630 (22 B) — __thiscall copy ctor: copies a dword from
 * arg1 and a byte from arg2 into this at +0/+4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00411630(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [eax], edx
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax + 4], dl
        ret     8
    }
}
