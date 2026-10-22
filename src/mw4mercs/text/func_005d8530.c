/*
 * FUN_005d8530 (742 B) — Rail graph query: build a candidate list of
 * nodes near a point, filter by radius, and return the closest node(s)
 * via two out-params. Uses FPU distance checks and several array helpers.
 *
 * __fastcall (ECX = this), five stack params, RET 0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005d9f90(void);
extern void __cdecl FUN_005da550(void);
extern void __cdecl FUN_005da020(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005d9fb0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_005da4e0(void);
extern void __cdecl FUN_005da270(void);
extern void __cdecl FUN_005d8820(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_005da050(void);
extern int DAT_007f2464;

__declspec(naked) void __fastcall FUN_005d8530(void *param)
{
    __asm {
        sub     esp, 0x40
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x13]
        mov     edi, ecx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005d9f90
        mov     ecx, dword ptr [edi + 0x1c]
        mov     esi, dword ptr [edi + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        sub     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, eax
        sar     esi, 0x2
        sar     ecx, 0x2
        cmp     ecx, esi
        jnc     L85C6
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebp, ecx
        sub     ebp, eax
        sar     ebp, 0x2
        test    eax, eax
        jz      L859A
        push    ecx
        push    eax
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_005da550
        mov     edx, dword ptr [esp + 0x1c]
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x14]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_005da020
        jmp     L85B4
L859A:
        test    esi, esi
        jz      L85B2
        lea     eax, [esi*4 + 0x0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebx, eax
        jmp     L85B4
L85B2:
        xor     ebx, ebx
L85B4:
        lea     ecx, [ebx + ebp*0x4]
        lea     edx, [ebx + esi*0x4]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
L85C6:
        mov     ecx, dword ptr [edi + 0x20]
        mov     esi, dword ptr [edi + 0x1c]
        mov     ebp, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esp + 0x64]
        sub     ecx, esi
        test    ecx, 0xfffffffc
        mov     dword ptr [ebp], 0x0
        mov     dword ptr [eax], 0x0
        jnz     L85FE
        lea     ecx, [esp + 0x14]
        call    FUN_005d9fb0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     0x14
L85FE:
        mov     edx, dword ptr [edi + 0x20]
        mov     ebx, dword ptr [edi + 0x1c]
        sub     edx, ebx
        and     edx, 0xfffffffc
        cmp     edx, 0x4
        jnz     L862C
        mov     edi, ebx
        mov     ecx, dword ptr [edi]
        mov     edx, ecx
        mov     dword ptr [ebp], ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [eax], edx
        call    FUN_005d9fb0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     0x14
L862C:
        mov     eax, dword ptr [DAT_007f2464]
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [esp + 0x54]
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c410
        mov     esi, dword ptr [edi + 0x1c]
        mov     ebx, dword ptr [edi + 0x20]
        cmp     esi, ebx
        mov     dword ptr [esp + 0x3c], 0x0
        jz      L86FE
L865B:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L86F3
        add     eax, 0x8
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_0040c5d0
        lea     edx, [esp + 0x44]
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_0040c410
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x38], 0x0
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x28]
        fld     st(0)
        mov     dword ptr [esp + 0x24], 0x0
        mov     edx, dword ptr [esi]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x48]
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        jnz     L86F3
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [esp + 0x1c]
        jz      L86E6
        push    esi
        push    eax
        call    FUN_005da4e0
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x8
        add     eax, 0x4
        mov     dword ptr [esp + 0x18], eax
        jmp     L86F3
L86E6:
        push    0x1
        push    esi
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005da270
L86F3:
        add     esi, 0x4
        cmp     esi, ebx
        jnz     L865B
L86FE:
        mov     ebx, dword ptr [esp + 0x58]
        push    ebx
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c410
        mov     esi, dword ptr [esp + 0x14]
        cmp     esi, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x3c], 0x0
        jz      L8796
L871E:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + 0x8]
        add     eax, 0x8
        mov     dword ptr [esp + 0x44], ecx
        mov     edx, dword ptr [eax + 0x4]
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x48], edx
        mov     eax, dword ptr [eax + 0x8]
        push    ecx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x50], eax
        call    FUN_0040c410
        lea     edx, [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x38], 0x0
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x28]
        fld     st(0)
        mov     dword ptr [esp + 0x24], 0x0
        mov     ecx, dword ptr [esi]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x48]
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        jz      L87E4
        mov     eax, dword ptr [esp + 0x18]
        add     esi, 0x4
        cmp     esi, eax
        jnz     L871E
L8796:
        mov     edx, dword ptr [esp + 0x54]
        push    0x0
        push    0x0
        push    edx
        mov     ecx, edi
        call    FUN_005d8820
        mov     dword ptr [ebp], eax
        mov     eax, dword ptr [esp + 0x5c]
        push    0x0
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_005d8820
        mov     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [ecx], eax
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        call    FUN_005da050
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     0x14
L87E4:
        mov     esi, dword ptr [esi]
        mov     edx, dword ptr [esp + 0x64]
        mov     dword ptr [ebp], esi
        mov     dword ptr [edx], esi
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_005da020
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     0x14
    }
}
