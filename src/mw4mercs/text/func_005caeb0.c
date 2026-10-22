/*
 * FUN_005caeb0 (329 B) — __thiscall. FPU-heavy update of two aim
 * angles (this+0x620 / this+0x61c) against a sub-object's reference
 * values, clamping into [0xbf333333, 0x3f333333].
 *
 * __thiscall (ECX = this), no stack args, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005caeb0(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_0077d094;
extern int DAT_00787d28;
extern int DAT_00785968;
__asm {
fld     dword ptr [ecx + 0x620]
        push    ebp
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_CAF54
        mov     eax, dword ptr [ecx + 0x170]
        mov     edx, dword ptr [eax + 0x410]
        mov     ebp, dword ptr [eax + 0x40c]
        sub     edx, ebp
        sar     edx, 0x2
        jz      L_CAEE7
        mov     eax, ebp
        mov     edx, dword ptr [eax]
        jmp     L_CAEE9
L_CAEE7:
        xor     edx, edx
L_CAEE9:
        fld     dword ptr [edx + 0x198]
        fsub    dword ptr [ecx + 0x620]
        fabs
        fcomp dword ptr [DAT_0077d094]
        fnstsw  ax
        test    ah, 0x1
        jz      L_CAF10
        mov     dword ptr [ecx + 0x620], 0x0
        jmp     L_CAF54
L_CAF10:
        fld     dword ptr [ecx + 0x620]
        fsub    dword ptr [edx + 0x198]
        fcom dword ptr [DAT_00787d28]
        fst     dword ptr [edx + 0x1c8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_CAF3D
        fstp    st(0)
        mov     dword ptr [edx + 0x1c8], 0xbf333333
        jmp     L_CAF54
L_CAF3D:
        fcomp dword ptr [DAT_00785968]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_CAF54
        mov     dword ptr [edx + 0x1c8], 0x3f333333
L_CAF54:
        fld     dword ptr [ecx + 0x61c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_CAFF7
        mov     eax, dword ptr [ecx + 0x170]
        mov     edx, dword ptr [eax + 0x410]
        mov     ebp, dword ptr [eax + 0x40c]
        sub     edx, ebp
        sar     edx, 0x2
        jz      L_CAF8A
        mov     eax, ebp
        mov     edx, dword ptr [eax]
        jmp     L_CAF8C
L_CAF8A:
        xor     edx, edx
L_CAF8C:
        fld     dword ptr [edx + 0x19c]
        fsub    dword ptr [ecx + 0x61c]
        fabs
        fcomp dword ptr [DAT_0077d094]
        fnstsw  ax
        test    ah, 0x1
        jz      L_CAFB3
        mov     dword ptr [ecx + 0x61c], 0x0
        pop     ebp
        ret
L_CAFB3:
        fld     dword ptr [ecx + 0x61c]
        fsub    dword ptr [edx + 0x19c]
        fcom dword ptr [DAT_00787d28]
        fst     dword ptr [edx + 0x1cc]
        fnstsw  ax
        test    ah, 0x1
        jz      L_CAFE0
        fstp    st(0)
        mov     dword ptr [edx + 0x1cc], 0xbf333333
        pop     ebp
        ret
L_CAFE0:
        fcomp dword ptr [DAT_00785968]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_CAFF7
        mov     dword ptr [edx + 0x1cc], 0x3f333333
L_CAFF7:
        pop     ebp
        ret
    }


}
