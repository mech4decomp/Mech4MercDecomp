/*
 * MW4Stats.dll - FUN_10003340 (0x10003340, 71 B, __thiscall)
 * Constructor: stores 5 params into fields +0x4..+0x14, zeroes +0x18/+0x1c/+0x1d,
 * sets vtable 0x10021208, InitializeCriticalSection at +0x20. RET 0x14.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_1002103c; /* IAT: InitializeCriticalSection */

__declspec(naked) void FUN_10003340(void)
{
    __asm {
        mov eax, dword ptr [esp+0x8]
        mov edx, dword ptr [esp+0xc]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+0x8]
        mov dword ptr [esi+0x4], eax
        mov eax, dword ptr [esp+0x14]
        mov dword ptr [esi+0xc], edx
        mov dword ptr [esi+0x8], ecx
        mov ecx, dword ptr [esp+0x18]
        mov dword ptr [esi+0x10], eax
        xor eax, eax
        lea edx, [esi+0x20]
        push edx
        mov dword ptr [esi+0x14], ecx
        mov dword ptr [esi+0x18], eax
        mov byte ptr [esi+0x1c], al
        mov byte ptr [esi+0x1d], al
        mov dword ptr [esi], 0x10021208
        call dword ptr [g_1002103c]
        mov eax, esi
        pop esi
        ret 0x14
    }
}
