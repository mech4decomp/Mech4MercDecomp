/*
 * FUN_004f0000 (692 B) — Adept::CameraComponent constructor (__thiscall,
 * RET 0x10, 4 params). Sets vtable 0x774d14, calls FUN_004f0f90, then
 * performs a series of virtual reads (via g_007dab44/g_007dab40 XOR
 * obfuscation), FPU math, and a component-list build loop. Ends by
 * dispatching on a byte flag to either FUN_004e17b0 or FUN_004c3d50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004effa0(void);
extern void __cdecl FUN_004f0f90(void);
extern void __cdecl FUN_004af200(void);
extern void __cdecl FUN_004b9970(void);
extern void __cdecl FUN_004f02c0(void);
extern void __cdecl FUN_004c40e0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c3d80(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_004e17b0(void);

extern int   g_007dab44;   /* DAT_007dab44 */
extern int   g_007dab40;   /* DAT_007dab40 */
extern float g_0076e22c;   /* _DAT_0076e22c */
extern int   g_774d14;     /* vtable @ 0x774d14 */
extern int   g_774d10;     /* vtable @ 0x774d10 */

__declspec(naked) void FUN_004f0000(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        call    FUN_004effa0
        mov     esi, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x34]
        push    eax
        mov     eax, dword ptr [esp + 0x40]
        push    eax
        push    esi
        push    ecx
        mov     ecx, edi
        call    FUN_004f0f90
        mov     ebp, dword ptr [edi + 0x24]
        mov     ebx, dword ptr [ebp + 0x2c4]
        push    esi
        mov     dword ptr [edi], offset g_774d14
        mov     dword ptr [esp + 0x3c], ebx
        call    FUN_004af200
        add     esp, 0x4
        push    eax
        push    esi
        mov     ecx, ebx
        call    FUN_004b9970
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x20]
        xor     eax, 0x85739531
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi]
        mov     ebx, eax
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x24]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    FUN_004f02c0
        mov     eax, dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x18]
        push    ecx
        fdiv    dword ptr [esp + 0x20]
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x38], eax
        fmul    dword ptr [g_0076e22c]
        fstp    dword ptr [esp]
        fld     dword ptr [ebx + 0xf8]
        push    ecx
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebx + 0xf4]
        push    ecx
        fstp    dword ptr [esp]
        mov     ecx, ebp
        call    FUN_004c40e0
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax + 0x20]
        xor     eax, 0x85739531
        add     eax, 0x1cc
        mov     dword ptr [esp + 0x28], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x2c], ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x24], offset g_774d10
        xor     ebx, ebx
        call    FUN_0040c0e0
        test    eax, eax
        jz      L176
        mov     edx, dword ptr [esp + 0x38]
        lea     ecx, [edx + 0x18]
        jmp     L15c
L158:
        mov     ecx, dword ptr [esp + 0x34]
L15c:
        mov     eax, dword ptr [eax + 0x10]
        mov     dword ptr [ecx], eax
        add     ecx, 0x4
        mov     dword ptr [esp + 0x34], ecx
        lea     ecx, [esp + 0x24]
        inc     ebx
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L158
L176:
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x28]
        push    0x1
        mov     dword ptr [ecx + ebx*4 + 0x18], 0x0
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ebx, [edi + 0x29]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     byte ptr [ebx], 0x0
        jz      L25e
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax + 0x20]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x169]
        test    cl, cl
        mov     ecx, dword ptr [eax + 0x20]
        mov     byte ptr [ebp + 0x26a], 0x1
        jz      L21d
        xor     ecx, 0x85739531
        add     ecx, 0x1dc
        call    FUN_0041fd80
        test    eax, eax
        jz      L265
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        add     ecx, 0x1dc
        call    FUN_0041fd80
        push    eax
        mov     ecx, ebp
        call    FUN_004c3d80
        jmp     L265
L21d:
        xor     ecx, 0x85739531
        add     ecx, 0x1d4
        call    FUN_0041fd80
        test    eax, eax
        jz      L265
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        add     ecx, 0x1d4
        call    FUN_0041fd80
        push    eax
        mov     ecx, ebp
        call    FUN_004c3d80
        jmp     L265
L25e:
        mov     byte ptr [ebp + 0x26a], 0x0
L265:
        mov     al, byte ptr [edi + 0x28]
        test    al, al
        mov     edx, dword ptr [esp + 0x3c]
        mov     esi, dword ptr [edx + 0x50]
        jz      L292
        mov     eax, dword ptr [esi + 0x48]
        push    eax
        mov     ecx, ebp
        call    FUN_004c3d50
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x10
L292:
        push    edi
        mov     ecx, esi
        call    FUN_004e17b0
        mov     eax, edi
        pop     edi
        mov     byte ptr [ebp + 0x268], 0x0
        pop     esi
        mov     byte ptr [ebp + 0x269], 0x0
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x10
    }
}
