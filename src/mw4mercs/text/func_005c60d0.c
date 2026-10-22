/*
 * func_005c60d0 - FUN_005c60d0
 * __fastcall. Returns a float from a vtable-dispatched object.
 */
__declspec(naked) void func_005c60d0()
{
    

extern int DAT_007f25c0;
extern void __cdecl FUN_100415225(void);
__asm {
        mov eax, dword ptr [DAT_007f25c0]
        push    esi
        mov     esi, [ecx + 0x170]
        mov     ecx, [esi + 4]
        push    eax
        call FUN_100415225
        neg     al
        sbb     eax, eax
        and     eax, esi
        lea     ecx, [eax + 0x78]
        mov     eax, [ecx]
        call    dword ptr [eax + 4]
        fld     dword ptr [eax + 0x2bc]
        pop     esi
        ret
    }


}
