/*
 * FUN_004A2160 (688 B) — __thiscall MLR object constructor. Sets vtable
 *   0x7702cc, initializes several sub-objects (via FUN_004ae3c0 /
 *   FUN_004add90 / FUN_004ae5a0 / FUN_004addd0), calls virtual method
 *   [vtable+0x20] on the param_2 object, and computes two float values
 *   (FUN_00495e30 lookup) stored at this+0x184 / this+0x18c. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004a32c0(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004a2930(void);
extern void __cdecl FUN_004adf70(void);

__declspec(naked) void __fastcall FUN_004a2160(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x20
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x34]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x38]
        push    ebp
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004a32c0
        mov     dword ptr [esi + 0x120], 0x7
        xor     ebx, ebx
        lea     ecx, [esi + 0x12c]
        mov     dword ptr [esi + 0x124], ebx
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x13c], 0x7
        lea     ecx, [esi + 0x148]
        mov     dword ptr [esi + 0x140], ebx
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x15c]
        mov     dword ptr [esi + 0x158], 0x6
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x168], 0x2
        mov     dword ptr [esi + 0x180], 0x0
        lea     ebx, [esi + 0x180]
        mov     dword ptr [esi + 0x188], 0x0
        mov     dword ptr [esi + 0x190], 0x0
        push    ebp
        mov     dword ptr [esi + 0x198], 0x0
        push    edi
        lea     ecx, [esi + 0x124]
        mov     dword ptr [esi], 0x7702cc
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x12c]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x138]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea     ecx, [esi + 0x140]
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x148]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x154]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        cmp     ebp, 0xa
        jge     L_2393
        push    0x0
        lea     ecx, [esi + 0x15c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x168]
        call    FUN_004adfb0
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esi + 0x17c], 0x0
        mov     dword ptr [esp + 0x10], 0x4
        call    FUN_004ae3c0
        push    ebp
        push    edi
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x28], 0x1
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_00495e30
        mov     edx, dword ptr [esp + 0x18]
        lea     ecx, [eax + eax*0x2]
        fld     dword ptr [edx + ecx*0x4 + 0x4]
        lea     eax, [edx + ecx*0x4]
        fmul    dword ptr [eax]
        fsubr   dword ptr [eax + 0x8]
        mov     al, byte ptr [esp + 0x2c]
        test    al, al
        jz      L_22f0
        fmul    dword ptr [esp + 0x24]
L_22f0:
        push    ebp
        fstp    dword ptr [esi + 0x184]
        push    edi
        lea     ecx, [esp + 0x1c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_004addd0
        mov     eax, dword ptr [edi]
        push    0x1
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_00495e30
        lea     edx, [eax + eax*0x2]
        mov     eax, dword ptr [esp + 0x18]
        fld     dword ptr [eax + edx*0x4 + 0x4]
        lea     eax, [eax + edx*0x4]
        fmul    dword ptr [eax]
        fsubr   dword ptr [eax + 0x8]
        mov     al, byte ptr [esp + 0x2c]
        test    al, al
        jz      L_2344
        fmul    dword ptr [esp + 0x24]
L_2344:
        push    ebp
        fstp    dword ptr [esi + 0x18c]
        push    edi
        lea     ecx, [esi + 0x190]
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x198]
        call    FUN_004add90
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov     byte ptr [esi + 0x1a0], 0x0
        jz      L_23fd
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     ecx, esi
        call    FUN_004a2930
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0xc
L_2393:
        push    ebp
        push    edi
        lea     ecx, [esi + 0x15c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x168]
        call    FUN_004adf70
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x17c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        mov     ecx, ebx
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x188]
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x190]
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x198]
        call    FUN_004add90
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x1a0]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
L_23fd:
        mov     ecx, esi
        call    FUN_004a2930
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0xc
    }
}
