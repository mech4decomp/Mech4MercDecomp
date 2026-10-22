/*
 * FUN_00613e90 (229 B) — __cdecl: parses a string from param_1+0x18 via
 * sscanf (IAT), builds/reads a stream object, calls a virtual method
 * (vtable+0x24) on param_2 twice, then frees two refcounted buffers and
 * destroys the stream object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2dc;                 /* IAT: sscanf */
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_00613e90(void)
{
    __asm {
        sub     esp, 0x250
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x25c]
        mov     edx, dword ptr [edi+0x18]
        lea     eax, [esp+0xc]
        push    eax
        lea     ecx, [esp+0x5c]
        push    ecx
        push    0x76b77c
        push    edx
        mov     dword ptr [esp+0x1c], 0x0
        call    dword ptr [g_0076b2dc]
        add     esp, 0x10
        push    0x0
        lea     eax, [esp+0x5c]
        push    eax
        lea     ecx, [esp+0x1c]
        call    FUN_004d2000
        lea     ecx, [esp+0x58]
        push    ecx
        lea     ecx, [esp+0xc]
        call    FUN_00412570
        mov     esi, dword ptr [esp+0x260]
        lea     edx, [esp+0x8]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     ecx, [esp+0x58]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [edi+0x14]
        push    edx
        lea     ecx, [esp+0x14]
        call    FUN_00412570
        lea     eax, [esp+0x10]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     eax, [esp+0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        pop     edi
        pop     esi
        jz      lbl_613f4a
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_613f4a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_613f4a:
        __emit 0x8B   /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (encodes 8B 04 24); ref needs 8B 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        jz      lbl_613f65
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_613f65
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_613f65:
        lea     ecx, [esp+0xc]
        call    FUN_004d21c0
        add     esp, 0x250
        ret
    }
}
