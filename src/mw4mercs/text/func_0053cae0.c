/*
 * FUN_0053CAE0 (167 B) — Team decal texture name formatting.
 *
 * Formats a decal texture name and sends it to the UI system.
 *
 * __thiscall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl sprintf(char *buf, const char *fmt, ...);
extern int __stdcall FUN_004ce190(int a, int b, int c, int d);

__declspec(naked) void __fastcall FUN_0053cae0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b420;
__asm {
        mov eax, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [eax]
        sub     esp, 0x100
        push    esi

        xor edx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [edx + 0x0c]
        mov     esi, dword ptr [esp + 0x108]     ; param_1 (team_index)
        mov     edx, esi
        shl     edx, 7
        add     edx, esi
        shl     edx, 3
        sub     edx, esi                        ; edx = team_index * 0x2038
        mov     ecx, dword ptr [ecx + edx*0x8 + 0x3588]  ; this + index*0x2038*8 + 0x3588
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax]
        push    ecx
        push    0x7542
        mov     ecx, eax
        call    dword ptr [edx + 0x34]          ; vfunc[0xD] - get format string
        push    eax
        lea     eax, [esp + 0x0c]
        push    eax
        call dword ptr [DAT_0076b420]

        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]

        xor edx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [edx + 0x0c]
        add     esp, 0x0c
        lea     edx, [esp + 0x04]
        push    edx
        push    0x00
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x00
        push    0x01
        call    dword ptr [eax + 0x30]          ; vfunc[0xC] - set text

        mov eax, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [eax]

        mov edx, dword ptr [DAT_007dab40]

        push    0x01
        push    0x00
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0x14]
        push    0x17
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004ce190
        pop     esi
        add     esp, 0x100
        ret     0x04
    }


}
