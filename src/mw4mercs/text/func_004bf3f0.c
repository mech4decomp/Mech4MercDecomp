/*
 * FUN_004bf3f0 (184 B) — MLR object method (__thiscall, RET 0x4). Resizes
 * the sub-object array [edi+0x144] to param_1 entries (alloc via
 * FUN_004084d0, copy old, free via FUN_004084e0), updates [edi+0x148] and
 * [edi+0x14c], then zero-fills the array (rep stosd).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084d0(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_004bf3f0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 0x148]
        mov     esi, ebp
        and     esi, 0xffff
        cmp     esi, ebx
        jz      L_bf489
        test    esi, esi
        jbe     L_bf46a
        /* __emit: MSVC6 encodes lea reg,[reg*4] with a different SIB/disp form */
        __emit 0x8D
        __emit 0x04
        __emit 0xB5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x144]
        add     esp, 4
        test    edx, edx
        mov     ebp, eax
        jz      L_bf45e
        cmp     esi, ebx
        mov     ecx, esi
        jc      L_bf434
        mov     ecx, ebx
L_bf434:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_bf44f
        lea     eax, [ebp + ecx*4]
        sub     edx, ebp
        inc     ecx
L_bf442:
        mov     ebx, dword ptr [edx + eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_bf442
L_bf44f:
        mov     eax, dword ptr [edi + 0x144]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_bf45e:
        mov     dword ptr [edi + 0x144], ebp
        mov     ebp, dword ptr [esp + 0x14]
        jmp     L_bf483
L_bf46a:
        mov     ecx, dword ptr [edi + 0x144]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x144], 0
L_bf483:
        mov     dword ptr [edi + 0x148], esi
L_bf489:
        test    bp, bp
        mov     word ptr [edi + 0x14c], bp
        jbe     L_bf4a1
        mov     edi, dword ptr [edi + 0x144]
        mov     ecx, esi
        xor     eax, eax
        rep stosd
L_bf4a1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
