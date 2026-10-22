/*
 * FUN_100040ee (24 B, __stdcall, RET 0x4) — SEH/context recorder: stores
 * EAX, [EBP+8] and EBP into the context block at 0x10008370.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_100040ee(void)
{
    __asm {
        push    ebx
        push    ecx
        mov     ebx, 0x10008370
        mov     ecx, dword ptr [ebp + 8]
        mov     dword ptr [ebx + 8], ecx
        mov     dword ptr [ebx + 4], eax
        mov     dword ptr [ebx + 0xc], ebp
        pop     ecx
        pop     ebx
        ret     4
    }
}
