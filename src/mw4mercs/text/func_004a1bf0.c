/*
 * FUN_004a1bf0 (53 B) — MLR particle/shrapnel: constructor. Calls
 * FUN_004a3b10 with the singleton 0x7da978 and two args, copies a field
 * from the second arg, sets vtable 0x7702b0. __thiscall, RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a3b10(void);
extern void *g_7da978;

__declspec(naked) void FUN_004a1bf0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_7da978]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004a3b10
        mov     edx, dword ptr [edi+0x124]
        pop     edi
        mov     dword ptr [esi], 0x7702b0
        mov     dword ptr [esi+0xe4], edx
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
