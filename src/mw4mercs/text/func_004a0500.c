/*
 * FUN_004a0500 (219 B) — MLR particle/shrapnel: computes a fragment's
 * direction/velocity (interpolates a lookup table, applies sin/cos) and
 * writes it into the ring buffer slot. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_00415020(void);
extern float g_0076c5b0;
extern float g_0076d070;

__declspec(naked) void FUN_004a0500(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     eax, dword ptr [ebp+0x8]
        fld     dword ptr [ecx+0x90]
        mov     edx, dword ptr [ecx+0x10]
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx+0xbc]
        lea     eax, [eax+eax*8]
        push    edi
        lea     edi, [esi+eax*8]
        mov     esi, dword ptr [edx+0xa4]
        mov     eax, dword ptr [edx+0x98]
        xor     ecx, ecx
        test    esi, esi
        mov     dword ptr [ebp-0x8], eax
        jbe     L054d
        mov     ebx, dword ptr [edx+0xa0]
L053c:
        fcom    dword ptr [ebx]
        fnstsw  ax
        test    ah, 0x1
        jnz     L054d
        inc     ecx
        add     ebx, 0xc
        cmp     ecx, esi
        jc      L053c
L054d:
        mov     edx, dword ptr [edx+0xa0]
        lea     ecx, [ecx+ecx*2]
        fsub    dword ptr [edx+ecx*4-0xc]
        lea     eax, [edx+ecx*4-0xc]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        fsub    dword ptr [ebp-0x8]
        fst     dword ptr [ebp-0x4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L057e
        mov     dword ptr [ebp-0x4], 0x0
L057e:
        call    FUN_00415020
        fmul    dword ptr [ebp-0x4]
        lea     eax, [ebp+0x8]
        lea     ecx, [ebp-0x10]
        fadd    dword ptr [ebp-0x8]
        mov     dword ptr [ebp-0x8], eax
        mov     dword ptr [ebp-0x4], ecx
        fstp    dword ptr [ebp+0x8]
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp-0x8]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        call    FUN_00415020
        fcomp   dword ptr [g_0076d070]
        fld     dword ptr [ebp-0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L05c2
        fchs
L05c2:
        fstp    dword ptr [edi+0x30]
        mov     dword ptr [edi+0x34], 0x0
        mov     edx, dword ptr [ebp-0xc]
        mov     dword ptr [edi+0x38], edx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
