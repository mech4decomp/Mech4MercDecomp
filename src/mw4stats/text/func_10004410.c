/*
 * MW4Stats.dll - FUN_10004410 (0x10004410, 16 B, __fastcall)
 * Constructor: sets [eax+4]=0, sets vtable ptr 0x100211F0 at [eax].
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_vtable_100211F0;

__declspec(naked) void FUN_10004410(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax+0x4], 0
        mov     dword ptr [eax], offset g_vtable_100211F0
        ret
    }
}
