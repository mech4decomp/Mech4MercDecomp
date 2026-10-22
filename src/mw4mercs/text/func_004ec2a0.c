/*
 * FUN_004ec2a0 (64 B) — __thiscall (RET 0x4, 1 arg). MLR/Adept audio
 * state-engine init: stores FUN_00707e70(0) as double at this+0x28,
 * copies fields from param_1, calls __thiscall FUN_004ec300(this),
 * then FUN_00725080(this+0x18, this+0x24), and links back-pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __stdcall FUN_00707e70(int);
extern void __cdecl FUN_004ec300(void);
extern void __stdcall FUN_00725080(int, int);

__declspec(naked) void FUN_004ec2a0(void)
{
    __asm {
        push    esi
        push    edi
        push    0
        mov     esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi+0x28]
        mov     edi, dword ptr [esp+0xc]
        mov     eax, dword ptr [edi+0x30]
        mov     ecx, esi
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x14], edi
        call    FUN_004ec300
        mov     ecx, dword ptr [esi+0x24]
        mov     edx, dword ptr [esi+0x18]
        push    ecx
        push    edx
        call    FUN_00725080
        mov     eax, dword ptr [esi+0x14]
        mov     ecx, dword ptr [edi+0x18]
        pop     edi
        mov     dword ptr [eax+0x2c], esi
        mov     dword ptr [esi+0x30], ecx
        pop     esi
        ret     4
    }
}
