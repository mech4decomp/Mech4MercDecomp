/*
 * FUN_004bf380 (110 B) — MLR object method (__thiscall, RET 0x8). Stores
 * param_2 into the sub-object array [ecx+0x144][param_1&0xffff], sets
 * [esi+0x10]=ecx, and unless [esi+0x18]&0xc0==0xc0 computes a flag via FPU
 * compare (fnstsw/test ah) and calls virtual methods (vtable+0x10/+0x14).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;

__declspec(naked) void FUN_004bf380(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 0x144]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        and     eax, 0xffff
        mov     dword ptr [esi + 0x10], ecx
        mov     ecx, dword ptr [esi + 0x18]
        mov     dword ptr [edx + eax*4], esi
        mov     eax, ecx
        and     eax, 0xc0
        cmp     al, 0xc0
        jz      L_bf3ea
        fld     dword ptr [esi + 0xec]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_bf3d0
        mov     edx, ecx
        shr     edx, 3
        test    dl, 1
        jnz     L_bf3d0
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        jmp     L_bf3d9
L_bf3d0:
        and     ecx, 0xffffff7f
        or      ecx, 0x44
L_bf3d9:
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
L_bf3ea:
        pop     esi
        ret     8
    }
}
