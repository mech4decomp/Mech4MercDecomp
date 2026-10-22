/*
 * FUN_005CCDD0 (1547 B) — __fastcall (ECX = this), RET 0x8.
 * Complex aiming/position update. Calls FUN_0041fd80 (thiscall),
 * FUN_00417d80, FUN_00420840, FUN_0075db4a (_ftol), FUN_005ccd80,
 * FUN_005cd6f0. Heavy FPU vector math with absolute constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_0041fd80(void *this);
extern int __fastcall FUN_00417d80(void *this, int a, int b);
extern int __fastcall FUN_00420840(void *this, int a);
extern int __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_005ccd80(void);
extern char __cdecl FUN_005cd6f0(void);

extern float DAT_0076c5b0;
extern float DAT_0076d070;
extern float DAT_00787d38;
extern float DAT_00787d3c;
extern float DAT_0076d3c8;
extern float DAT_0076d064;

__declspec(naked) void __fastcall FUN_005ccdd0(void *param1)
{
    __asm {
        sub     esp, 0x64
        push    ebp
        mov     ebp, ecx
        push    edi
        lea     edi, [ebp + 0x1c8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_d3d3
        mov     eax, dword ptr [ebp + 0x324]
        mov     ecx, 0x1
        cmp     eax, ecx
        push    ebx
        push    esi
        jz      l_cef6
        mov     eax, dword ptr [ebp + 0x170]
        mov     eax, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        xor     ebx, ebx
        mov     dword ptr [ebp + 0x328], edx
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp + 0x324], ecx
        mov     ecx, edi
        mov     dword ptr [ebp + 0x318], ebx
        mov     dword ptr [ebp + 0x31c], ebx
        mov     dword ptr [ebp + 0x32c], edx
        mov     dword ptr [ebp + 0x330], eax
        mov     dword ptr [ebp + 0x334], ebx
        mov     dword ptr [ebp + 0x338], ebx
        call    FUN_0041fd80
        mov     esi, dword ptr [eax + 0x128]
        cmp     esi, ebx
        jnz     l_ceb7
        mov     ecx, edi
        call    FUN_0041fd80
        mov     esi, dword ptr [eax + 0x124]
        cmp     esi, ebx
        jnz     l_ceb7
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x1c], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x20], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    0x41a00000
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [ebp + 0x360]
        push    edx
        mov     dword ptr [esp + 0x30], eax
        call    FUN_005ccd80
        add     esp, 0xc
        jmp     l_cef8
    l_ceb7:
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        add     esi, 0x10
        push    esi
        lea     ecx, [esp + 0x3c]
        call    FUN_00417d80
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00420840
        lea     edi, [ebp + 0x360]
        mov     ecx, 0x6
        mov     esi, eax
        rep movsd
        jmp     l_cef8
    l_cef6:
        xor     ebx, ebx
    l_cef8:
        mov     ecx, dword ptr [ebp + 0x170]
        fld     dword ptr [ebp + 0x1ec]
        mov     eax, dword ptr [ecx + 0xd8]
        fcomp   dword ptr [DAT_0076c5b0]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x24], eax
        fnstsw  ax
        mov     dword ptr [esp + 0x1c], edx
        test    ah, 0x41
        mov     byte ptr [esp + 0x13], 0x1
        jnz     l_cf37
        mov     byte ptr [esp + 0x13], 0x0
    l_cf37:
        fld     dword ptr [ebp + 0x364]
        fsub    dword ptr [ebp + 0x360]
        fmul    dword ptr [DAT_0076d070]
        fadd    dword ptr [ebp + 0x360]
        call    FUN_0075db4a
        fld     dword ptr [ebp + 0x374]
        fsub    dword ptr [ebp + 0x370]
        mov     dword ptr [esp + 0x14], eax
        fmul    dword ptr [DAT_0076d070]
        fadd    dword ptr [ebp + 0x370]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [ebp + 0x360]
        mov     dword ptr [esp + 0x18], eax
        fnstsw  ax
        test    ah, 1
        jz      l_cf91
        mov     ebx, 0x2
        jmp     l_cfa7
    l_cf91:
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [ebp + 0x364]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_cfa7
        mov     ebx, 0x4
    l_cfa7:
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [ebp + 0x370]
        fnstsw  ax
        test    ah, 1
        jz      l_cfbb
        inc     ebx
        jmp     l_cfcf
    l_cfbb:
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [ebp + 0x374]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_cfcf
        add     ebx, 0x8
    l_cfcf:
        xor     esi, esi
        cmp     ebx, esi
        jnz     l_d003
        fild    dword ptr [esp + 0x14]
        mov     ebx, 0x2
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jz      l_cfee
        mov     ebx, 0x4
    l_cfee:
        fild    dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d000
        inc     ebx
        jmp     l_d003
    l_d000:
        add     ebx, 0x8
    l_d003:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        mov     dword ptr [ebp + 0x318], esi
        mov     dword ptr [ebp + 0x31c], esi
        mov     edx, ebx
        jz      l_d1d6
        and     edx, 0x1
        jz      l_d079
        test    bl, 0x4
        jnz     l_d06f
        fld     dword ptr [ebp + 0x370]
        fsub    dword ptr [DAT_00787d38]
        fld     st(0)
        fsub    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d054
        fstp    st(0)
        mov     dword ptr [ebp + 0x31c], 0x3e800000
        jmp     l_d06f
    l_d054:
        fadd    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 1
        jz      l_d06f
        mov     dword ptr [ebp + 0x31c], 0xbe800000
    l_d06f:
        mov     dword ptr [ebp + 0x318], 0x3f800000
    l_d079:
        mov     ecx, ebx
        and     ecx, 0x8
        jz      l_d0f1
        test    bl, 0x2
        jnz     l_d0df
        fld     dword ptr [DAT_00787d3c]
        fadd    dword ptr [ebp + 0x374]
        fadd    dword ptr [DAT_00787d38]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 1
        jz      l_d0b0
        fld     dword ptr [ebp + 0x31c]
        fsub    dword ptr [DAT_0076d3c8]
        jmp     l_d0d9
    l_d0b0:
        fld     dword ptr [DAT_00787d38]
        fadd    dword ptr [ebp + 0x374]
        fsub    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d0df
        fld     dword ptr [ebp + 0x31c]
        fadd    dword ptr [DAT_0076d3c8]
    l_d0d9:
        fstp    dword ptr [ebp + 0x31c]
    l_d0df:
        fld     dword ptr [ebp + 0x318]
        fsub    dword ptr [DAT_0076d064]
        fstp    dword ptr [ebp + 0x318]
    l_d0f1:
        test    bl, 0x2
        jz      l_d15e
        cmp     edx, esi
        jnz     l_d14c
        fld     dword ptr [ebp + 0x360]
        fsub    dword ptr [DAT_00787d38]
        fld     st(0)
        fsub    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d129
        fstp    st(0)
        fld     dword ptr [ebp + 0x318]
        fadd    dword ptr [DAT_0076d3c8]
        jmp     l_d146
    l_d129:
        fadd    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 1
        jz      l_d14c
        fld     dword ptr [ebp + 0x318]
        fsub    dword ptr [DAT_0076d3c8]
    l_d146:
        fstp    dword ptr [ebp + 0x318]
    l_d14c:
        fld     dword ptr [ebp + 0x31c]
        fsub    dword ptr [DAT_0076d064]
        fstp    dword ptr [ebp + 0x31c]
    l_d15e:
        test    bl, 0x4
        jz      l_d38c
        cmp     ecx, esi
        jnz     l_d1c5
        fld     dword ptr [DAT_00787d3c]
        fadd    dword ptr [DAT_00787d38]
        fadd    dword ptr [ebp + 0x364]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 1
        jz      l_d196
        fld     dword ptr [ebp + 0x318]
        fsub    dword ptr [DAT_0076d3c8]
        jmp     l_d1bf
    l_d196:
        fld     dword ptr [DAT_00787d38]
        fadd    dword ptr [ebp + 0x364]
        fsub    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d1c5
        fld     dword ptr [ebp + 0x318]
        fadd    dword ptr [DAT_0076d3c8]
    l_d1bf:
        fstp    dword ptr [ebp + 0x318]
    l_d1c5:
        fld     dword ptr [ebp + 0x31c]
        fadd    dword ptr [DAT_0076d064]
        jmp     l_d386
    l_d1d6:
        and     edx, 0x1
        jz      l_d232
        test    bl, 0x2
        jnz     l_d228
        fld     dword ptr [ebp + 0x370]
        fsub    dword ptr [DAT_00787d38]
        fld     st(0)
        fsub    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d20d
        fstp    st(0)
        mov     dword ptr [ebp + 0x31c], 0x3e800000
        jmp     l_d228
    l_d20d:
        fadd    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 1
        jz      l_d228
        mov     dword ptr [ebp + 0x31c], 0xbe800000
    l_d228:
        mov     dword ptr [ebp + 0x318], 0xbf800000
    l_d232:
        mov     ecx, ebx
        and     ecx, 0x8
        jz      l_d2aa
        test    bl, 0x4
        jnz     l_d298
        fld     dword ptr [DAT_00787d3c]
        fadd    dword ptr [ebp + 0x374]
        fadd    dword ptr [DAT_00787d38]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 1
        jz      l_d269
        fld     dword ptr [ebp + 0x31c]
        fsub    dword ptr [DAT_0076d3c8]
        jmp     l_d292
    l_d269:
        fld     dword ptr [DAT_00787d38]
        fadd    dword ptr [ebp + 0x374]
        fsub    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d298
        fld     dword ptr [ebp + 0x31c]
        fadd    dword ptr [DAT_0076d3c8]
    l_d292:
        fstp    dword ptr [ebp + 0x31c]
    l_d298:
        fld     dword ptr [ebp + 0x318]
        fadd    dword ptr [DAT_0076d064]
        fstp    dword ptr [ebp + 0x318]
    l_d2aa:
        test    bl, 0x2
        jz      l_d317
        cmp     ecx, esi
        jnz     l_d305
        fld     dword ptr [ebp + 0x360]
        fsub    dword ptr [DAT_00787d38]
        fld     st(0)
        fsub    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d2e2
        fstp    st(0)
        fld     dword ptr [ebp + 0x318]
        fadd    dword ptr [DAT_0076d3c8]
        jmp     l_d2ff
    l_d2e2:
        fadd    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 1
        jz      l_d305
        fld     dword ptr [ebp + 0x318]
        fsub    dword ptr [DAT_0076d3c8]
    l_d2ff:
        fstp    dword ptr [ebp + 0x318]
    l_d305:
        fld     dword ptr [ebp + 0x31c]
        fadd    dword ptr [DAT_0076d064]
        fstp    dword ptr [ebp + 0x31c]
    l_d317:
        test    bl, 0x4
        jz      l_d38c
        cmp     edx, esi
        jnz     l_d37a
        fld     dword ptr [DAT_00787d3c]
        fadd    dword ptr [DAT_00787d38]
        fadd    dword ptr [ebp + 0x364]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 1
        jz      l_d34b
        fld     dword ptr [ebp + 0x318]
        fsub    dword ptr [DAT_0076d3c8]
        jmp     l_d374
    l_d34b:
        fld     dword ptr [DAT_00787d38]
        fadd    dword ptr [ebp + 0x364]
        fsub    dword ptr [DAT_00787d3c]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_d37a
        fld     dword ptr [ebp + 0x318]
        fadd    dword ptr [DAT_0076d3c8]
    l_d374:
        fstp    dword ptr [ebp + 0x318]
    l_d37a:
        fld     dword ptr [ebp + 0x31c]
        fsub    dword ptr [DAT_0076d064]
    l_d386:
        fstp    dword ptr [ebp + 0x31c]
    l_d38c:
        mov     ecx, ebp
        call    FUN_005cd6f0
        cmp     al, 1
        pop     esi
        pop     ebx
        jnz     l_d3a5
        mov     dword ptr [ebp + 0x398], 0x2
        jmp     l_d3af
    l_d3a5:
        mov     dword ptr [ebp + 0x398], 0x1
    l_d3af:
        fld     dword ptr [ebp + 0x318]
        fmul    dword ptr [ebp + 0x1f8]
        fstp    dword ptr [ebp + 0x334]
        fld     dword ptr [ebp + 0x1f8]
        fmul    dword ptr [ebp + 0x31c]
        fstp    dword ptr [ebp + 0x338]
    l_d3d3:
        pop     edi
        pop     ebp
        add     esp, 0x64
        ret     0x8
    }
}
