/*
 * FUN_004B4230 (433 B) — __thiscall, 3 args (ret 0xc), ecx=this. Computes a
 * squared-distance value, scans a float-pair array for a match, and if found
 * builds a result struct and calls a helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004c8460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0048bca0(void);
extern void __cdecl FUN_004b43f0(void);
extern void __cdecl FUN_0048ca40(void);

extern float g_7daac8;
extern float g_76c5b0;

__declspec(naked) void FUN_004B4230(void)
{
    __asm {
        sub     esp, 0xa8
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0x60]
        call    FUN_00491280
        mov     esi, dword ptr [ebx + 0x140]
        mov     edi, dword ptr [esp + 0xc0]
        push    esi
        push    edi
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x80], 0
        call    FUN_00491670
        add     esi, 0x18
        push    esi
        add     edi, 0x18
        lea     eax, [esp + 0x7c]
        push    edi
        push    eax
        call    FUN_004c8460
        mov     ecx, dword ptr [esp + 0xc8]
        add     ecx, 0x80
        add     esp, 0xc
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00419480
        lea     ebp, [ebx + 0x80]
        push    ebp
        lea     ecx, [esp + 0x58]
        call    FUN_00419480
        lea     edx, [esp + 0x54]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fadd    dword ptr [g_7daac8]
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        je      l_4b42f2
        mov     dword ptr [esp + 0x10], 0
    l_4b42f2:
        mov     edx, dword ptr [ebx + 0x178]
        xor     esi, esi
        test    edx, edx
        jbe     l_4b43d4
        mov     edi, dword ptr [ebx + 0x17c]
        xor     ecx, ecx
    l_4b430a:
        fld     dword ptr [edi + ecx*8]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je      l_4b4327
        fld     dword ptr [edi + ecx*8 + 4]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je      l_4b4341
    l_4b4327:
        inc     esi
        mov     ecx, esi
        and     ecx, 0xffff
        cmp     ecx, edx
        jb      l_4b430a
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa8
        ret     0xc
    l_4b4341:
        lea     ecx, [esp + 0x20]
        call    FUN_0048bca0
        mov     ecx, dword ptr [ebx + 0x174]
        mov     eax, dword ptr [esp + 0xc4]
        and     esi, 0xffff
        mov     edx, dword ptr [ecx + esi*4]
        mov     dword ptr [esp + 0x20], edx
        and     eax, 0x3f
        lea     ecx, [ebx + 0x144]
        mov     dword ptr [esp + 0x44], ecx
        mov     dword ptr [esp + 0x3c], eax
        lea     edx, [esp + 0x78]
        mov     dword ptr [esp + 0x40], ebp
        mov     ecx, 6
        lea     esi, [esp + 0x60]
        lea     edi, [esp + 0x24]
        rep     movsd
        push    edx
        lea     eax, [esp + 0x9c]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x58], 0x7dab08
        call    FUN_004b43f0
        xor     ecx, ecx
        test    eax, eax
        setle   cl
        lea     edx, [esp + 0x98]
        mov     dword ptr [esp + 0x4c], eax
        lea     eax, [esp + 0x20]
        push    eax
        dec     ecx
        and     ecx, edx
        mov     dword ptr [esp + 0x4c], ecx
        mov     ecx, dword ptr [esp + 0xc0]
        mov     ecx, dword ptr [ecx + 0x26c]
        call    FUN_0048ca40
    l_4b43d4:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa8
        ret     0xc
    }
}
