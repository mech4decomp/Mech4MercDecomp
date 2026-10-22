/*
 * MW4Stats.dll - FUN_100032e0 (0x100032E0, 20 B, __fastcall)
 * Destructor: set vtable 0x10021204, call virtual dtor (slot +8) on sub-obj.
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * Aliased via former cpp/ translation thunk: FUN_100032e0 (deleted 2026-08; byte-identical jmp thunk, no .c scaffold).
 */

__declspec(naked) void __cdecl FUN_100032e0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10021204
        mov     ecx, dword ptr [ecx + 4]
        test    ecx, ecx
        jz      L_done
        mov     eax, dword ptr [ecx]
        push    ecx
        call    dword ptr [eax + 8]
L_done:
        ret
    }
}
