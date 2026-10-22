/*
 * FUN_004f8ea0 (375 B) — MLR/Adept core: virtual call on this+0x78,
 * packs 4 floats into a byte-mask global, calls FUN_0041fd80 /
 * FUN_004c3d80. __thiscall (ECX = this).
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

extern int __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c3d80(int);

__declspec(naked) void FUN_004f8ea0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
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
        mov     edx, dword ptr [ecx+0x14]
        add     eax, 0x2c
        or      edx, 0x3e0
        mov     dword ptr [ecx+0x14], edx
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [eax+4]
        mov     dword ptr [g_007daa28], edx
        mov     edx, dword ptr [eax+8]
        mov     dword ptr [ebp-8], eax
        mov     eax, dword ptr [eax+0xc]
        mov     dword ptr [g_007daa2c], ecx
        mov     dword ptr [g_007daa30], edx
        mov     dword ptr [g_007daa34], eax
        fld     dword ptr [g_00775558]
        mov     esi, dword ptr [ebp-8]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0xc]
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
        fstp    dword ptr [ebp-0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0xc]
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
        fstp    dword ptr [ebp-0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0xc]
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
        fstp    dword ptr [ebp-0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0xc]
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
        mov     ecx, dword ptr [ebp-4]
        mov     edx, dword ptr [g_007dc6e0]
        mov     eax, dword ptr [edx+0x4c]
        mov     esi, dword ptr [eax+0x24]
        mov     dword ptr [g_007da85c], ecx
        lea     ecx, [edi+0x1d4]
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    FUN_004c3d80
        xor     eax, eax
        mov     byte ptr [edi+0x169], al
        pop     edi
        pop     esi
        mov     dword ptr [g_007dc794], eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
