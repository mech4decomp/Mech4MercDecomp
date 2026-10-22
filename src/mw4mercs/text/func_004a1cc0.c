/*
 * FUN_004a1cc0 (68 B) — MLR particle/shrapnel: lazy-loads a stream object
 * into [esi+0x120] via the global 0x7da884 vtable if not already present,
 * then calls FUN_004a3b70. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a3b70(void);
extern void *g_7da884;

__declspec(naked) void FUN_004a1cc0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi+0x10]
        mov     ecx, dword ptr [esi+0x128]
        test    ecx, ecx
        lea     eax, [esi+0x128]
        jz      L1cf3
        mov     ecx, dword ptr [esi+0x120]
        test    ecx, ecx
        jnz     L1cf3
        mov     ecx, dword ptr [g_7da884]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx+0x4]
        mov     dword ptr [esi+0x120], eax
L1cf3:
        mov     eax, dword ptr [esp+0xc]
        push    eax
        mov     ecx, edi
        call    FUN_004a3b70
        pop     edi
        pop     esi
        ret     0x4
    }
}
