/*
 * FUN_004A99C0 (377 B) — __thiscall MLR sub-object update (RET 0x8).
 *   Calls FUN_004AC690, computes a scaled float, fills a sub-object's
 *   transform fields, and branches on flags to build a matrix via
 *   FUN_0041AFD0 / FUN_0041AF70 or copy a constant matrix.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004ac690(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_0041af70(void);

extern float g_0077044c;
extern float g_00770448;
extern unsigned long g_007b8cd8;
extern unsigned long g_007b8cdc;
extern unsigned long g_007b8ce0;
extern unsigned long g_007b8ce4;

__declspec(naked) void __fastcall FUN_004a99c0(void)
{
    __asm {
        sub     esp, 0x3c
        push    ebx
        mov     ebx, dword ptr [esp + 0x48]
        push    ebp
        mov     ebp, dword ptr [esp + 0x48]
        push    esi
        push    edi
        push    ebx
        mov     edi, ecx
        push    ebp
        call    FUN_004ac690
        mov     eax, dword ptr [edi + 0x10]
        mov     esi, dword ptr [eax + 0x270]
        fld     dword ptr [eax + 0x27c]
        mov     edx, dword ptr [edi + 0xa8]
        imul    esi, ebp
        mov     ecx, dword ptr [esi + edx + 0x18]
        add     esi, edx
        mov     edx, dword ptr [ebx]
        mov     dword ptr [esp + 0x54], ecx
        mov     ecx, dword ptr [ebx + 4]
        mov     dword ptr [esi + 0x34], ecx
        mov     cl, byte ptr [eax + 0x28c]
        test    cl, cl
        mov     dword ptr [esi + 0x30], edx
        mov     edx, dword ptr [ebx + 8]
        mov     dword ptr [esi + 0x38], edx
        jz      l_1
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [eax + 0x288]
        fadd    dword ptr [eax + 0x284]
        fmulp   st(1), st(0)
    l_1:
        mov     cl, byte ptr [eax + 0x28c]
        fstp    dword ptr [esi + 0x24]
        test    cl, cl
        fld     dword ptr [eax + 0x27c]
        jz      l_2
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [eax + 0x288]
        fadd    dword ptr [eax + 0x284]
        fmulp   st(1), st(0)
    l_2:
        mov     cl, byte ptr [eax + 0x28c]
        fstp    dword ptr [esi + 0x28]
        test    cl, cl
        fld     dword ptr [eax + 0x27c]
        jz      l_3
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [eax + 0x288]
        fadd    dword ptr [eax + 0x284]
        fmulp   st(1), st(0)
    l_3:
        mov     cl, byte ptr [eax + 0x2b1]
        fstp    dword ptr [esi + 0x2c]
        test    cl, cl
        jz      l_4
        lea     ecx, [esp + 0x1c]
        call    FUN_00419e70
        push    0x2
        push    0x0
        push    0x1
        push    esi
        lea     ecx, [esp + 0x2c]
        call    FUN_0041fde0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esi + 0x48]
        call    FUN_0041afd0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     8
    l_4:
        mov     cl, byte ptr [eax + 0x2b0]
        test    cl, cl
        jz      l_5
        call    FUN_00415020
        fmul    dword ptr [g_0077044c]
        fstp    dword ptr [esp + 0x50]
        call    FUN_00415020
        fmul    dword ptr [g_00770448]
        fstp    dword ptr [esp + 0x54]
        call    FUN_00415020
        fmul    dword ptr [g_0077044c]
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x50]
        lea     eax, [esp + 0x10]
        mov     dword ptr [esp + 0x14], ecx
        fstp    dword ptr [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x48]
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_0041af70
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     8
    l_5:
        mov     ecx, dword ptr [g_007b8cd8]
        mov     edx, dword ptr [g_007b8cdc]
        mov     eax, dword ptr [g_007b8ce0]
        mov     dword ptr [esi + 0x48], ecx
        mov     ecx, dword ptr [g_007b8ce4]
        pop     edi
        mov     dword ptr [esi + 0x4c], edx
        mov     dword ptr [esi + 0x50], eax
        mov     dword ptr [esi + 0x54], ecx
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     8
    }
}
