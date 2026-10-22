/*
 * FUN_0061a160 (689 B) — __thiscall constructor for a graphics-options
 * object. Reads a stream (param at [esp+0x64]) via its vtable method
 * [+0x20] to load a large set of fields, then parses "options.ini"
 * section "graphics options" for screenwidth to set a resolution index.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007b8c10;                 /* DAT_007b8c10 */
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_0040de20(void);
extern char g_0078c524;                 /* vtable ptr 0x0078c524 */
extern char g_76c6b4[];                 /* "options.ini" */
extern char g_76c7f4[];                 /* "graphics options" */
extern char g_77a174[];                 /* "screenwidth" */

__declspec(naked) void FUN_0061a160(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        sub     esp, 0x50
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_00415180
        mov     esi, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esi]
        xor     eax, eax
        mov     word ptr [edi + 0x12], ax
        mov     word ptr [edi + 0x10], 0xffff
        mov     dword ptr [edi + 0x5c], eax
        mov     dword ptr [edi + 0x60], eax
        mov     dword ptr [edi + 0x64], eax
        lea     ebx, [edi + 0x5c]
        mov     dword ptr [edi + 0x68], eax
        lea     ebp, [edi + 0x60]
        mov     dword ptr [edi + 0x6c], eax
        mov     dword ptr [edi + 0x80], eax
        mov     dword ptr [edi + 0x88], eax
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0xc], eax
        push    0x4
        lea     eax, [edi + 0x14]
        push    eax
        mov     ecx, esi
        mov     dword ptr [edi], offset g_0078c524
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x30]
        push    0x4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [edi + 0x34]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x38]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x4c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x54]
        push    0x4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x58]
        push    0x4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    esi
        call    FUN_00412a00
        lea     eax, [edi + 0x64]
        push    eax
        push    esi
        call    FUN_00412a00
        lea     eax, [edi + 0x68]
        push    eax
        push    esi
        call    FUN_00412a00
        push    ebx
        push    esi
        call    FUN_00412a00
        lea     eax, [edi + 0x6c]
        push    eax
        push    esi
        call    FUN_00412a00
        mov     eax, dword ptr [esi]
        add     esp, 0x28
        push    0x4
        lea     ebx, [edi + 0x70]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x74]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x78]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     ebp, [edi + 0x7c]
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     dword ptr [ebx], 0x0
        jnz     L_61a31e
        mov     dword ptr [ebx], 0x13ec
        mov     dword ptr [edi + 0x54], 0x21
        mov     dword ptr [edi + 0x58], 0x21
        mov     dword ptr [ebp], 0x1
    L_61a31e:
        lea     eax, [edi + 0x80]
        push    eax
        push    esi
        call    FUN_00412a00
        mov     eax, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     ecx, [edi + 0x84]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        lea     eax, [edi + 0x88]
        push    eax
        push    esi
        call    FUN_00412a00
        add     esp, 0x8
        lea     ebx, [edi + 0x8c]
        mov     ebp, 0x200
    L_61a359:
        mov     edx, dword ptr [esi]
        push    0x4
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        add     ebx, 0x4
        dec     ebp
        jnz     L_61a359
        push    0x1
        push    0x0
        push    offset g_76c6b4
        lea     ecx, [esp + 0x1c]
        call    FUN_0040dca0
        push    offset g_76c7f4
        lea     ecx, [esp + 0x14]
        call    FUN_0040ecc0
        test    eax, eax
        jz      L_61a3fc
        push    0x0
        lea     ecx, [esp + 0x68]
        push    ecx
        push    offset g_77a174
        mov     ecx, eax
        mov     dword ptr [esp + 0x70], 0x320
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x64]
        cmp     eax, 0x400
        jg      L_61a3de
        jz      L_61a3d5
        cmp     eax, 0x280
        jz      L_61a3cc
        cmp     eax, 0x320
        jnz     L_61a3fc
        mov     dword ptr [edi + 0x30], 0x1
        jmp     L_61a3fc
    L_61a3cc:
        mov     dword ptr [edi + 0x30], 0x0
        jmp     L_61a3fc
    L_61a3d5:
        mov     dword ptr [edi + 0x30], 0x2
        jmp     L_61a3fc
    L_61a3de:
        cmp     eax, 0x500
        jz      L_61a3f5
        cmp     eax, 0x640
        jnz     L_61a3fc
        mov     dword ptr [edi + 0x30], 0x4
        jmp     L_61a3fc
    L_61a3f5:
        mov     dword ptr [edi + 0x30], 0x3
    L_61a3fc:
        lea     ecx, [esp + 0x10]
        call    FUN_0040de20
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x4
    }
}
