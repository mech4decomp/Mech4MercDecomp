/*
 * func_005efd90 - __thiscall scalar deleting destructor
 * Calls the destructor, optionally frees the object, returns the object pointer.
 */
__declspec(naked) void func_005efd90()
{
    

extern void __cdecl FUN_0041FC90(void);
extern void __cdecl FUN_1004084d5(void);
__asm {
push    esi
        mov     esi, ecx
        call FUN_0041FC90
        test    byte ptr [esp + 8], 1
        jz      done
        push    esi
        call FUN_1004084d5
        add     esp, 4
    done:
        mov     eax, esi
        pop     esi
        ret     4
    }


}
