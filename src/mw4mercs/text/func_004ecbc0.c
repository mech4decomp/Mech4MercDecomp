/*
 * FUN_004ecbc0 (63 B) — __thiscall, RET 0xc (3 stack args). Constructor:
 * calls FUN_00415180, zeroes fields, sets vtable 0x774828, calls
 * FUN_00412780, stores two args, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_004ecbc0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     edx, dword ptr [esp+8]
        xor     eax, eax
        lea     ecx, [esi+0x14]
        mov     dword ptr [ecx], eax
        push    edx
        mov     dword ptr [esi+8], eax
        mov     dword ptr [esi+0xc], eax
        mov     dword ptr [esi], 0x774828
        call    FUN_00412780
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [esi+0x10], eax
        mov     dword ptr [esi+0x18], ecx
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
