/*
 * MW4Stats.dll - FUN_10003300 (0x10003300, 17 B, __fastcall)
 * Destructor: set vtable 0x10021208, DeleteCriticalSection at +0x20.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void *g_10021038; /* IAT: DeleteCriticalSection */

__declspec(naked) void __cdecl FUN_10003300(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10021208
        add     ecx, 0x20
        push    ecx
        call    dword ptr [g_10021038]
        ret
    }
}
