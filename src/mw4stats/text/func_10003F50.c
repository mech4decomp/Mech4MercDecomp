/*
 * MW4Stats.dll - FUN_10003f50 (0x10003F50, 34 B, __thiscall)
 * Ctor: stores byte param at +0x18, zeroes +0x1c/+0x20/+0x24,
 * InitializeCriticalSection(this). RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_1002103c; /* IAT: InitializeCriticalSection */

__declspec(naked) void FUN_10003f50(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     byte ptr [esi + 0x18], al
        xor     eax, eax
        push    esi
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        call    dword ptr [g_1002103c]
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
