/*
 * func_0051AA60 - Import thunk: calls [0x0076B298] with 0x0077A070 and [eax] args
 */
__declspec(naked) void __cdecl func_0051AA60()
{
    

extern int DAT_0076b298;
__asm {
mov  eax, [esp+4]
        mov  ecx, [eax]
        push 0x77a070
        push ecx
        call dword ptr [DAT_0076b298]
        add  esp, 8
        test eax, eax
        jz   skip_null
        mov  byte ptr [eax], 0
skip_null:
        ret
    }


}
