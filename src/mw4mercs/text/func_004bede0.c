/*
 * FUN_004bede0 (515 B) — MLR object constructor (__thiscall, RET 0x14).
 * Calls FUN_004c66b0, zeroes [edi+0x144]/[edi+0x148], sets up vtable
 * 0x771454 and several lookup-table-derived fields from [edi+0x18], then
 * (if param_5) reads a sub-object list via virtual method (vtable+0x20),
 * allocates/copies the sub-object array, and iterates building each element
 * via FUN_004c6920 with FPU flag computation (fnstsw/test ah) and virtual
 * calls (vtable+0x10/+0x14).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004c66b0(void);
extern void FUN_004084d0(void);
extern void FUN_004084e0(void);
extern void FUN_004c6920(void);

extern int g_007b36f0[];
extern int g_007b3b28[];
extern int g_007b37f0[];
extern float g_0076c5b0;

__declspec(naked) void FUN_004bede0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        push    esi
        push    ebx
        mov     edi, ecx
        push    eax
        call    FUN_004c66b0
        xor     eax, eax
        mov     dword ptr [edi + 0x144], eax
        mov     dword ptr [edi + 0x148], eax
        mov     eax, dword ptr [edi + 0x18]
        mov     ecx, eax
        shr     ecx, 2
        and     ecx, 0x3f
        mov     edx, dword ptr [g_007b36f0 + ecx*4]
        mov     ecx, eax
        shr     ecx, 5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*2]
        shl     ecx, 2
        mov     dword ptr [edi + 0x1c], edx
        mov     edx, dword ptr [g_007b3b28 + ecx]
        shr     eax, 0xa
        mov     dword ptr [edi + 0x130], edx
        mov     edx, dword ptr [g_007b3b28 + ecx + 4]
        mov     ecx, dword ptr [g_007b3b28 + ecx + 8]
        and     eax, 1
        mov     dword ptr [edi + 0x134], edx
        mov     edx, dword ptr [g_007b37f0 + eax*4]
        mov     al, byte ptr [esp + 0x24]
        test    al, al
        mov     dword ptr [edi], 0x771454
        mov     dword ptr [edi + 0x138], ecx
        mov     dword ptr [edi + 0x13c], edx
        jz      L_befda
        cmp     esi, 0xb
        jl      L_bee8b
        mov     edx, dword ptr [ebx]
        lea     eax, [edi + 0x14c]
        push    2
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x20]
        jmp     L_beea5
L_bee8b:
        mov     eax, dword ptr [ebx]
        push    4
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]
        mov     dx, word ptr [esp + 0x24]
        mov     word ptr [edi + 0x14c], dx
L_beea5:
        mov     ebp, dword ptr [edi + 0x148]
        xor     eax, eax
        mov     ax, word ptr [edi + 0x14c]
        mov     esi, eax
        and     esi, 0xffff
        cmp     esi, ebp
        mov     dword ptr [esp + 0x24], eax
        jz      L_bef48
        test    esi, esi
        jbe     L_bef25
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
        jz      L_bef19
        cmp     esi, ebp
        mov     ecx, esi
        jc      L_beef0
        mov     ecx, ebp
L_beef0:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_bef0a
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
L_beefd:
        mov     ebp, dword ptr [edx + eax]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_beefd
L_bef0a:
        mov     eax, dword ptr [edi + 0x144]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_bef19:
        mov     dword ptr [edi + 0x144], ebx
        mov     ebx, dword ptr [esp + 0x18]
        jmp     L_bef3e
L_bef25:
        mov     ecx, dword ptr [edi + 0x144]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x144], 0
L_bef3e:
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [edi + 0x148], esi
L_bef48:
        xor     ebp, ebp
        test    ax, ax
        jbe     L_befda
L_bef53:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [edi + 0x144]
        push    0
        mov     edx, ebp
        push    ecx
        and     edx, 0xffff
        push    ebx
        lea     esi, [eax + edx*4]
        call    FUN_004c6920
        mov     dword ptr [esi], eax
        mov     esi, eax
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, ecx
        and     edx, 0xc0
        add     esp, 0xc
        cmp     dl, 0xc0
        mov     dword ptr [esi + 0x10], edi
        jz      L_befcc
        fld     dword ptr [esi + 0xec]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fnstsw ax */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_befb2
        mov     eax, ecx
        shr     eax, 3
        test    al, 1
        jnz     L_befb2
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        jmp     L_befbb
L_befb2:
        and     ecx, 0xffffff7f
        or      ecx, 0x44
L_befbb:
        mov     edx, dword ptr [esi]
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
L_befcc:
        inc     ebp
        cmp     bp, word ptr [edi + 0x14c]
        jc      L_bef53
L_befda:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    }
}
