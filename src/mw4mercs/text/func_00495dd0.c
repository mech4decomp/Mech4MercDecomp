/*
 * FUN_00495DD0 (49 B) — __thiscall (ECX = output), RET 0xC.
 * Vector MAD: out[i] = scale * src2[i] + src1[i] for i=0..2.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_00495dd0(void)
{
    __asm {
        fld     dword ptr [esp + 0x0c]
        mov     edx, dword ptr [esp + 0x04]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x08]
        fmul    dword ptr [ecx]
        fadd    dword ptr [edx]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x0c]
        fmul    dword ptr [ecx + 0x04]
        fadd    dword ptr [edx + 0x04]
        fstp    dword ptr [eax + 0x04]
        fld     dword ptr [esp + 0x0c]
        fmul    dword ptr [ecx + 0x08]
        fadd    dword ptr [edx + 0x08]
        fstp    dword ptr [eax + 0x08]
        ret     0x0c
    }
}
