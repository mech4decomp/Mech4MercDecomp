/*
 * FUN_10037902 (24 B) — __stdcall, RET 0x4.
 * Stores [ebp+8], eax, ebp into globals at 0x10051898/0x10051894/0x1005189c
 * (base 0x10051890).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10037902(void)
{
    __asm {
        push    ebx
        push    ecx
        mov     ebx, 0x10051890
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [ebx + 0x8], ecx
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [ebx + 0xc], ebp
        pop     ecx
        pop     ebx
        ret     0x4
    }
}
