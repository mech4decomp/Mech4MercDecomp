/*
 * MW4Stats.dll - FUN_10003420 (0x10003420, 17 B, __fastcall)
 * Destructor: set vtable 0x10021218, DeleteCriticalSection at +0x28.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void *g_10021038; /* IAT: DeleteCriticalSection */

__declspec(naked) void __cdecl FUN_10003420(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10021218
        add     ecx, 0x28
        push    ecx
        call    dword ptr [g_10021038]
        ret
    }
}
