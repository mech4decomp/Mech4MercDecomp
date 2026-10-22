/*
 * FUN_006839e0 (355 B) — HUD element list merge/sort + random selection.
 * Same merge/sort core as FUN_006836f0's second half (float aim-check via
 * fn-ptr table @ 0x798bc4), but without the element-type scan / jump table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005cb3a0(void);
extern int  __cdecl FUN_00684500(int, int, int);
extern void __cdecl FUN_00684410(int, int, int);
extern int  __cdecl FUN_007047f0(void);
extern void __cdecl FUN_005cb520(int, int);
extern void __cdecl FUN_005cb4e0(int, int);

extern char g_00798bc4;          /* fn-ptr table @ 0x798bc4 (addr stored) */

__declspec(naked) int FUN_006839e0(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x1c]
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        mov     edi, dword ptr [eax + 0x4]
        mov     eax, edi
        sub     eax, esi
        test    eax, 0xfffffffc
        mov     dword ptr [esp + 0x8], offset g_00798bc4
        jz      L_683b3b
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_005cb3a0
        cmp     esi, edi
        mov     ecx, dword ptr [esp + 0x18]
        jz      L_683aef
L_683a1f:
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, ecx
        sub     edx, eax
        test    edx, 0xfffffffc
        jnz     L_683a55
        cmp     ecx, dword ptr [esp + 0x1c]
        jz      L_683ad3
        test    ecx, ecx
        jz      L_683aca
        mov     eax, dword ptr [esi]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [esp + 0x18]
        add     ecx, 0x4
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_683ae4
L_683a55:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esp + 0x8]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    dword ptr [edx]
        fstp    dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x8]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    dword ptr [edx]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_683aa5
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    eax
        call    FUN_00684500
        mov     ecx, eax
        add     esp, 0xc
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_683aa9
L_683aa5:
        mov     ecx, dword ptr [esp + 0x18]
L_683aa9:
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_683ae4
        cmp     ecx, dword ptr [esp + 0x1c]
        jz      L_683ad3
        test    ecx, ecx
        jz      L_683aca
        mov     edx, dword ptr [esi]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [esp + 0x18]
L_683aca:
        add     ecx, 0x4
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_683ae4
L_683ad3:
        push    0x1
        push    esi
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_00684410
        mov     ecx, dword ptr [esp + 0x18]
L_683ae4:
        add     esi, 0x4
        cmp     esi, edi
        jnz     L_683a1f
L_683aef:
        mov     edx, dword ptr [esp + 0x14]
        sub     ecx, edx
        mov     esi, ecx
        sar     esi, 0x2
        jz      L_683b27
        call    FUN_007047f0
        xor     edx, edx
        div     esi
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        mov     esi, dword ptr [eax + edx*4]
        call    FUN_005cb520
        add     esp, 0x8
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x18
        ret
L_683b27:
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, edx
        sar     eax, 0x2
        push    eax
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_005cb4e0
L_683b3b:
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x18
        ret
    }
}
