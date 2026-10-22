/*
 * FUN_005B1AD0 (1072 B) — __thiscall, 1 double arg (ret 8). Physics/aim
 * update: clamps a heading angle, integrates velocity, builds a transform
 * matrix, and dispatches virtual calls on sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041C680(void);
extern void __cdecl FUN_0041B140(void);
extern void __cdecl FUN_0041AFD0(void);
extern void __cdecl FUN_0041B320(void);
extern void __cdecl FUN_00419E70(void);
extern void __cdecl FUN_0041A160(void);
extern void __cdecl FUN_0041AC80(void);
extern void __cdecl FUN_0041A070(void);
extern void __cdecl FUN_004DAA20(void);
extern void __cdecl FUN_0041FD80(void);

extern float g_76C5B0;

__declspec(naked) void FUN_005B1AD0(void)
{
    __asm {
        sub     esp, 0xdc
        fld     qword ptr [esp + 0xe0]
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0xd8]
        fsub    qword ptr [ebp + 0xe4]
        mov     edx, dword ptr [ebp + 0x78]
        xor     ebx, ebx
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x1c]
        lea     ecx, [ebp + 0x78]
        push    esi
        fstp    dword ptr [esp + 0xc]
        mov     dword ptr [ebp + 0x42c], ebx
        mov     dword ptr [ebp + 0x448], ebx
        mov     dword ptr [ebp + 0x440], ebx
        mov     dword ptr [ebp + 0x43c], ebx
        mov     dword ptr [esp + 0xc0], eax
        call    dword ptr [edx + 4]
        mov     ecx, eax
        fld     dword ptr [ecx + 0x328]
        fchs
        fcom    dword ptr [g_76C5B0]
        fnstsw  ax
        test    ah, 0x41
        jne     l_5B1B43
        fstp    st(0)
        fld     dword ptr [g_76C5B0]
    l_5B1B43:
        fstp    dword ptr [ebp + 0x16c]
        mov     edx, dword ptr [ebp + 0x16c]
        fld     dword ptr [ebp + 0x570]
        mov     eax, ebx
        fcomp   dword ptr [g_76C5B0]
        mov     dword ptr [ebp + 0x168], ebx
        mov     dword ptr [ebp + 0x170], ebx
        mov     dword ptr [ebp + 0x198], eax
        mov     dword ptr [ebp + 0x1a0], eax
        fnstsw  ax
        mov     dword ptr [ebp + 0x19c], edx
        test    ah, 1
        je      l_5B1BA7
        fld     dword ptr [ecx + 0x30c]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [ebp + 0x570]
        fst     dword ptr [ebp + 0x570]
        fcomp   dword ptr [g_76C5B0]
        fnstsw  ax
        test    ah, 0x41
        jne     l_5B1BE3
        jmp     l_5B1BDD
    l_5B1BA7:
        fld     dword ptr [ebp + 0x570]
        fcomp   dword ptr [g_76C5B0]
        fnstsw  ax
        test    ah, 0x41
        jne     l_5B1BE3
        fld     dword ptr [ecx + 0x30c]
        fmul    dword ptr [esp + 0xc]
        fsubr   dword ptr [ebp + 0x570]
        fst     dword ptr [ebp + 0x570]
        fcomp   dword ptr [g_76C5B0]
        fnstsw  ax
        test    ah, 1
        je      l_5B1BE3
    l_5B1BDD:
        mov     dword ptr [ebp + 0x570], ebx
    l_5B1BE3:
        fld     dword ptr [ecx + 0x30c]
        fmul    dword ptr [ebp + 0x434]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [ecx + 0x310]
        fchs
        fld     dword ptr [esp + 0x1c]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 1
        jne     l_5B1C25
        fstp    st(0)
        fld     dword ptr [ecx + 0x310]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 1
        je      l_5B1C29
        fld     dword ptr [ecx + 0x310]
    l_5B1C25:
        fstp    dword ptr [esp + 0x1c]
    l_5B1C29:
        fld     dword ptr [ecx + 0x2b4]
        mov     eax, dword ptr [ebp + 0xd8]
        fmul    dword ptr [ebp + 0x430]
        fst     dword ptr [esp + 0x20]
        push    edi
        fld     dword ptr [ecx + 0x2b4]
        mov     ecx, dword ptr [esp + 0x20]
        fmul    dword ptr [ebp + 0x438]
        mov     dword ptr [ebp + 0x174], ecx
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x24]
        fstp    dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x2c]
        lea     esi, [ebp + 0x1a4]
        fstp    dword ptr [ebp + 0x178]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp + 0x17c], edx
        call    FUN_0041C680
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi]
        lea     edx, [esp + 0x68]
        push    edx
        lea     ecx, [esp + 0xe0]
        fstp    dword ptr [esp + 0x6c]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x70]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x74]
        call    FUN_0041B140
        lea     esi, [ebp + 0xf4]
        push    esi
        lea     ecx, [esp + 0xd0]
        call    FUN_0041AFD0
        lea     eax, [esp + 0xdc]
        push    eax
        lea     ecx, [esp + 0xd0]
        push    ecx
        lea     ecx, [esp + 0xb8]
        call    FUN_0041B320
        lea     ecx, [esp + 0x80]
        call    FUN_00419E70
        lea     edx, [esp + 0xb0]
        push    edx
        lea     ecx, [esp + 0x84]
        call    FUN_0041A160
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [ebp + 0x198]
        lea     eax, [esp + 0x80]
        push    eax
        lea     ecx, [esp + 0x60]
        fstp    dword ptr [esp + 0x60]
        push    ecx
        fld     dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x40]
        fmul    dword ptr [ebp + 0x19c]
        fstp    dword ptr [esp + 0x68]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [ebp + 0x1a0]
        fstp    dword ptr [esp + 0x6c]
        call    FUN_0041C680
        fld     dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0x1c]
        fadd    dword ptr [esp + 0x38]
        mov     eax, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x78], edx
        mov     dword ptr [esp + 0x7c], eax
        fst     dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x78]
        fadd    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x7c]
        fadd    dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x8c]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebp]
        mov     dword ptr [esp + 0x9c], ecx
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0xb0], edx
        lea     edx, [esp + 0x54]
        push    edx
        push    ecx
        mov     ecx, ebp
        call    dword ptr [eax + 0x164]
        lea     edx, [esp + 0xb0]
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_0041AC80
        fld     dword ptr [ebp + 0x570]
        fld     dword ptr [esp + 0x50]
        mov     ecx, 0xc
        fadd    dword ptr [esp + 0x14]
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x80]
        lea     eax, [esp + 0x2c]
        fstp    dword ptr [esp + 0x14]
        rep movsd
        fld     dword ptr [esp + 0x54]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x58]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x2c]
        push    eax
        fadd    dword ptr [esp + 0x48]
        lea     ecx, [esp + 0x84]
        fstp    dword ptr [esp + 0x30]
        fadd    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x38]
        call    FUN_0041A070
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x8c], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x9c], edx
        lea     edx, [esp + 0x80]
        mov     dword ptr [ebp + 0x570], ecx
        push    edx
        mov     ecx, ebp
        mov     dword ptr [esp + 0xb0], eax
        call    FUN_004DAA20
        fld     dword ptr [esp + 0xc4]
        fcomp   dword ptr [ebp + 0x5a4]
        pop     edi
        fnstsw  ax
        test    ah, 0x41
        je      l_5B1EF4
        lea     esi, [ebp + 0x5bc]
        mov     ecx, esi
        call    FUN_0041FD80
        test    eax, eax
        je      l_5B1EA0
        mov     ecx, esi
        call    FUN_0041FD80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    ebx
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
    l_5B1EA0:
        lea     esi, [ebp + 0x5c4]
        mov     ecx, esi
        call    FUN_0041FD80
        test    eax, eax
        je      l_5B1EC8
        mov     ecx, esi
        call    FUN_0041FD80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    ebx
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
    l_5B1EC8:
        mov     ecx, dword ptr [ebp + 0xe0]
        mov     eax, dword ptr [ecx]
        push    ebx
        push    1
        call    dword ptr [eax + 4]
        mov     byte ptr [ebp + 0x514], bl
        mov     dword ptr [ebp + 0x434], ebx
        mov     dword ptr [ebp + 0x430], ebx
        mov     dword ptr [ebp + 0x438], ebx
        mov     dword ptr [ebp + 0x42c], ebx
    l_5B1EF4:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xdc
        ret     8
    }
}
