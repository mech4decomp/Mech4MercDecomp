/*
 * FUN_00699140 (30 B) — __thiscall indexer: computes a pointer into a
 * HUD element array. Reads a sub-object at +0x18, its array base at
 * +0x2c, indexes by param1*0x10, adds the +0x24 offset and param2*4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00699140(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 0x2c]
        shl     ecx, 0x4
        mov     ecx, dword ptr [edx + ecx + 0x8]
        add     ecx, dword ptr [eax + 0x24]
        mov     edx, dword ptr [esp + 0x8]
        lea     eax, [ecx + edx*4]
        ret     0x8
    }
}
