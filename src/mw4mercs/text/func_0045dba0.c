/*
 * FUN_0045dba0 (51 B) — MLR_I_L_DeT_PMesh __thiscall constructor
 * (alternate ctor). Sets vtable 0x76ed48, zeroes lightmap buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_76ed48;
extern void __cdecl FUN_004618d0(int);

__declspec(naked) void FUN_0045dba0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004618d0
        xor     eax, eax
        mov     dword ptr [esi+0xa8], eax
        lea     ecx, [esi+0xa0]
        mov     dword ptr [esi+0xac], eax
        mov     dword ptr [esi], offset g_76ed48
        mov     dword ptr [esi+0xb0], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
