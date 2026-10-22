// FUN_00527D10 (63 bytes)
#include <windows.h>

extern int   DAT_007dab44;   /* 0x007DAB44 */
extern int   DAT_007dab40;   /* 0x007DAB40 */
extern float DAT_0077a1a0;   /* 0x0077A1A0 */
extern int   DAT_007d2d30;   /* 0x007D2D30 */
extern void __cdecl FUN_0050af90(void);

__declspec(naked) void func_00527d10(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [esp + 4]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x2C]
        mov     ecx, dword ptr [eax + 4]
        fild    dword ptr [ecx]
        xor     edx, 0x85739531
        push    edx
        push    ecx
        fmul    dword ptr [DAT_0077a1a0]
        mov     ecx, dword ptr [DAT_007d2d30]
        fstp    dword ptr [esp]
        call    FUN_0050af90
        mov     eax, 1
        ret     8
    }
}
