/*
 * FUN_006740A0 (259 B @ 0x6740a0) - __thiscall, RET 8. FPU-heavy animation/
 * physics update: clamps a double field, integrates a float field, and
 * compacts an array of 12-byte elements (division by 12 via 0x2aaaaaab).
 *
 * CFLAGS: /O1
 */

extern double g_0076d970;
extern float  g_7971f0;
extern float  g_79723c;
extern double g_0078d0c0;
extern double g_7971f8;

__declspec(naked) void FUN_006740A0(void)
{
    __asm {
        push    ecx
        fld     qword ptr [ecx + 0x70]
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (89 0C 24 vs 89 4C 24 00) */
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        fcomp   qword ptr [g_0076d970]
        fld     qword ptr [esp + 8]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax (ref is no-WAIT DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      L_6740bc
        fst     qword ptr [ecx + 0x70]
L_6740bc:
        fcom    qword ptr [ecx + 0x70]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_674101
        fld     dword ptr [g_7971f0]
        fadd    st(0), st(0)
L_6740ce:
        fld     dword ptr [ecx + 0x78]
        fadd    dword ptr [g_79723c]
        fst     dword ptr [ecx + 0x78]
        fcomp   st(1)
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_6740ea
        mov     dword ptr [ecx + 0x78], 0
L_6740ea:
        fld     qword ptr [ecx + 0x70]
        fadd    qword ptr [g_0078d0c0]
        fst     qword ptr [ecx + 0x70]
        fcomp   st(2)
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_6740ce
        /* __emit: MSVC6 encodes fstp st(0) as DD D8 only via raw bytes */
        __emit 0xDD
        __emit 0xD8
L_674101:
        mov     eax, dword ptr [ecx + 0x88]
        push    ebp
        mov     ebp, dword ptr [ecx + 0x84]
        cmp     ebp, eax
        je      L_67419b
        push    ebx
        push    esi
        push    edi
        lea     ebx, [ebp + 0xc]
L_67411c:
        fld     qword ptr [g_7971f8]
        fadd    qword ptr [ebx - 8]
        fcomp   st(1)
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L_674182
        mov     edi, dword ptr [ecx + 0x88]
        cmp     ebx, edi
        je      L_674177
        mov     edx, edi
        sub     edx, ebx
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        mov     esi, ebp
        jle     L_674177
        mov     dword ptr [esp + 0x18], edx
L_674156:
        lea     eax, [esi + 0xc]
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [esi + 4], edx
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [esi + 8], ecx
        mov     esi, eax
        dec     dword ptr [esp + 0x18]
        jne     L_674156
        mov     ecx, dword ptr [esp + 0x10]
L_674177:
        add     edi, -0xc
        mov     dword ptr [ecx + 0x88], edi
        jmp     L_674188
L_674182:
        add     ebp, 0xc
        add     ebx, 0xc
L_674188:
        cmp     ebp, dword ptr [ecx + 0x88]
        jne     L_67411c
        pop     edi
        fstp    qword ptr [ecx + 0x2c]
        pop     esi
        pop     ebx
        pop     ebp
        pop     ecx
        ret     8
L_67419b:
        fstp    qword ptr [ecx + 0x2c]
        pop     ebp
        pop     ecx
        ret     8
    }
}
