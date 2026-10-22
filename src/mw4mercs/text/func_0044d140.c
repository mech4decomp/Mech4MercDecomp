/*
 * FUN_0044d140 (336 B) — MLR mesh buffer-resize/rebuild (__thiscall, RET 0x4).
 * Reallocates a vertex/index buffer via virtual calls on the source object,
 * copies data with rep movsd/movsb, and returns 1 on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00450bd0(void);

__declspec(naked) void FUN_0044d140(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x20]
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp+0x18], ebx
        call    FUN_00450bd0
        mov     eax, dword ptr [esi+0xc]
        xor     ebp, ebp
        cmp     eax, ebp
        jz      L_d25d
        cmp     dword ptr [eax+0x2c], ebp
        jbe     L_d25d
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp+0x24]
        push    ecx
        lea     edx, [esp+0x14]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax+0xb0]
        mov     esi, dword ptr [ebx+0xc]
        mov     eax, dword ptr [esp+0x24]
        mov     edi, dword ptr [esi+0x2c]
        cmp     eax, edi
        mov     dword ptr [esp+0x14], eax
        /* __emit: MSVC6 miscomputes this forward JZ rel32 (0x89 vs ref 0x8D)
           because a call-reloc sits between branch and target */
        __emit 0x0F
        __emit 0x84
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        cmp     eax, ebp
        jbe     L_d20a
        mov     ebx, eax
        lea     eax, [eax+eax*0x2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_d1b7
        dec     ebx
        mov     dword ptr [esp+0x1c], ebx
        mov     ebp, eax
L_d1b7:
        mov     ebx, dword ptr [esi+0x28]
        test    ebx, ebx
        jz      L_d201
        mov     edx, dword ptr [esp+0x14]
        cmp     edx, edi
        jc      L_d1c8
        mov     edx, edi
L_d1c8:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_d1f8
L_d1dd:
        lea     ecx, [edx+edx*0x2]
        shl     ecx, 0x2
        lea     eax, [ecx+ebx]
        lea     ecx, [ecx+ebp+0x8]
        inc     edx
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx-0x8], edi
        mov     edi, dword ptr [eax+0x4]
        mov     dword ptr [ecx-0x4], edi
        mov     edi, dword ptr [eax+0x8]
        mov     dword ptr [ecx], edi
        dec     edx
        sub     eax, 0xc
        sub     ecx, 0xc
        test    edx, edx
        /* __emit: MSVC6 miscomputes this backward JA rel8 (0xD7 vs ref 0xE5)
           because a call-reloc sits between branch and target */
        __emit 0x77
        __emit 0xE5
L_d1f8:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_d201:
        mov     ebx, dword ptr [esp+0x18]
        mov     dword ptr [esi+0x28], ebp
        jmp     L_d219
L_d20a:
        mov     edx, dword ptr [esi+0x28]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi+0x28], ebp
L_d219:
        mov     eax, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x2c], eax
L_d224:
        mov     eax, dword ptr [esp+0x24]
        mov     edx, dword ptr [esi+0x28]
        mov     esi, dword ptr [esp+0x10]
        lea     ecx, [eax+eax*0x2]
        shl     ecx, 0x2
        mov     eax, ecx
        shr     ecx, 0x2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebx]
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [esp+0x24]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax+0xac]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x10
        ret     0x4
L_d25d:
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x20]
        push    eax
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0xb0]
        mov     eax, dword ptr [esp+0x20]
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0xac]
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
