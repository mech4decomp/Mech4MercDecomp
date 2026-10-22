/* src/modules/gundll/objects/func_10014b40.c
 * FUN_10014b40 (47 B) - __thiscall. Constructor.
 * Match: target 100%
 */

extern void __cdecl FUN_1001c720(void); /* rel32 call */

__declspec(naked) void FUN_10014b40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0x510a
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi], 0x100498f0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
