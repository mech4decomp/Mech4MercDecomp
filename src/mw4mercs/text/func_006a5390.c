/*
 * FUN_006A5390 (132 B) — Returns a float constant based on a comparison.
 *
 * Calls a virtual method (vtable+0x34) on param_1, reads a float at
 * result+0x9C minus a global, calls FUN_006100d0, and returns one of two
 * global floats depending on the FPU comparison.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_00770168;
extern float DAT_0076d064;
extern float DAT_0076c5b0;
extern void __cdecl FUN_006100d0(void);

__declspec(naked) void __stdcall FUN_006a5390(void)
{
    __asm {
        sub     esp, 0x10
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x9c]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        fsub    dword ptr [DAT_00770168]
        add     eax, 0x80
        push    0x0
        push    0xbf800000
        fstp    dword ptr [esp + 0xc]
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        call    FUN_006100d0
        fcomp   dword ptr [esp + 0x1c]
        add     esp, 0x18
        pop     esi
        fnstsw  ax
        test    ah, 0x1
        jz      L_6a540a
        fld     dword ptr [DAT_0076d064]
        add     esp, 0x10
        ret
L_6a540a:
        fld     dword ptr [DAT_0076c5b0]
        add     esp, 0x10
        ret
    }
}
