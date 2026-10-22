/*
 * FUN_006485c0 (19 B) — __thiscall copy ctor (RET 0x4). Copies the 5-byte
 * value at *param_1 (dword + byte at +4) into *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006485c0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     cl, byte ptr [ecx + 0x4]
        mov     dword ptr [eax], edx
        mov     byte ptr [eax + 0x4], cl
        ret     0x4
    }
}
