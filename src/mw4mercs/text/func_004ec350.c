/*
 * FUN_004ec350 (52 B) — __thiscall (RET 0x4, 1 arg). MLR/Adept audio
 * state-engine: calls __thiscall FUN_004ec2a0(this,param_1), then
 * FUN_004ec850(this) and FUN_004f23a0(this) (both __thiscall, ECX set
 * from this+0x10 / table lookup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc868;
extern void __stdcall FUN_004ec2a0(int);
extern void __stdcall FUN_004ec850(int);
extern void __stdcall FUN_004f23a0(int);

__declspec(naked) void FUN_004ec350(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004ec2a0
        mov     ecx, dword ptr [esi+0x10]
        push    esi
        call    FUN_004ec850
        mov     eax, dword ptr [g_007dc868]
        push    esi
        mov     esi, dword ptr [esi+0x1c]
        lea     ecx, [esi+esi*4]
        lea     edx, [esi+ecx*2]
        mov     ecx, dword ptr [eax+0x48]
        lea     ecx, [ecx+edx*4]
        call    FUN_004f23a0
        pop     esi
        ret     4
    }
}
