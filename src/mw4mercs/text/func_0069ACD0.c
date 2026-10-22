/*
 * FUN_0069ACD0 (19 B) — __thiscall copy of a 5-byte struct from [esp+4] to
 * this (ecx): copies dword at +0 and byte at +4.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_0069ACD0(void)
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
