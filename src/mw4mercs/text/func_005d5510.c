/*
 * FUN_005d5510 (32 B) — __thiscall, RET 8 (2 stack params).
 *
 * Stores param_2 into array at this->[0x420] indexed by param_1;
 * if param_2 == this, records param_1 at this->[0x42c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d5510(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, ecx
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [ecx + 0x420]
        mov     dword ptr [esi + edx*4], eax
        pop     esi
        jnz     done
        mov     dword ptr [ecx + 0x42c], edx
done:
        ret     8
    }
}
