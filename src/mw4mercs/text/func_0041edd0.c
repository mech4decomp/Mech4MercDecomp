/*
 * FUN_0041edd0 (66 B) — __thiscall serialization read-float helper.
 * Sets up a local bit-buffer, calls FUN_0041eb40 to init it, then
 * FUN_00421220 to read a float value, storing the result via FSTP.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_00421220(void);

__declspec(naked) void FUN_0041edd0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x1c]
        push    edi
        lea     eax, [esp+0xc]
        mov     esi, ecx
        push    eax
        mov     dword ptr [esp+0x10], 0
        call    FUN_0041eb40
        mov     ecx, dword ptr [esp+0x18]
        mov     edx, dword ptr [esp+0x14]
        mov     eax, dword ptr [esp+0x8]
        push    edi
        push    ecx
        push    edx
        push    eax
        call    FUN_00421220
        mov     ecx, dword ptr [esp+0x20]
        add     esp, 0x10
        fstp    dword ptr [ecx]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x10
    }
}
