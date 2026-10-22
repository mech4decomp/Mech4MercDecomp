/*
 * FUN_004f8900 (545 B) — MLR/Adept application core. __thiscall.
 * Calls a virtual method on [this+0x78], sets a render-state flag,
 * conditionally packs 4 floats into a byte-mask global, then copies a
 * 4x4 matrix (from [eax+0x6c] and the 0x008bd548 constant matrix) into
 * the 0x007b9658/0x007b9668 global matrix pair.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6e0;
extern int g_007dc794;
extern int g_007daa28;
extern int g_007daa2c;
extern int g_007daa30;
extern int g_007daa34;
extern float g_00775558;
extern int g_007da85c;
extern int g_007b9668;
extern int g_007b966c;
extern int g_007b9670;
extern int g_007b9674;
extern int g_007b9658;
extern int g_007b965c;
extern int g_007b9660;
extern int g_007b9664;
extern int g_008bd548;
extern int g_008bd54c;
extern int g_008bd550;
extern int g_008bd554;

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c3d80(void);

__declspec(naked) void FUN_004f8900(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x30
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi+0x78]
        lea     ecx, [edi+0x78]
        call    dword ptr [eax+4]
        mov     ecx, dword ptr [g_007dc6e0]
        mov     edx, dword ptr [ecx+0x4c]
        mov     ecx, dword ptr [edx+0x24]
        mov     ecx, dword ptr [ecx+0x2c4]
        or      dword ptr [ecx+0x14], 0x3e0
        mov     cl, byte ptr [edi+0x169]
        test    cl, cl
        mov     dword ptr [ebp-8], eax
        jz      L_8b12
        mov     ecx, dword ptr [eax+0x5c]
        lea     edx, [eax+0x6c]
        add     eax, 0x5c
        mov     dword ptr [g_007dc794], edx
        mov     edx, dword ptr [eax+4]
        mov     dword ptr [g_007daa28], ecx
        mov     ecx, dword ptr [eax+8]
        mov     dword ptr [g_007daa2c], edx
        mov     edx, dword ptr [eax+0xc]
        push    ebx
        mov     dword ptr [ebp-0xc], eax
        mov     dword ptr [g_007daa30], ecx
        mov     dword ptr [g_007daa34], edx
        fld     dword ptr [g_00775558]
        mov     esi, dword ptr [ebp-0xc]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x10]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x10]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp-4], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x10]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x10]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-4]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-4], ecx
        fld     dword ptr [esi+4]
        mov     ecx, dword ptr [esi+4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x10]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x10]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-4]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-4], ecx
        mov     ecx, dword ptr [esi+8]
        fadd    dword ptr [esi+8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x10]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x10]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-4]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-4], ecx
        mov     eax, dword ptr [ebp-4]
        add     edi, 0x1dc
        mov     ecx, edi
        mov     dword ptr [g_007da85c], eax
        call    FUN_0041fd80
        test    eax, eax
        pop     ebx
        jz      L_8a87
        mov     ecx, dword ptr [g_007dc6e0]
        mov     edx, dword ptr [ecx+0x4c]
        mov     esi, dword ptr [edx+0x24]
        mov     ecx, edi
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    FUN_004c3d80
L_8a87:
        mov     eax, dword ptr [ebp-8]
L_8a8a:
        add     eax, 0x6c
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax+4]
        mov     dword ptr [ebp-0x30], ecx
        mov     ecx, dword ptr [eax+8]
        mov     dword ptr [ebp-0x2c], edx
        mov     edx, dword ptr [eax+0xc]
        mov     eax, dword ptr [g_008bd548]
        mov     dword ptr [ebp-0x28], ecx
        mov     ecx, dword ptr [g_008bd54c]
        mov     dword ptr [ebp-0x24], edx
        mov     edx, dword ptr [g_008bd550]
        mov     dword ptr [ebp-0x20], eax
        mov     eax, dword ptr [g_008bd554]
        mov     dword ptr [ebp-0x1c], ecx
        mov     ecx, dword ptr [ebp-0x20]
        mov     dword ptr [ebp-0x18], edx
        mov     edx, dword ptr [ebp-0x1c]
        mov     dword ptr [ebp-0x14], eax
        mov     eax, dword ptr [ebp-0x18]
        mov     dword ptr [g_007b9668], ecx
        mov     ecx, dword ptr [ebp-0x14]
        mov     dword ptr [g_007b966c], edx
        mov     edx, dword ptr [ebp-0x30]
        mov     dword ptr [g_007b9670], eax
        mov     eax, dword ptr [ebp-0x2c]
        mov     dword ptr [g_007b9674], ecx
        mov     ecx, dword ptr [ebp-0x28]
        mov     dword ptr [g_007b9658], edx
        mov     edx, dword ptr [ebp-0x24]
        pop     edi
        mov     dword ptr [g_007b965c], eax
        mov     dword ptr [g_007b9660], ecx
        mov     dword ptr [g_007b9664], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_8b12:
        mov     dword ptr [g_007dc794], 0
        jmp     L_8a8a
    }
}
