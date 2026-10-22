/*
 * FUN_005ef5a0 (222 B) — __thiscall (ECX = this), plain RET. Returns bool in AL.
 *
 * Walks a chain of pointers (this+0x178 -> +0x198 -> +0x40 -> +0x150 ->
 * +0x28), checks several conditions, and returns false if any fail; also
 * does FPU comparisons against this+0x1bc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ef5a0(void)
{
    

extern int DAT_00789dbc;
extern int DAT_0077deac;
extern int DAT_00785f2c;
__asm {
mov     edx, dword ptr [ecx + 0x178]
        test    edx, edx
        push    esi
        jz      ret1
        mov     eax, dword ptr [edx + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     ret1
        mov     ecx, dword ptr [ecx + 0x198]
        test    ecx, ecx
        jz      ret1
        mov     eax, dword ptr [ecx + 0x40]
        test    eax, eax
        jz      ret1
        mov     ecx, dword ptr [eax + 0x150]
        test    ecx, ecx
        jz      ret1
        mov     esi, dword ptr [ecx + 0x28]
        test    esi, esi
        jz      ret1
        mov     ecx, dword ptr [edx + 0x410]
        mov     esi, dword ptr [edx + 0x40c]
        sub     ecx, esi
        sar     ecx, 0x2
        jz      ret1
        mov     edx, esi
        mov     ecx, dword ptr [edx]
        test    ecx, ecx
        jz      ret1
        mov     eax, dword ptr [eax + 0x150]
        mov     edx, dword ptr [eax + 0x28]
        mov     eax, dword ptr [ecx + 0x1e0]
        cmp     eax, 0x1
        jnz     L_628
        cmp     dword ptr [edx + 0x3c], 0x2
        jz      L_628
        xor     al, al
        pop     esi
        ret
L_628:
        cmp     eax, 0x2
        jnz     L_637
        cmp     dword ptr [edx + 0x3c], 0x3
        jz      L_637
        xor     al, al
        pop     esi
        ret
L_637:
        cmp     eax, 0x4
        jnz     L_640
        xor     al, al
        pop     esi
        ret
L_640:
        test    eax, eax
        jnz     ret1
        fld dword ptr [DAT_00789dbc]
        fmul dword ptr [DAT_0077deac]
        fcomp   dword ptr [ecx + 0x1bc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_676
        fld dword ptr [DAT_00789dbc]
        fmul dword ptr [DAT_00785f2c]
        fcomp   dword ptr [ecx + 0x1bc]
        fnstsw  ax
        test    ah, 0x41
        jnz     ret1
L_676:
        xor     al, al
        pop     esi
        ret
ret1:
        mov     al, 0x1
        pop     esi
        ret
    }


}
