/* src/modules/gundll/objects/func_1001e520.c
 * FUN_1001e520 (47 B) - __thiscall. Constructor.
 * Match: target 100%
 */

extern void __cdecl FUN_1001c720(void); /* rel32 call */

__declspec(naked) void FUN_1001e520(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0xc104
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi], 0x1004a9c0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
