/*
 * func_00501500 - Constructor
 * Calls initialization function, sets vtable, returns this
 */
extern void __cdecl FUN_005013f0(void);

__declspec(naked) void func_00501500()
{
    __asm {
        mov     eax, [esp + 0x10]
        mov     edx, [esp + 8]
        push    esi
        push    eax
        mov     eax, [esp + 0xc]
        mov     esi, ecx
        mov     ecx, [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x00776390
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
