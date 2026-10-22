/*
 * FUN_005f2b10 (209 B) — Computes a scaled value. Calls FUN_0040cb00 on the
 *   global object at 0x7b8d08, reads a vector from *arg, scales it by
 *   constants, and calls FUN_004e2f40. Returns a dot-product result or a
 *   fallback constant.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void FUN_0040cb00(void);
extern int  FUN_004e2f40(void *);

/* absolute float constants referenced via extern symbols (reloc-masked) */
extern float g_76d064;   /* 0x0076d064 */
extern float g_7b8d08;   /* 0x007b8d08 */
extern float g_7b8d0c;   /* 0x007b8d0c */
extern float g_7b8d10;   /* 0x007b8d10 */
extern float g_77de8c;   /* 0x0077de8c */
extern float g_7866d4;   /* 0x007866d4 */

/* absolute dword globals referenced via extern symbols (reloc-masked) */
extern int g_7dab40;     /* 0x007dab40 */
extern int g_7dab44;     /* 0x007dab44 */
extern int g_7dc728;     /* 0x007dc728 */

__declspec(naked) void FUN_005f2b10(void)
{
    __asm {
        sub     esp, 0x40
        push    esi
        mov     ecx, 0x7b8d08
        mov     dword ptr [esp + 0x40], 0x42c80000
        call    FUN_0040cb00
        fsqrt
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [esp + 0x4c]
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [g_7dab40]
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x24], 0x1000
        fdivr   dword ptr [g_76d064]
        fld     dword ptr [g_7b8d08]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [g_7b8d0c]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [g_7b8d10]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x3c]
        fstp    st(0)
        fld     dword ptr [eax + 4]
        lea     eax, [esp + 0x28]
        fadd    dword ptr [g_77de8c]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [g_7dab44]
        fstp    dword ptr [esp + 0x2c]
        mov     esi, dword ptr [eax]
        xor     esi, ecx
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [g_7dc728]
        call    FUN_004e2f40
        mov     edx, dword ptr [esi + 0x1c]
        xor     edx, 0x85739531
        cmp     eax, edx
        pop     esi
        jnz     L2BD7
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x3c]
        fadd    dword ptr [esp + 0x28]
        add     esp, 0x40
        ret
    L2BD7:
        fld     dword ptr [g_7866d4]
        add     esp, 0x40
        ret
    }
}
