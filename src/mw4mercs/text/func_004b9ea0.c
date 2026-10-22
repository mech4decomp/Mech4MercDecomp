/*
 * FUN_004b9ea0 (138 B) — MLR subsystem __thiscall ctor. RET 0x8.
 *
 * CFLAGS: /O1
 */

extern int g_007daa4c;
extern void FUN_004c66b0(void);

__declspec(naked) void FUN_004b9ea0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        mov     edx, dword ptr [g_007daa4c]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x8]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004c66b0
        xor     eax, eax
        mov     dword ptr [esi+0x144], eax
        mov     dword ptr [esi+0x148], eax
        mov     dword ptr [esi+0x14c], eax
        mov     dword ptr [esi+0x150], eax
        mov     dword ptr [esi+0x154], eax
        mov     dword ptr [esi+0x158], eax
        mov     dword ptr [esi+0x15c], eax
        mov     dword ptr [esi+0x160], eax
        mov     eax, dword ptr [esi+0x18]
        shr     eax, 0xa
        and     eax, 0x1
        mov     ecx, dword ptr [eax*4 + 0x7b34c0]
        mov     dword ptr [esi], 0x770fac
        mov     dword ptr [esi+0x1c], 0x4c6f00
        mov     dword ptr [esi+0x130], 0x4c7c50
        mov     dword ptr [esi+0x134], 0x4c8200
        mov     dword ptr [esi+0x13c], ecx
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
