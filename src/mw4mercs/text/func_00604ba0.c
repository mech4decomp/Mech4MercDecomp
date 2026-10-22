/*
 * FUN_00604ba0 (193 B) — __fastcall. Computes a delta, iterates a list of
 * objects calling a virtual method, and stores a result into this+0x2c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float g_7b220c;
extern float g_76c5b0;

__declspec(naked) void __fastcall FUN_00604ba0(void *this)
{
    __asm {
        sub     esp, 0x10
        push    edi
        mov     edi, ecx
        fld     dword ptr [edi + 0x1c]
        mov     dword ptr [esp + 0xc], 0x0
        fsub    dword ptr [edi + 0x18]
        mov     dword ptr [esp + 0x10], 0x0
        fst     dword ptr [esp + 0x4]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_bdd
        mov     dword ptr [edi + 0x2c], 0x0
        pop     edi
        add     esp, 0x10
        ret
L_bdd:
        mov     eax, dword ptr [edi + 0x20]
        test    eax, eax
        mov     dl, 0x1
        jle     L_c49
        mov     ecx, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [ecx + 0x30]
        push    ebp
        push    esi
        mov     esi, dword ptr [edi + 0x24]
        lea     esi, [ecx + esi*4]
        mov     ebp, eax
L_bf6:
        mov     ecx, dword ptr [esi]
        cmp     dword ptr [ecx + 0x8], 0x1
        jnz     L_c3d
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x18]
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_c3b
        fld     dword ptr [esp + 0xc]
        fdiv    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0xc]
        fcom    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_c39
        mov     eax, dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], eax
        jmp     L_c3b
L_c39:
        fstp    st(0)
L_c3b:
        xor     dl, dl
L_c3d:
        add     esi, 0x4
        dec     ebp
        jnz     L_bf6
        test    dl, dl
        pop     esi
        pop     ebp
        jz      L_c55
L_c49:
        mov     dword ptr [edi + 0x2c], 0x3f800000
        pop     edi
        add     esp, 0x10
        ret
L_c55:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x2c], ecx
        pop     edi
        add     esp, 0x10
        ret
    }
}
