/*
 * FUN_005cb300 (24 B) — Constructor: zero this[0] and this[4], copy a byte
 * from param_1 into this[8], then zero this[8] (dword) — the byte write is
 * overwritten by the final dword zero.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005cb300(void *this, void *param1)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 8], dl
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret     4
    }
}
