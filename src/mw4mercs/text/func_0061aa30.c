/*
 * FUN_0061aa30 (673 B) — __thiscall: loads a large set of fields from a
 * stream (param at [esp+0x60]) via its vtable method [+0x24], then reads
 * "options.ini" section "graphics options" and, based on the resolution
 * index at [edi+0x30], writes ScreenWidth/ScreenHeight via FUN_00411d10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_0040e4a0(void);
extern void __cdecl FUN_0040de20(void);

extern char g_76c6b4[];   /* "options.ini" */
extern char g_76c7f4[];   /* "graphics options" */
extern char g_77a174[];   /* "screenwidth" */
extern char g_772a5c[];   /* "ScreenWidth" */
extern char g_772a4c[];   /* "ScreenHeight" */
extern int  g_61acd4;     /* jump table at 0x0061acd4 */

__declspec(naked) void FUN_0061aa30(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [edi + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     ebp, [edi + 0x30]
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [edi + 0x34]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x38]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x4c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x54]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x58]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [edi + 0x60]
        push    ecx
        push    esi
        call    FUN_00412a50
        lea     edx, [edi + 0x64]
        push    edx
        push    esi
        call    FUN_00412a50
        lea     eax, [edi + 0x68]
        push    eax
        push    esi
        call    FUN_00412a50
        lea     ecx, [edi + 0x5c]
        push    ecx
        push    esi
        call    FUN_00412a50
        lea     edx, [edi + 0x6c]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esi]
        add     esp, 0x28
        push    0x4
        lea     ecx, [edi + 0x70]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x74]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x78]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x7c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [edi + 0x80]
        push    ecx
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     eax, [edi + 0x84]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [edi + 0x88]
        push    ecx
        push    esi
        call    FUN_00412a50
        add     esp, 0x8
        add     edi, 0x8c
        mov     ebx, 0x200
    L_61abcb:
        mov     edx, dword ptr [esi]
        push    0x4
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     edi, 0x4
        dec     ebx
        jnz     L_61abcb
        push    0x1
        push    0x0
        push    offset g_76c6b4
        lea     ecx, [esp + 0x1c]
        call    FUN_0040dca0
        push    offset g_76c7f4
        lea     ecx, [esp + 0x14]
        call    FUN_0040ed60
        mov     esi, eax
        test    esi, esi
        jz      L_61acbe
        push    0x0
        lea     eax, [esp + 0x68]
        push    eax
        push    offset g_77a174
        mov     ecx, esi
        mov     dword ptr [esp + 0x70], 0x320
        call    FUN_00411cb0
        mov     eax, dword ptr [ebp]
        cmp     eax, 0x4
        ja      L_61acb5
        jmp     dword ptr [eax*4 + g_61acd4]
        push    0x640
        push    offset g_772a5c
        mov     ecx, esi
        call    FUN_00411d10
        push    0x4b0
        jmp     L_61aca9
        push    0x500
        push    offset g_772a5c
        mov     ecx, esi
        call    FUN_00411d10
        push    0x400
        jmp     L_61aca9
        push    0x400
        push    offset g_772a5c
        mov     ecx, esi
        call    FUN_00411d10
        push    0x300
        jmp     L_61aca9
        push    0x320
        push    offset g_772a5c
        mov     ecx, esi
        call    FUN_00411d10
        push    0x258
        jmp     L_61aca9
        push    0x280
        push    offset g_772a5c
        mov     ecx, esi
        call    FUN_00411d10
        push    0x1e0
    L_61aca9:
        push    offset g_772a4c
        mov     ecx, esi
        call    FUN_00411d10
    L_61acb5:
        lea     ecx, [esp + 0x10]
        call    FUN_0040e4a0
    L_61acbe:
        lea     ecx, [esp + 0x10]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x4
    }
}
