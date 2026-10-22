/*
 * func_00505270 - Virtual call + check
 * Calls vtable method at offset 0x14, then calls check function,
 * returns conditional result
 */
__declspec(naked) void func_00505270()
{
    

extern void __cdecl FUN_100504ab6(void);
extern int DAT_007dc7bc;
__asm {
push    esi
        mov     esi, [esp + 8]
        mov     ecx, [esi]
        mov     eax, [ecx]
        push    0x24
        call    dword ptr [eax + 0x14]
        push    esi
        call FUN_100504ab6
        mov ecx, dword ptr [DAT_007dc7bc]
        add     esp, 4
        test    eax, eax
        setne   al
        neg     al
        pop     esi
        sbb     eax, eax
        and     eax, ecx
        ret
    }


}
