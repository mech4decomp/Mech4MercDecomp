/*
 * FUN_004ec400 (98 B) — __thiscall (RET 0x4, 1 arg). MLR/Adept audio
 * state-engine: if this+0x10 set, calls __thiscall FUN_004154d0(this,
 * this+0x10+0x84/0x8c) and FUN_00724a00(this+0x18,0); then
 * FUN_006f4950(g_007dc86c), __thiscall FUN_004ec760(param_1),
 * FUN_00724a00(this+0x18,param_1+0x7c), FUN_006f49a0(); stores
 * this+0x10=param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc86c;
extern void __stdcall FUN_004154d0(int);
extern void __stdcall FUN_00724a00(int, int);
extern void __stdcall FUN_006f4950(int);
extern void __stdcall FUN_004ec760(int);
extern void __stdcall FUN_006f49a0(void);

__declspec(naked) void FUN_004ec400(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x10]
        test    eax, eax
        push    edi
        jz      L_431
        mov     ecx, dword ptr [esi+0x14]
        test    ecx, ecx
        jz      L_419
        add     eax, 0x84
        jmp     L_41e
    L_419:
        add     eax, 0x8c
    L_41e:
        push    eax
        mov     ecx, esi
        call    FUN_004154d0
        mov     eax, dword ptr [esi+0x18]
        push    0
        push    eax
        call    FUN_00724a00
    L_431:
        mov     ecx, dword ptr [g_007dc86c]
        push    ecx
        call    FUN_006f4950
        mov     edi, dword ptr [esp+0xc]
        mov     ecx, edi
        call    FUN_004ec760
        mov     edx, dword ptr [edi+0x7c]
        mov     eax, dword ptr [esi+0x18]
        push    edx
        push    eax
        call    FUN_00724a00
        call    FUN_006f49a0
        mov     dword ptr [esi+0x10], edi
        pop     edi
        pop     esi
        ret     4
    }
}
