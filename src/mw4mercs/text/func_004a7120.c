/*
 * FUN_004a7120 (39 B) — __thiscall MLR object constructor: forwards to
 * FUN_004a9720 (CStringT ctor) then installs vtable 0x7703e4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da990;
extern void __cdecl FUN_004a9720(void);

__declspec(naked) void FUN_004a7120(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        mov     edx, dword ptr [g_007da990]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+8]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004a9720
        mov     dword ptr [esi], 0x7703e4
        mov     eax, esi
        pop     esi
        ret     8
    }
}
