/*
 * FUN_004ee590 (575 B) — __thiscall (RET 0xC). MLR/Adept state-engine
 * constructor: initializes vtable 0x774bcc, fills a -1.0f matrix,
 * reads a stream via virtual [vtable+0x20], does FPU math (fptan,
 * fsqrt) to build a transform, and decrements a refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ee810(void);
extern void __cdecl FUN_004f0ce0(void);
extern int g_00774bcc;
extern void __cdecl FUN_004ee7d0(void);
extern void __cdecl FUN_00453dc0(void);
extern float g_0076d070;
extern int g_007b9460;
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_004c2890(void);

__declspec(naked) void FUN_004ee590(void)
{
    __asm {
        sub     esp, 0xb0
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0xc4]
        push    edi
        push    esi
        mov     ebp, ecx
        call    FUN_004ee810
        mov     ecx, dword ptr [esp+0xc8]
        add     esp, 0x4
        push    eax
        mov     eax, dword ptr [esp+0xd0]
        push    eax
        push    esi
        push    ecx
        mov     ecx, ebp
        call    FUN_004f0ce0
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x50]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp], offset g_00774bcc
        mov     dword ptr [esp+0x3c], 0xbf800000
        mov     dword ptr [esp+0x38], 0xbf800000
        mov     dword ptr [esp+0x34], 0xbf800000
        mov     dword ptr [esp+0x40], 0xbf800000
        mov     dword ptr [esp+0x4c], 0xbf800000
        mov     dword ptr [esp+0x48], 0xbf800000
        mov     dword ptr [esp+0x44], 0xbf800000
        mov     dword ptr [esp+0x50], 0xbf800000
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        push    0x10
        lea     eax, [esp+0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        push    0x10
        lea     eax, [esp+0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [esp+0x1c]
        push    0x2
        lea     ecx, [esp+0x40]
        push    ecx
        lea     edx, [esp+0x34]
        push    edx
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_004ee7d0
        mov     ecx, dword ptr [esp+0x24]
        mov     edx, dword ptr [esp+0x28]
        push    ecx
        push    edx
        call    FUN_00453dc0
        fld     dword ptr [esp+0x2c]
        fcomp   dword ptr [esp+0x30]
        add     esp, 0x18
        mov     ebx, eax
        fnstsw  ax
        test    ah, 0x41
        jnz     L_004ee6a6
        mov     eax, dword ptr [esp+0x14]
        mov     dword ptr [esp+0x10], eax
        jmp     L_004ee6ae
L_004ee6a6:
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [esp+0x10], ecx
L_004ee6ae:
        fld     dword ptr [esp+0x10]
        mov     ecx, 0xc
        fmul    dword ptr [g_0076d070]
        mov     esi, offset g_007b9460
        fld     dword ptr [esp+0x1c]
        lea     edi, [esp+0x90]
        fptan
        rep movsd
        lea     edx, [esp+0x90]
        push    edx
        lea     ecx, [esp+0x54]
        mov     dword ptr [esp+0xb0], 0
        mov     dword ptr [esp+0xc0], 0
        fstp    st(0)
        fmul    dword ptr [esp+0x14]
        fld     dword ptr [esp+0x14]
        fsub    st(0), st(2)
        fstp    dword ptr [esp+0x24]
        fst     dword ptr [esp+0x28]
        fstp    dword ptr [esp+0x2c]
        fstp    dword ptr [esp+0xa0]
        call    FUN_00419460
        fld     dword ptr [esp+0x24]
        mov     eax, dword ptr [esp+0x10]
        fld     dword ptr [esp+0x28]
        mov     edx, dword ptr [ebp+0x24]
        fld     dword ptr [esp+0x20]
        mov     dword ptr [esp+0x88], eax
        fmul    dword ptr [esp+0x20]
        lea     eax, [edx+0xb0]
        fld     st(1)
        mov     dword ptr [esp+0x80], 0
        fmul    st(0), st(2)
        mov     dword ptr [esp+0x84], 0
        mov     edi, eax
        mov     ecx, 0xc
        faddp   st(1), st(0)
        lea     esi, [esp+0x50]
        fld     st(2)
        push    ebx
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fstp    dword ptr [esp+0x90]
        rep movsd
        mov     ecx, dword ptr [esp+0x84]
        mov     dword ptr [eax+0x30], ecx
        mov     ecx, dword ptr [esp+0x88]
        mov     dword ptr [eax+0x34], ecx
        mov     ecx, dword ptr [esp+0x8c]
        mov     dword ptr [eax+0x38], ecx
        mov     ecx, dword ptr [esp+0x90]
        mov     dword ptr [eax+0x3c], ecx
        mov     ecx, edx
        call    FUN_004c2890
        dec     word ptr [ebx+0x10]
        mov     ax, word ptr [ebx+0x10]
        test    ax, ax
        jnz     L_004ee7c0
        test    ebx, ebx
        jz      L_004ee7c0
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx]
L_004ee7c0:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xb0
        ret     0xc
    }
}
