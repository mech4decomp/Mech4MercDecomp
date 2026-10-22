/*
 * FUN_004bf4b0 (188 B) — MLR object method (__thiscall, RET 0x4). Resizes
 * the sub-object array [edi+0x144] to param_1 entries (alloc via
 * FUN_004084d0, copy old, free via FUN_004084e0), updates [edi+0x148] and
 * [edi+0x14c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084d0(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_004bf4b0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebp, dword ptr [edi + 0x148]
        mov     esi, ebx
        and     esi, 0xffff
        cmp     esi, ebp
        jz      L_bf55e
        test    esi, esi
        jbe     L_bf53f
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
        mov     ebx, eax
        jz      L_bf521
        cmp     esi, ebp
        mov     ecx, esi
        jc      L_bf4f8
        mov     ecx, ebp
L_bf4f8:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_bf512
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
L_bf505:
        mov     ebp, dword ptr [edx + eax]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_bf505
L_bf512:
        mov     eax, dword ptr [edi + 0x144]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_bf521:
        mov     dword ptr [edi + 0x144], ebx
        mov     ebx, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x148], esi
        mov     word ptr [edi + 0x14c], bx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
L_bf53f:
        mov     ecx, dword ptr [edi + 0x144]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x144], 0
        mov     dword ptr [edi + 0x148], esi
L_bf55e:
        mov     word ptr [edi + 0x14c], bx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
