/*
 * MW4Stats.dll - FUN_10003190 (0x10003190, 21 B, __fastcall)
 * Destructor: set vtable 0x100211f4, call virtual dtor (slot +4) on sub-obj.
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void __cdecl FUN_10003190(void)
{
    __asm {
        mov     dword ptr [ecx], 0x100211f4
        mov     ecx, dword ptr [ecx + 4]
        test    ecx, ecx
        jz      L_done
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
L_done:
        ret
    }
}
