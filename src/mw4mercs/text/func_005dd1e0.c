/*
 * FUN_005dd1e0 (33 B) — __fastcall (ECX = param). Returns float on FPU stack.
 * If *(float*)(param+0x304) < 0x76c5b0, returns 0x7882b4, else the field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005dd1e0(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_007882b4;
__asm {
fld     dword ptr [ecx + 0x304]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x1
        jz      L_5dd1fa
        fld dword ptr [DAT_007882b4]
        ret
L_5dd1fa:
        fld     dword ptr [ecx + 0x304]
        ret
    }


}
