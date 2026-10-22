/*
 * FUN_00618120 (866 B) — __thiscall animation/motion setup routine (variant of
 * FUN_00617d10). Builds temporary objects, allocates a node, iterates a linked
 * list of sub-objects, and wires the node into the animation list.
 * Returns via RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_006140c0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00618100(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_00618080(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);

extern int g_007db090;
extern int g_007dab44;
extern int g_007dab40;
extern int g_007f25a8;
extern void *g_0076b420;

__declspec(naked) void FUN_00618120(void)
{
    __asm {
        sub     esp, 0x244
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x250]
        push    edi
        mov     edi, ecx
        push    ecx
        mov     ecx, esp
        push    esi
        call    FUN_00412570
        call    FUN_005178d0
        mov     ecx, dword ptr [eax+0x84]
        call    FUN_006140c0
        mov     cx, word ptr [eax+0x10]
        mov     dx, word ptr [eax+0x12]
        push    0x1
        lea     eax, [esp+0x10]
        mov     word ptr [esp+0x10], cx
        push    eax
        lea     ecx, [esp+0x48]
        mov     word ptr [esp+0x16], dx
        call    FUN_004d1f80
        mov     eax, dword ptr [edi+0x34]
        test    eax, eax
        jz      L_8180
        mov     ecx, dword ptr [eax+0x3c]
        lea     edx, [ecx+0x1]
        mov     dword ptr [eax+0x3c], edx
        push    ecx
        jmp     L_818a
    L_8180:
        mov     edx, dword ptr [edi+0x54]
        lea     ecx, [edi+0x54]
        call    dword ptr [edx+0x10]
        push    eax
    L_818a:
        push    esi
        lea     eax, [esp+0x158]
        push    0x77a504
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        push    0x0
        lea     ecx, [edi+0x74]
        call    FUN_0041fd80
        push    eax
        lea     ecx, [esp+0x158]
        push    ecx
        lea     ecx, [esp+0x90]
        call    FUN_004d2110
        push    0x0
        push    0x0
        lea     ecx, [esp+0x8c]
        call    FUN_004d2680
        mov     edx, dword ptr [esp+0x40]
        push    0x0
        lea     ecx, [esp+0x44]
        call    dword ptr [edx+0xc]
        push    0x0
        lea     eax, [esp+0x44]
        push    eax
        lea     ecx, [esp+0x8c]
        mov     dword ptr [esp+0x50], 0xffffffec
        call    FUN_004d2680
        lea     ecx, [esp+0x150]
        push    ecx
        lea     ecx, [esp+0x18]
        call    FUN_00412570
        mov     esi, dword ptr [esp+0x54]
        lea     ecx, [esp+0x10c]
        call    FUN_004d1f10
        add     esi, 0x54
        lea     edx, [esp+0x10c]
        push    esi
        push    edx
        call    FUN_004da8d0
        mov     eax, dword ptr [esp+0x128]
        mov     ecx, dword ptr [esp+0x260]
        mov     ebx, eax
        mov     eax, dword ptr [eax+0x78]
        push    0x34
        mov     dword ptr [ecx], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0xc
        test    esi, esi
        jz      L_8285
        mov     edx, dword ptr [esp+0x25c]
        mov     eax, dword ptr [ebx+0x634]
        push    edx
        push    0x1
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        lea     ecx, [esp+0x94]
        call    FUN_00618100
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00523e60
        mov     ecx, esi
        call    FUN_00618080
        mov     esi, eax
        jmp     L_8287
    L_8285:
        xor     esi, esi
    L_8287:
        mov     eax, dword ptr [esi+0x10]
        test    eax, eax
        mov     dword ptr [esp+0xc], eax
        jz      L_8295
        inc     byte ptr [eax-0x1]
    L_8295:
        lea     edx, [esp+0xc]
        push    edx
        push    esi
        lea     ecx, [edi+0x54]
        call    FUN_00416a90
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jz      L_82be
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_82be
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_82be:
        mov     cx, word ptr [esi+0x1a]
        mov     ax, word ptr [esi+0x18]
        push    0x1
        lea     edx, [esp+0x10]
        mov     word ptr [esp+0x12], cx
        push    edx
        lea     ecx, [esp+0xd0]
        mov     word ptr [esp+0x14], ax
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_007db090]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp+0x10], cl
        mov     dx, word ptr [eax+0x2]
        push    0x1
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0xd0]
        push    ecx
        mov     word ptr [esp+0x1e], dx
        call    FUN_004d9910
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x44]
        add     eax, 0x44
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx+0x24]
        mov     ecx, dword ptr [edx+0x2c]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [eax]
        xor     edx, 0x85739531
        mov     dword ptr [esi+0x27c], ecx
        mov     ecx, dword ptr [edx+0x24]
        mov     edx, dword ptr [ecx+0x2c]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax+0x24]
        add     esp, 0xc
        mov     dword ptr [esi+0x278], edx
        mov     dl, byte ptr [ecx+0x30]
        lea     eax, [esp+0x150]
        push    eax
        lea     ecx, [esi+0x2c]
        mov     byte ptr [esi+0x274], dl
        call    FUN_00412780
        mov     ebx, dword ptr [esi+0x34c]
        test    ebx, ebx
        jz      L_83b9
    L_837b:
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx+0x4]
        jz      L_83b9
        mov     eax, dword ptr [g_007f25a8]
        mov     ecx, dword ptr [edi+0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        /* __emit: MSVC6 miscomputes backward JZ rel8 by -4 (call-reloc between branch and target) */
        __emit 0x74
        __emit 0xE1
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx+0xa4]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax+0x104]
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
        /* __emit: MSVC6 miscomputes backward JMP rel8 by -4 (call-reloc between branch and target) */
        __emit 0xEB
        __emit 0xC2
    L_83b9:
        push    0x0
        lea     ecx, [esp+0x1c]
        call    FUN_0041ee70
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        mov     edi, dword ptr [esi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x44]
        xor     ecx, 0x85739531
        add     ecx, 0x74
        call    FUN_0041fd80
        push    eax
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edi+0xc]
        mov     edx, dword ptr [esp+0x18]
        push    0x0
        lea     ecx, [esp+0x1c]
        call    dword ptr [edx+0xc]
        push    0x0
        lea     eax, [esp+0x1c]
        push    eax
        lea     ecx, [esp+0xd0]
        mov     dword ptr [esp+0x28], 0xffffffec
        call    FUN_004d2680
        test    esi, esi
        jz      L_8425
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
    L_8425:
        lea     ecx, [esp+0x18]
        call    FUN_0041ef60
        lea     ecx, [esp+0xc8]
        call    FUN_004d21c0
        lea     ecx, [esp+0x10c]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        jz      L_8461
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_8461
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_8461:
        lea     ecx, [esp+0x84]
        call    FUN_004d21c0
        lea     ecx, [esp+0x40]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x244
        ret     0xc
    }
}
