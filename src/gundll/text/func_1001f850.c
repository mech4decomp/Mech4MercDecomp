/* src/modules/gundll/objects/func_1001f850.c
 * FUN_1001f850 (47 B) - __thiscall. Constructor.
 * Match: target 100%
 */

extern void __cdecl FUN_1001c870(void); /* rel32 call */

__declspec(naked) void FUN_1001f850(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0xc204
        mov     esi, ecx
        call    FUN_1001c870
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi], 0x1004aa14
        mov     eax, esi
        pop     esi
        ret     4
    }
}
