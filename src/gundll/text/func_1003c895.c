/*
 * FUN_1003c895 (41 B) — __stdcall.
 * memset-style: rep stosd 0x40 dwords at 0x10076980, then stosb;
 * zeroes globals 0x10076864/0x1007687c/0x10076a84, then 3x stosd at
 * 0x10076870. (Ghidra under-disassembled the stosd instructions.)
 *
 * CFLAGS: /O1
 */

extern int g_10076864;
extern int g_1007687c;
extern int g_10076a84;

__declspec(naked) void FUN_1003c895(void)
{
    __asm {
        push    edi
        push    0x40
        pop     ecx
        xor     eax, eax
        mov     edi, 0x10076980
        rep stosd
        stosb
        xor     eax, eax
        mov     edi, 0x10076870
        mov     dword ptr [g_10076864], eax
        mov     dword ptr [g_1007687c], eax
        mov     dword ptr [g_10076a84], eax
        stosd
        stosd
        stosd
        pop     edi
        ret
    }
}
