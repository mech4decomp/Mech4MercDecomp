/*
 * FUN_004a7220 (68 B) — __thiscall MLR object method: lazily allocates a
 * sub-object via virtual call on global 0x007da884, then forwards to
 * FUN_004ac1d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da884;
extern void __cdecl FUN_004ac1d0(void);

__declspec(naked) void FUN_004a7220(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi+0x10]
        mov     ecx, dword ptr [esi+0x2bc]
        test    ecx, ecx
        lea     eax, [esi+0x2bc]
        jz      L1
        mov     ecx, dword ptr [esi+0x2b4]
        test    ecx, ecx
        jnz     L1
        mov     ecx, dword ptr [g_007da884]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx+4]
        mov     dword ptr [esi+0x2b4], eax
L1:
        mov     eax, dword ptr [esp+0xc]
        push    eax
        mov     ecx, edi
        call    FUN_004ac1d0
        pop     edi
        pop     esi
        ret     4
    }
}
