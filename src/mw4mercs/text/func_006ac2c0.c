/*
 * FUN_006ac2c0 (53 B) — __thiscall (ECX = this), RET 4.
 * If param == g_0076c5b0, call FUN_00699160; else compute
 * (*(float*)(*(int*)(this+0x18)+4)+0xc - ...+8) * param and pass to FUN_006992f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006992f0(float);

__declspec(naked) void __stdcall FUN_006ac2c0(float param)
{
    __asm {
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_else
        call    FUN_00699160
        ret     0x4
    L_else:
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 0x8]
        fmul    dword ptr [esp + 0x8]
        fstp    dword ptr [esp]
        call    FUN_006992f0
        ret     0x4
    }
}
