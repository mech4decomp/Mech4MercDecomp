/*
 * func_00500950 - Destructor
 * Decrements reference count, frees if zero, calls base destructor
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void func_00500950()
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x00776278
        mov     eax, [esi + 0x14]
        test    eax, eax
        je      call_dtor
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     call_dtor
        push    eax
        call    FUN_004084e0
        add     esp, 4
    call_dtor:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
