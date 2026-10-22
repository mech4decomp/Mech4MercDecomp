/*
 * FUN_004ADF10 (33 B) — copy 4 dwords from source struct to this struct.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param: source pointer).
 * Copies fields at offsets 0x04, 0x08, 0x0c, 0x10.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004adf10(int this, int src)
{
    __asm {
        mov     eax, ecx
        mov     ecx, [esp + 0x4]
        mov     edx, [ecx + 0x0c]
        mov     [eax + 0x0c], edx
        mov     edx, [ecx + 0x10]
        mov     [eax + 0x10], edx
        mov     edx, [ecx + 0x08]
        mov     ecx, [ecx + 0x04]
        mov     [eax + 0x08], edx
        mov     [eax + 0x04], ecx
        ret     0x4
    }
}
