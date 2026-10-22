/*
 * FUN_005b7060 (100 B) — __thiscall (ECX = this), RET 8 (2 params).
 *
 * Switch on param_1 (index 0..3) via jump table at 0x5b70c4; each case
 * adds param_2 to a slot (this+0xa4/a8/ac/b0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b7060(void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x3
        ja      ret8
        jmp     dword ptr [eax*4 + 0x5b70c4]
case0:
        mov     edx, dword ptr [ecx + 0xa4]
        mov     eax, dword ptr [esp + 0x8]
        add     edx, eax
        mov     dword ptr [ecx + 0xa4], edx
        ret     0x8
case1:
        mov     eax, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [esp + 0x8]
        add     eax, edx
        mov     dword ptr [ecx + 0xa8], eax
        ret     0x8
case2:
        mov     edx, dword ptr [ecx + 0xac]
        mov     eax, dword ptr [esp + 0x8]
        add     edx, eax
        mov     dword ptr [ecx + 0xac], edx
        ret     0x8
case3:
        mov     eax, dword ptr [ecx + 0xb0]
        mov     edx, dword ptr [esp + 0x8]
        add     eax, edx
        mov     dword ptr [ecx + 0xb0], eax
ret8:
        ret     0x8
    }
}
