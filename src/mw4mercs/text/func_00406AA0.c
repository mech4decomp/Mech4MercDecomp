/*
 * func_00406AA0 - stdcall wrapper (ret 0xc)
 * Calls FUN_00401b80(*(*(esp+0xc))), returns boolean-ish value
 */

extern void __cdecl FUN_00401b80(void);

__declspec(naked) void func_00406AA0()
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        push    edx
        call    FUN_00401b80
        add     esp, 4
        neg     al
        sbb     eax, eax
        neg     eax
        dec     eax
        ret     0xc
    }
}
