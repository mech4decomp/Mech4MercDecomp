/*
 * FUN_0067D5E0 (1619 B) — __thiscall (ECX = this), RET (no stack args),
 * returns bool in AL.
 *
 * Iterates over a linked list of objects (via FUN_0041fd80), processes each
 * object's terrain/heightmap data, updates the DAT_007dab44/DAT_007dab40
 * XOR-obfuscated global structure, and returns whether any object was
 * processed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041ef30(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0067c130(void);
extern void __cdecl FUN_00639780(void);
extern void __cdecl FUN_0041ea10(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004ce190(void);

extern int    DAT_007f2290;   /* 0x007F2290 */
extern int    DAT_007dab44;   /* 0x007DAB44 */
extern int    DAT_007dab40;   /* 0x007DAB40 */
extern int    DAT_007b8d88;   /* 0x007B8D88 */
extern int    DAT_007b8d8c;   /* 0x007B8D8C */
extern int    DAT_007b8d90;   /* 0x007B8D90 */
extern float  DAT_0077d140;   /* 0x0077D140 */
extern float  DAT_0078096c;   /* 0x0078096C */
extern int    DAT_007db094;   /* 0x007DB094 */
extern int    DAT_007db098;   /* 0x007DB098 */
extern double DAT_0077b648;   /* 0x0077B648 */
extern int    DAT_007b3cc8;   /* 0x007B3CC8 */

__declspec(naked) char __fastcall FUN_0067d5e0(void)
{
    __asm {
        sub     esp, 0xdc
        mov     eax, dword ptr [ecx]
        push    ebx
        push    ebp
        push    esi
        add     eax, 0x94
        push    edi
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x44], ecx
        push    0x400
        lea     ecx, [esp + 0x58]
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [esp + 0x30], 0x78714c
        call    FUN_0041ee70
        mov     byte ptr [esp + 0x17], 0x0
l_d61a:
        mov     ebp, dword ptr [esp + 0x34]
        test    ebp, ebp
        jz      l_db40
        mov     esi, dword ptr [ebp]
        test    esi, esi
        jz      l_db40
        lea     ebp, [esi + 0x14]
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      l_db21
        mov     ecx, dword ptr [DAT_007f2290]
        push    0x0
        push    0x400
        push    ecx
        lea     ecx, [esp + 0xb8]
        call    FUN_0041ef30
        mov     ecx, ebp
        mov     dword ptr [esp + 0x10], 0x0
        call    FUN_0041fd80
        mov     dl, byte ptr [eax + 0xdc]
        neg     dl
        lea     edi, [esi + 0x1c]
        mov     ecx, edi
        sbb     edx, edx
        and     edx, 0xfffffffc
        add     edx, 0x54
        mov     dword ptr [esp + 0x10], edx
        call    FUN_0041fd80
        test    eax, eax
        jnz     l_d7ac
        add     dword ptr [esp + 0x10], 0x3
        push    0x7b8d88
        lea     ecx, [esp + 0x98]
        call    FUN_0040c5d0
        push    0x7b8d88
        lea     ecx, [esp + 0x4c]
        call    FUN_0040c5d0
        mov     edi, dword ptr [DAT_007dab40]
        lea     eax, [esp + 0x48]
        push    eax
        lea     ecx, [esp + 0x98]
        push    ecx
        mov     ecx, dword ptr [DAT_007dab44]
        lea     edx, [esp + 0x58]
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, edi
        mov     ecx, dword ptr [edx + 0x1c]
        lea     eax, [esp + 0xa8]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0xa0], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0xa4], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0xa8], eax
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [eax + 0x4], edx
        mov     ecx, dword ptr [esp + 0x5c]
        sub     esp, 0xc
        mov     dword ptr [eax + 0x8], ecx
        lea     edx, [esp + 0xac]
        mov     ecx, esp
        push    edx
        lea     edi, [esi + 0x24]
        call    FUN_00551870
        sub     esp, 0xc
        mov     ecx, esp
        push    edi
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esp + 0xd0]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        lea     ecx, [esp + 0x104]
        push    ecx
        call    FUN_0067c130
        fld     dword ptr [esi + 0x28]
        mov     edx, dword ptr [eax]
        fcomp   dword ptr [DAT_0077d140]
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [edi], edx
        mov     edx, dword ptr [eax + 0x8]
        fnstsw  ax
        add     esp, 0x34
        mov     dword ptr [edi + 0x4], ecx
        test    ah, 0x1
        mov     dword ptr [edi + 0x8], edx
        jz      l_d8f9
        mov     dword ptr [esi + 0x28], 0xc47a0000
        jmp     l_d9e1
l_d7ac:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ebx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, ebx
        mov     ebx, dword ptr [ecx + 0x1c]
        mov     ecx, edi
        xor     ebx, 0x85739531
        call    FUN_0041fd80
        cmp     eax, ebx
        jnz     l_d923
        cmp     byte ptr [esi + 0xb9], 0x1
        jnz     l_d919
        mov     edx, dword ptr [DAT_007b8d88]
        mov     eax, dword ptr [DAT_007b8d8c]
        mov     ecx, dword ptr [DAT_007b8d90]
        mov     ebx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x40], ecx
        mov     dword ptr [esp + 0x28], ecx
        lea     edx, [esp + 0x20]
        push    edx
        lea     eax, [esp + 0x3c]
        push    eax
        mov     eax, dword ptr [DAT_007dab44]
        lea     ecx, [esp + 0x30]
        push    ecx
        add     ebx, 0x3
        mov     dword ptr [esp + 0x1c], ebx
        mov     ecx, dword ptr [eax]
        xor     ecx, edi
        mov     ecx, dword ptr [ecx + 0x1c]
        lea     edx, [esp + 0x4c]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x7c], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x80], ecx
        mov     edx, dword ptr [eax + 0x2c]
        mov     ecx, dword ptr [esp + 0x20]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [esp + 0x90], edx
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [eax + 0x4], edx
        mov     ecx, dword ptr [esp + 0x34]
        sub     esp, 0xc
        mov     dword ptr [eax + 0x8], ecx
        lea     edx, [esp + 0x50]
        mov     ecx, esp
        push    edx
        lea     edi, [esi + 0x24]
        call    FUN_00551870
        sub     esp, 0xc
        mov     ecx, esp
        push    edi
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esp + 0xac]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        lea     ecx, [esp + 0x110]
        push    ecx
        call    FUN_0067c130
        fld     dword ptr [esi + 0x28]
        mov     edx, dword ptr [eax]
        fcomp   dword ptr [DAT_0077d140]
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [edi], edx
        mov     edx, dword ptr [eax + 0x8]
        fnstsw  ax
        add     esp, 0x34
        mov     dword ptr [edi + 0x4], ecx
        test    ah, 0x1
        mov     dword ptr [edi + 0x8], edx
        jz      l_d8f9
        mov     dword ptr [esi + 0x28], 0xc47a0000
        jmp     l_d9e1
l_d8f9:
        fld     dword ptr [esi + 0x28]
        fcomp   dword ptr [DAT_0078096c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d9e1
        mov     dword ptr [esi + 0x28], 0x447a0000
        jmp     l_d9e1
l_d919:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        jmp     l_d9dd
l_d923:
        mov     eax, dword ptr [DAT_007db098]
        mov     bl, byte ptr [eax + 0x28]
        mov     ecx, edi
        call    FUN_0041fd80
        cmp     byte ptr [eax + 0x14], bl
        jnz     l_d9a8
        mov     ebx, dword ptr [esp + 0x10]
        inc     ebx
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ebp, [esi + 0x24]
        push    ebp
        lea     ecx, [esp + 0x90]
        call    FUN_0041c7d0
        mov     ecx, dword ptr [esp + 0x88]
        mov     edx, dword ptr [esp + 0x8c]
        mov     eax, dword ptr [esp + 0x90]
        mov     dword ptr [ebp], ecx
        mov     ecx, edi
        mov     dword ptr [ebp + 0x4], edx
        mov     dword ptr [ebp + 0x8], eax
        call    FUN_0041fcb0
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x1c]
        xor     eax, 0x85739531
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        jmp     l_d9e1
l_d9a8:
        mov     ecx, dword ptr [DAT_007db094]
        mov     bl, byte ptr [ecx + 0x28]
        mov     ecx, edi
        call    FUN_0041fd80
        cmp     byte ptr [eax + 0x14], bl
        jnz     l_d9e1
        mov     edx, dword ptr [DAT_007db094]
        mov     bl, byte ptr [edx + 0x28]
        mov     ecx, edi
        call    FUN_0041fd80
        cmp     byte ptr [eax + 0x14], bl
        jnz     l_dae9
        mov     eax, dword ptr [esp + 0x10]
        add     eax, 0x2
l_d9dd:
        mov     dword ptr [esp + 0x10], eax
l_d9e1:
        mov     ecx, dword ptr [esp + 0x10]
        lea     eax, [esp + 0xac]
        push    eax
        mov     eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        push    esi
        push    ecx
        push    edx
        call    FUN_00639780
        add     esp, 0x10
        lea     ecx, [esp + 0xac]
        call    FUN_0041ea10
        mov     edx, dword ptr [esp + 0xac]
        push    0x0
        lea     ecx, [esp + 0xb0]
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0xc4]
        sub     eax, dword ptr [esp + 0xbc]
        mov     dword ptr [esp + 0x1c], eax
        mov     al, byte ptr [esp + 0x17]
        test    al, al
        mov     dword ptr [esp + 0xb4], 0xffffffec
        jnz     l_dab3
        mov     ebx, dword ptr [esp + 0x44]
        mov     edi, dword ptr [ebx + 0x32d4]
        test    edi, edi
        mov     dword ptr [esp + 0x18], 0x0
        push    0x1
        jnz     l_da70
        call    FUN_00707e70
        fmul    qword ptr [DAT_0077b648]
        call    FUN_0075db4a
        jmp     l_da98
l_da70:
        call    FUN_00707e70
        fmul    qword ptr [DAT_0077b648]
        call    FUN_0075db4a
        mov     ecx, eax
        sub     ecx, edi
        cmp     ecx, 0x1f40
        mov     dword ptr [esp + 0x18], ecx
        jle     l_da98
        mov     dword ptr [esp + 0x18], 0x1f40
l_da98:
        push    0x2
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [ebx + 0x32d4], eax
        call    FUN_0041f030
        mov     byte ptr [esp + 0x17], 0x1
l_dab3:
        push    0x1
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x5c]
        call    FUN_0041f030
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x5c]
        call    FUN_0041f030
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0xc0]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x5c]
        call    FUN_0041f030
l_dae9:
        lea     ecx, [esp + 0x2c]
        call    FUN_00417ad0
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x6c]
        mov     esi, dword ptr [esp + 0x64]
        mov     eax, dword ptr [DAT_007b3cc8]
        sub     ecx, esi
        add     ecx, 0x2d
        cmp     ecx, eax
        lea     ecx, [esp + 0xac]
        jnc     l_db37
        call    FUN_0041ef60
        jmp     l_d61a
l_db21:
        lea     ecx, [esp + 0x2c]
        call    FUN_00417ad0
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        jmp     l_d61a
l_db37:
        call    FUN_0041ef60
        mov     ebp, dword ptr [esp + 0x34]
l_db40:
        mov     eax, dword ptr [esp + 0x6c]
        sub     eax, dword ptr [esp + 0x64]
        jz      l_dbfd
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [DAT_007dab40]
        xor     edi, edi
        xor     edx, eax
        xor     ebx, ebx
        mov     esi, 0x8
l_db66:
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax + ebx*0x1 + 0x353a]
        test    cl, cl
        jz      l_dbe7
        mov     eax, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        cmp     edi, ecx
        jz      l_dbe7
        push    0x0
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, dword ptr [edx + 0x14]
        push    0x58
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004ce190
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [edx]
        mov     ebp, dword ptr [esp + 0x64]
        mov     eax, dword ptr [esp + 0x6c]
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x14]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        sub     eax, ebp
        mov     ebp, dword ptr [ecx + esi*0x1 + 0x5454]
        add     ecx, 0x5454
        shl     eax, 0x3
        add     ebp, eax
        mov     dword ptr [ecx + esi*0x1], ebp
        add     dword ptr [ecx + 0xc00], eax
        mov     ebp, dword ptr [esp + 0x34]
l_dbe7:
        add     esi, 0x4
        inc     edi
        add     ebx, 0x2038
        cmp     esi, 0x404
        jl      l_db66
l_dbfd:
        test    ebp, ebp
        jz      l_dc1d
        cmp     dword ptr [ebp], 0x0
        jz      l_dc1d
        lea     ecx, [esp + 0x54]
        call    FUN_0041ef60
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xdc
        ret
l_dc1d:
        lea     ecx, [esp + 0x54]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xdc
        ret
    }
}
