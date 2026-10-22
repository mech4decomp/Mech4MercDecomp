/*
 * func_005efd10 - __thiscall
 * If a global counter is non-zero, forwards a value through two calls.
 */
__declspec(naked) void func_005efd10()
{
    

extern void __cdecl FUN_005f07c2(void);
extern void __cdecl FUN_005f07a4(void);
extern void __cdecl FUN_100549929(void);
__asm {
push    esi
        mov     esi, ecx
        call FUN_005f07c2
        mov     ecx, [eax + 0x3b0]
        test    ecx, ecx
        jz      done
        mov     eax, [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov     ecx, [eax + 0x70]
        push    ecx
        mov     ecx, esi
        call FUN_005f07a4
        mov     ecx, [eax + 0x3b0]
        call FUN_100549929
    done:
        pop     esi
        ret
    }


}
