/*
 * FUN_10004380 (18 B, __fastcall) - calls FUN_10004410(ecx), sets vtable
 * pointer 0x10021248 at [esi], returns esi.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10004410(void);
extern void *g_vtable_10021248;

__declspec(naked) void FUN_10004380(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10004410
        mov     dword ptr [esi], offset g_vtable_10021248
        mov     eax, esi
        pop     esi
        ret
    }
}
