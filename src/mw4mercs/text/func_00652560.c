/*
 * FUN_00652560 (22 B) — __fastcall constructor-ish: zeroes a 12-byte object
 * and stores the high byte of the first arg into byte [obj+8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00652560(void)
{
    __asm {
        push    ecx
        mov     dl, byte ptr [esp + 0x3]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 0x8], dl
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        pop     ecx
        ret
    }
}
