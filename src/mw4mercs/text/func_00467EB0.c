/*
 * FUN_00467EB0 (27 B) — __thiscall (RET 0x8). Getter: copies two dwords
 * from `this` (ECX) at +0x90/+0x94 into two caller-provided out pointers
 * ([esp+4], [esp+8]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00467EB0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x90]
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ecx + 0x94]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        ret     8
    }
}
