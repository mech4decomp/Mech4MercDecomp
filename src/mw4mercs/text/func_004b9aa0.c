/*
 * FUN_004b9aa0 (95 B) — MLR subsystem __thiscall ctor. RET 0x8.
 *
 * CFLAGS: /O1
 */

extern int g_007daa40;
extern void FUN_004c66b0(void);

__declspec(naked) void FUN_004b9aa0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_007daa40]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004c66b0
        mov     eax, dword ptr [esi+0x18]
        shr     eax, 0xa
        and     eax, 0x1
        mov     edx, dword ptr [eax*4 + 0x7b34b8]
        push    0x4
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x14], eax
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esi], 0x770efc
        mov     dword ptr [esi+0x13c], edx
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
