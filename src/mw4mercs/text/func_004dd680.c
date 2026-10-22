/*
 * FUN_004dd680 (51 B) — __thiscall MLR/Adept object constructor.
 * Sets vtable 0x773888, calls FUN_004dd450 (state engine),
 * stores fields at +0x1c/+0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dd450(void);

__declspec(naked) void FUN_004dd680(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0xc]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004dd450
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x1c], eax
        mov     dword ptr [esi], 0x773888
        mov     dword ptr [esi+0x20], ecx
        mov     eax, esi
        pop     esi
        ret     0x14
    }
}
