/*
 * FUN_005c0e60 (25 B) — __thiscall constructor: this[0]=param,
 * this[1]=0, this[2]=1.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005c0e60(void *param)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0x8], 0x1
        ret     4
    }
}
