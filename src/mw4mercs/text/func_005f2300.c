/*
 * FUN_005f2300 (346 B) — __thiscall. Iterates over a table of 8 (x,y) int
 *   pairs, transforms each by param_2 (a float scale) plus an offset vector,
 *   bounds-checks against four float constants, and conditionally calls
 *   FUN_005f20d0. Uses _ftol() for float->int truncation.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern long __cdecl _ftol(double);
extern int  FUN_00676350(int, int);
extern void FUN_005f20d0(void *);

/* absolute float constants referenced via extern symbols (reloc-masked) */
extern float g_770168;   /* 0x00770168 */
extern float g_80da60;   /* 0x0080da60 */
extern float g_80da5c;   /* 0x0080da5c */
extern float g_80da58;   /* 0x0080da58 */
extern float g_80da54;   /* 0x0080da54 */

__declspec(naked) void FUN_005f2300(void)
{
    __asm {
        sub     esp, 0x50
        fld     dword ptr [esp + 0x58]
        push    ebx
        fcomp   dword ptr [g_770168]
        mov     eax, 1
        push    ebp
        push    esi
        xor     ebx, ebx
        push    edi
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x58], eax
        mov     dword ptr [esp + 0x5c], eax
        fnstsw  ax
        mov     edi, ecx
        or      ecx, 0xffffffff
        test    ah, 1
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x44], ebx
        mov     dword ptr [esp + 0x48], ecx
        mov     dword ptr [esp + 0x50], ebx
        mov     dword ptr [esp + 0x18], ebx
        jz      L2370
        mov     dword ptr [esp + 0x68], 0x41200000
    L2370:
        lea     ebp, [esp + 0x24]
        mov     dword ptr [esp + 0x10], 8
    L237C:
        fild    dword ptr [ebp - 4]
        mov     eax, dword ptr [esp + 0x64]
        fmul    dword ptr [esp + 0x68]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 0x14]
        fild    dword ptr [ebp]
        fmul    dword ptr [esp + 0x68]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_80da60]
        fnstsw  ax
        test    ah, 1
        jnz     L243C
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_80da5c]
        fnstsw  ax
        test    ah, 1
        jnz     L243C
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_80da58]
        fnstsw  ax
        test    ah, 1
        jz      L243C
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_80da54]
        fnstsw  ax
        test    ah, 1
        jz      L243C
        fld     dword ptr [esp + 0x14]
        call    _ftol
        fld     dword ptr [esp + 0x1c]
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     esi, edx
        call    _ftol
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    edx
        push    esi
        call    FUN_00676350
        add     esp, 8
        cmp     eax, edi
        setz    al
        cmp     al, bl
        jnz     L243C
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, edi
        call    FUN_005f20d0
    L243C:
        mov     eax, dword ptr [esp + 0x10]
        add     ebp, 8
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L237C
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x50
        ret     8
    }
}
