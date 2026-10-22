/*
 * FUN_0068df80 (156 B) — __thiscall (ECX=this), RET 0x10 (4 params).
 *
 * Builds a 2-entry bitmask table at this+0xa8 from param_3/param_4,
 * stores params into this+0x4/0x8, copies two 0x12-dword blocks
 * from param_3 into this+0x14 and this+0x5c, and sets this+0xa4=-1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0068df80(int param_1, int param_2, int param_3, int param_4)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, ecx
        lea     edx, [eax + 0xa8]
        sub     ebx, ecx
        mov     dword ptr [esp + 0x20], 0x2
    L_68dfa0:
        mov     ecx, dword ptr [edi]
        cmp     ecx, -0x1
        jnz     L_68dfce
        mov     dword ptr [edx], 0x0
        xor     ecx, ecx
        lea     esi, [ebx + edi*0x1]
    L_68dfb2:
        cmp     dword ptr [esi], 0xbf800000
        jz      L_68dfc3
        mov     ebp, 0x1
        shl     ebp, cl
        or      dword ptr [edx], ebp
    L_68dfc3:
        inc     ecx
        add     esi, 0x8
        cmp     ecx, 0x9
        jl      L_68dfb2
        jmp     L_68dfd0
    L_68dfce:
        mov     dword ptr [edx], ecx
    L_68dfd0:
        mov     ecx, dword ptr [esp + 0x20]
        add     edi, 0x4
        add     edx, 0x4
        dec     ecx
        mov     dword ptr [esp + 0x20], ecx
        jnz     L_68dfa0
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [esp + 0x1c]
        lea     edi, [eax + 0x14]
        mov     ecx, 0x12
        mov     esi, edx
        rep movsd
        lea     edi, [eax + 0x5c]
        mov     ecx, 0x12
        mov     esi, edx
        rep movsd
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax + 0xa4], 0xffffffff
        pop     ebx
        ret     0x10
    }
}
