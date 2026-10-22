/*
 * FUN_004f8240 (478 B) — MLR/Adept application core. __thiscall.
 * Twin of FUN_004f8060 but packs floats from [esi+0x3c..0x48].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6e0;
extern int g_007daa28;
extern int g_007daa2c;
extern int g_007daa30;
extern int g_007daa34;
extern float g_00775558;
extern int g_007da85c;

extern void __cdecl FUN_00480d50(void);
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_004f8240(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        mov     eax, dword ptr [ecx+0x78]
        add     ecx, 0x78
        push    esi
        call    dword ptr [eax+4]
        mov     esi, eax
        mov     ecx, dword ptr [esi+0xa8]
        mov     edx, dword ptr [esi+0xa4]
        mov     eax, dword ptr [esi+0xa0]
        push    ecx
        push    edx
        push    eax
        push    0x1
        call    FUN_00480d50
        mov     ecx, dword ptr [esi+0xb4]
        mov     edx, dword ptr [esi+0xb0]
        mov     eax, dword ptr [esi+0xac]
        push    ecx
        push    edx
        push    eax
        push    0x2
        call    FUN_00480d50
        mov     ecx, dword ptr [esi+0xc0]
        mov     edx, dword ptr [esi+0xbc]
        mov     eax, dword ptr [esi+0xb8]
        push    ecx
        push    edx
        push    eax
        push    0x3
        call    FUN_00480d50
        mov     ecx, dword ptr [g_007dc6e0]
        mov     eax, dword ptr [ecx+0x4c]
        add     esp, 0x30
        test    eax, eax
        jz      L_8419
        mov     edx, dword ptr [eax+0x24]
        test    edx, edx
        jz      L_8419
        mov     eax, dword ptr [edx+0x2c4]
        test    eax, eax
        jz      L_83e8
        mov     ecx, dword ptr [esi+0x3c]
        lea     eax, [esi+0x3c]
        mov     dword ptr [g_007daa28], ecx
        mov     ecx, dword ptr [eax+4]
        mov     dword ptr [g_007daa2c], ecx
        mov     ecx, dword ptr [eax+8]
        mov     dword ptr [ebp-8], eax
        mov     eax, dword ptr [eax+0xc]
        push    ebx
        mov     dword ptr [g_007daa30], ecx
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
        mov     dword ptr [g_007da85c], ecx
        pop     ebx
L_83e8:
        lea     ecx, [edx+0x274]
        call    FUN_0041fd80
        test    eax, eax
        jz      L_8419
        mov     eax, dword ptr [eax+0x140]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [eax+8]
        and     edx, 0xffefffff
        or      edx, 0x80000
        or      ecx, 0x180000
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+8], ecx
L_8419:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
