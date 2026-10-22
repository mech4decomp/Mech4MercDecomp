/*
 * FUN_00490370 (189 B) — MLR light "write to stream" (__thiscall, RET 0x4).
 * Queries the light type via a virtual call, writes the type name string,
 * then serializes intensity/color/position/direction fields to the stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_00412290(void);
extern void __cdecl FUN_00411fd0(void);
extern int g_0076ffc8;
extern int g_0076ffbc;
extern int g_0076ffb4;
extern int g_0076ffac;
extern int g_0076ffa4;
extern int g_0076ffd0;
extern int g_0076ff78;
extern int g_0076ff70;
extern int g_0076ff64;
extern int g_0076ff58;

__declspec(naked) void FUN_00490370(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0xc]
        cmp     eax, 5
        mov     edi, dword ptr [esp + 0x24]
        ja      L_default
        /* __emit: MSVC6 encodes jmp [eax*4+disp32] as FF 25 (drops SIB); ref needs FF 24 85 */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x30
        __emit 0x04
        __emit 0x49
        __emit 0x00

    L_case0:
        push    offset g_0076ffc8
        jmp     L_common
    L_case1:
        push    offset g_0076ffbc
        jmp     L_common
    L_case3:
        push    offset g_0076ffb4
        jmp     L_common
    L_case4:
        push    offset g_0076ffac
        jmp     L_common
    L_case5:
        push    offset g_0076ffa4
    L_common:
        push    offset g_0076ffd0
        mov     ecx, edi
        call    FUN_00411c40
    L_default:
        mov     ecx, dword ptr [esi + 8]
        push    ecx
        push    offset g_0076ff78
        mov     ecx, edi
        call    FUN_00411dc0
        lea     edx, [esi + 0xc]
        push    edx
        push    offset g_0076ff70
        mov     ecx, edi
        call    FUN_00412290
        mov     eax, dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [esi + 0x44]
        mov     dword ptr [esp + 8], eax
        lea     eax, [esp + 8]
        push    eax
        mov     dword ptr [esp + 0x10], ecx
        push    offset g_0076ff64
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], edx
        call    FUN_00411fd0
        fld     dword ptr [esi + 0x20]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x30]
        lea     ecx, [esp + 0x14]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esi + 0x40]
        push    ecx
        fstp    dword ptr [esp + 0x20]
        push    offset g_0076ff58
        mov     ecx, edi
        call    FUN_00411fd0
        pop     edi
        pop     esi
        add     esp, 0x18
        ret     0x4
    }
}
