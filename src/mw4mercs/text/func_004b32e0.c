/*
 * FUN_004B32E0 (48 B) — __thiscall method (ECX=this), RET 0xC.
 * Looks up an entry by index (param_1 & 0xffff) in a table at this+0x174,
 * increments a counter at entry+0x10, and writes results to param_2 and param_3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004b32e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 0x174]
        mov     ecx, dword ptr [ecx + 0x17c]
        and     eax, 0xffff
        mov     edx, dword ptr [edx + eax * 4]
        inc     word ptr [edx + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     dword ptr [esi], edx
        lea     edx, [ecx + eax * 8]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax], edx
        pop     esi
        ret     0xc
    }
}
