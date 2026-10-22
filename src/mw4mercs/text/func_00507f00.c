/*
 * func_00507F00 - Destructor
 * Decrements reference count, frees if zero, calls base destructor
 */
__declspec(naked) void func_00507F00()
{
    

extern void __cdecl FUN_1004084ca(void);
extern void __cdecl FUN_100415360(void);
__asm {
push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x007771F0
        mov     eax, [esi + 0x44]
        test    eax, eax
        je      call_dtor
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     call_dtor
        push    eax
        call FUN_1004084ca
        add     esp, 4
    call_dtor:
        mov     ecx, esi
        call FUN_100415360
        pop     esi
        ret
    }


}
