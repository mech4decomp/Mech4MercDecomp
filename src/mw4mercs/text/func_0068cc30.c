/*
 * FUN_0068cc30 (27 B) — __fastcall initializer: zeroes the object, stores
 * the high byte of the second arg (EDX) into field 0x8, then copies field 0
 * into field 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0068cc30(void)
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
        mov     ecx, dword ptr [eax]
        mov     dword ptr [eax + 0x4], ecx
        pop     ecx
        ret
    }
}
