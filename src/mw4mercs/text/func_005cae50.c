/*
 * FUN_005cae50 (47 B) — __thiscall setter. If the sub-object at
 * this+0x170 has a non-empty, non-null first element, stores param
 * into this+0x61c.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cae50(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x170]
        mov     edx, dword ptr [eax + 0x410]
        sub     edx, dword ptr [eax + 0x40c]
        sar     edx, 0x2
        jz      L_CAE7C
        mov     eax, dword ptr [eax + 0x40c]
        cmp     dword ptr [eax], 0x0
        jz      L_CAE7C
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x61c], edx
L_CAE7C:
        ret     0x4
    }
}
