/*
 * FUN_004c4570 (139 B) — MLR GroupElement __thiscall. Calls
 * FUN_004179b0, conditionally invokes virtual methods, and does an
 * FPU compare against a global to decide flag bits in field 0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;

extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004c4570(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    edi
        mov     edi, ecx
        push    esi
        lea     ecx, [edi+0x144]
        call    FUN_004179b0
        mov     eax, dword ptr [edi+0x18]
        mov     ecx, eax
        shr     ecx, 0x1
        test    cl, 0x1
        mov     dword ptr [esi+0x10], edi
        jnz     L_004c45ac
        mov     edx, dword ptr [edi]
        and     eax, 0xffffff7f
        or      eax, 0x48
        mov     ecx, edi
        mov     dword ptr [edi+0x18], eax
        call    dword ptr [edx+0x10]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+0x14]
    L_004c45ac:
        mov     ecx, dword ptr [esi+0x18]
        test    cl, 0xc0
        jnz     L_004c45f6
        fld     dword ptr [esi+0xec]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_004c45dc
        mov     edx, ecx
        shr     edx, 0x3
        test    dl, 0x1
        jnz     L_004c45dc
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        jmp     L_004c45e5
    L_004c45dc:
        and     ecx, 0xffffff7f
        or      ecx, 0x44
    L_004c45e5:
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi+0x18], ecx
        mov     ecx, esi
        call    dword ptr [eax+0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x14]
    L_004c45f6:
        pop     edi
        pop     esi
        ret     0x4
    }
}
