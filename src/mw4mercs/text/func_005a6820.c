/*
 * FUN_005a6820 (122 B) — Initialization function with FPU math.
 *
 * Calls a virtual method on sub-object at this+0x78, then computes
 * several float fields using FPU operations.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_0050e200(int param);

__declspec(naked) void __stdcall FUN_005a6820(int param)
{
    

extern int DAT_007b4384;
extern int DAT_0076d070;
__asm {
push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov     esi, eax
        mov     ecx, dword ptr [esi + 0x38]
        xor     al, al
        push    ecx
        mov     byte ptr [edi + 0x1ac], al
        mov     byte ptr [edi + 0x1ad], al
        call    FUN_0050e200
        fstp    dword ptr [edi + 0x1c0]
        fld     dword ptr [esi + 0x38]
        add     esp, 4
        fdiv    dword ptr [esi + 0x34]
        fstp    dword ptr [edi + 0x1b4]
        fld     dword ptr [esi + 0x3c]
        fsub    dword ptr [esi + 0x38]
        fld dword ptr [DAT_007b4384]
        fmul    st, st(1)
        fmul    st, st(1)
        fld     dword ptr [esi + 0x3c]
        fadd    st, st(0)
        fsub    dword ptr [esi + 0x38]
        fdivp   st(1), st
        fstp    dword ptr [edi + 0x1b8]
        fstp    st(0)
        fld     dword ptr [esi + 0x38]
        fmul dword ptr [DAT_0076d070]
        fsubr   dword ptr [esi + 0x3c]
        fmul    dword ptr [esi + 0x38]
        fdivr   dword ptr [esi + 0x40]
        fstp    dword ptr [edi + 0x1bc]
        pop     edi
        pop     esi
        ret     4
    }


}
