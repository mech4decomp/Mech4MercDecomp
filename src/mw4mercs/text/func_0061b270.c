/*
 * FUN_0061b270 (873 B) — __thiscall: animation/motion update. If the
 * "active" flag (this+0x2d) is set and the elapsed time exceeds the stored
 * interval, it advances a frame counter, walks an array of 0xff sub-objects
 * (this+0x48, stride 0x58), and for each active entry reads obfuscated
 * global state (XOR 0x85739531), builds animation data, and dispatches a
 * series of virtual calls on this+0x30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern float g_0078c634;
extern void FUN_00707e70(void);
extern void FUN_00767550(void);
extern void FUN_00621650(void);
extern void FUN_00624420(void);
extern void FUN_00416bc0(void);
extern void FUN_00416cc0(void);
extern void FUN_004e7bf0(void);
extern void FUN_004e27f0(void);
extern void FUN_0041ee20(void);
extern void FUN_0041ec50(void);
extern void FUN_0041eae0(void);
extern void FUN_0041ea10(void);
extern void FUN_00416c60(void);

__declspec(naked) void FUN_0061b270(void)
{
    __asm {
        sub     esp, 0x58
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+0x2d]
        test    al, al
        jz      L5d4
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi+0x10]
        fld     dword ptr [esi+0x18]
        fcompp
        fnstsw  ax
        __emit  0xF6                 /* test ah,imm8 not encodable in MSVC6 */
        __emit  0xC4
        __emit  0x41
        jz      L5d4
        push    ebx
        push    ebp
        push    edi
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi+0x10]
        mov     edi, dword ptr [esi+0x24]
        mov     edx, dword ptr [g_007dab40]
        inc     edi
        mov     eax, edi
        mov     dword ptr [esi+0x20], eax
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     eax, dword ptr [ecx+0x20]
        xor     eax, 0x85739531
        xor     ecx, ecx
        lea     edx, [esi+0x5c]
        mov     dword ptr [esi+0x24], edi
        mov     dword ptr [esp+0x18], eax
        mov     dword ptr [esp+0x14], ecx
        mov     dword ptr [esp+0x10], edx
        lea     edi, [esi+0x48]
L2df:
        mov     eax, dword ptr [edi-0x10]
        mov     edx, 1
        cmp     eax, edx
        jnz     L5ad
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax+0xc]
        xor     eax, 0x85739531
        mov     ebx, dword ptr [ecx+eax+0x3584]
        mov     ecx, dword ptr [ebx+0x170]
        mov     eax, dword ptr [ecx+0xe0]
        mov     ebp, dword ptr [eax+0x14]
        mov     eax, dword ptr [ecx+0xd8]
        mov     ecx, dword ptr [ecx+0x4]
        cmp     ebp, edx
        setnz   dl
        add     eax, 0x80
        mov     byte ptr [edi+0x46], dl
        mov     edx, dword ptr [eax+0xc]
        mov     dword ptr [edi-0x8], edx
        mov     edx, dword ptr [eax+0x1c]
        mov     eax, dword ptr [eax+0x2c]
        mov     dword ptr [edi], eax
        cmp     dword ptr [ecx], 0x429
        mov     dword ptr [edi-0x4], edx
        jnz     L387
        mov     eax, dword ptr [ebx+0x170]
        mov     edx, dword ptr [eax+0x7b8]
        mov     eax, dword ptr [eax+0x2c0]
        mov     ecx, dword ptr [eax+edx*4]
        mov     eax, dword ptr [ecx+0xd8]
        fld     dword ptr [eax+0x88]
        add     eax, 0x80
        fstp    dword ptr [esp+0x30]
        fld     dword ptr [eax+0x18]
        lea     edx, [esp+0x30]
        fstp    dword ptr [esp+0x34]
        fld     dword ptr [eax+0x28]
        fstp    dword ptr [esp+0x38]
        jmp     L3b4
L387:
        mov     ecx, dword ptr [ebx+0x170]
        mov     eax, dword ptr [ecx+0xd8]
        fld     dword ptr [eax+0x88]
        add     eax, 0x80
        fstp    dword ptr [esp+0x3c]
        fld     dword ptr [eax+0x18]
        lea     edx, [esp+0x3c]
        fstp    dword ptr [esp+0x40]
        fld     dword ptr [eax+0x28]
        fstp    dword ptr [esp+0x44]
L3b4:
        push    edx
        lea     ecx, [esp+0x4c]
        call    FUN_00767550
        mov     ebx, dword ptr [ebx+0x170]
        mov     ecx, dword ptr [esp+0x18]
        mov     ebp, dword ptr [ecx+0x225c]
        mov     eax, dword ptr [esp+0x48]
        mov     dword ptr [esp+0x1c], ebx
        push    0x2b
        add     ebx, 0x14
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [edi+0x4], eax
        call    FUN_00621650
        test    eax, eax
        jz      L3f6
        mov     ecx, eax
        call    FUN_00624420
        mov     dword ptr [edi+0x8], eax
        jmp     L3fd
L3f6:
        mov     dword ptr [edi+0x8], 0
L3fd:
        push    2
        push    ebx
        mov     ecx, ebp
        call    FUN_00621650
        test    eax, eax
        jz      L417
        mov     ecx, eax
        call    FUN_00624420
        mov     dword ptr [edi+0xc], eax
        jmp     L41e
L417:
        mov     dword ptr [edi+0xc], 0
L41e:
        push    8
        push    ebx
        mov     ecx, ebp
        call    FUN_00621650
        test    eax, eax
        lea     ebx, [edi+0x10]
        jz      L43a
        mov     ecx, eax
        call    FUN_00624420
        mov     dword ptr [ebx], eax
        jmp     L440
L43a:
        mov     dword ptr [ebx], 0
L440:
        mov     eax, dword ptr [esp+0x1c]
        mov     edx, dword ptr [eax+0x10]
        shr     edx, 0x13
        test    dl, 1
        jz      L45b
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [ecx], 0x3f800000
        jmp     L465
L45b:
        mov     edx, dword ptr [esp+0x10]
        mov     dword ptr [edx], 0
L465:
        add     eax, 0x370
        push    eax
        lea     ecx, [esp+0x58]
        call    FUN_00416bc0
        lea     ecx, [esp+0x54]
        mov     dword ptr [esp+0x54], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        jz      L4a6
        lea     ebp, [edi+0x18]
L48c:
        mov     ecx, eax
        call    FUN_004e7bf0
        fstp    dword ptr [ebp]
        lea     ecx, [esp+0x54]
        add     ebp, 4
        call    FUN_00416cc0
        test    eax, eax
        jnz     L48c
L4a6:
        mov     ebp, dword ptr [g_007dab40]
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x28]
        push    ecx
        mov     ecx, dword ptr [g_007dab44]
        lea     edx, [esp+0x30]
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, ebp
        mov     ecx, dword ptr [edx+0x1c]
        lea     eax, [esp+0x38]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        mov     eax, dword ptr [esp+0x20]
        mov     ecx, dword ptr [esp+0x24]
        push    0xc
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi+0x30]
        lea     eax, [edi-0x8]
        push    eax
        call    FUN_0041ee20
        mov     edx, dword ptr [esp+0x28]
        mov     eax, dword ptr [esp+0x2c]
        mov     ecx, dword ptr [esi+0x30]
        push    0xc
        push    edx
        push    eax
        push    edi
        call    FUN_0041ee20
        fld     dword ptr [g_0078c634]
        mov     ecx, dword ptr [g_0078c634]
        fchs
        push    8
        push    ecx
        push    ecx
        mov     ecx, dword ptr [esi+0x30]
        fstp    dword ptr [esp]
        lea     eax, [edi+0x4]
        push    eax
        call    FUN_0041ee20
        mov     ecx, dword ptr [esi+0x30]
        push    0x20
        lea     eax, [edi+0x8]
        push    eax
        call    FUN_0041ec50
        mov     ecx, dword ptr [esi+0x30]
        push    0x20
        lea     eax, [edi+0xc]
        push    eax
        call    FUN_0041ec50
        mov     ecx, dword ptr [esi+0x30]
        push    0x20
        push    ebx
        call    FUN_0041ec50
        mov     ecx, dword ptr [esi+0x30]
        lea     ebp, [edi+0x44]
        push    ebp
        call    FUN_0041eae0
        mov     ecx, dword ptr [esi+0x30]
        lea     ebx, [edi+0x45]
        push    ebx
        call    FUN_0041eae0
        mov     ecx, dword ptr [esi+0x30]
        lea     eax, [edi+0x46]
        push    eax
        call    FUN_0041eae0
        mov     byte ptr [ebp], 0
        mov     byte ptr [ebx], 0
        lea     ebx, [edi+0x14]
        mov     ebp, 0xc
L580:
        mov     ecx, dword ptr [esi+0x30]
        push    4
        push    0x3f800000
        push    0
        push    ebx
        call    FUN_0041ee20
        add     ebx, 4
        dec     ebp
        jnz     L580
        mov     ecx, dword ptr [esi+0x30]
        call    FUN_0041ea10
        lea     ecx, [esp+0x54]
        call    FUN_00416c60
        mov     ecx, dword ptr [esp+0x14]
L5ad:
        mov     ebp, dword ptr [esp+0x10]
        add     ecx, 0x2038
        add     ebp, 0x58
        add     edi, 0x58
        cmp     ecx, 0x2017c8
        mov     dword ptr [esp+0x10], ebp
        mov     dword ptr [esp+0x14], ecx
        jl      L2df
        pop     edi
        pop     ebp
        pop     ebx
L5d4:
        pop     esi
        add     esp, 0x58
        ret
    }
}
