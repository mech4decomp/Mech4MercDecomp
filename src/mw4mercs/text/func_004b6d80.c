/*
 * FUN_004b6d80 (184 B) — MLR element array resize (__thiscall, 1 arg).
 * Resizes the element array at this+0x144 to (arg1 & 0xffff) entries:
 * allocates a new buffer via FUN_004084d0, copies the min(old,new)
 * entries, frees the old buffer via FUN_004084e0, and zero-fills the
 * tail via rep stosd. Updates this+0x148 (count) and this+0x14c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004b6d80(void)
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
        jz      L_6E19
        test    esi, esi
        jbe     L_6DFA
        lea     eax, [esi*4]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x144]
        add     esp, 0x4
        test    edx, edx
        mov     ebp, eax
        jz      L_6DEE
        cmp     esi, ebx
        mov     ecx, esi
        jc      L_6DC4
        mov     ecx, ebx
    L_6DC4:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_6DDF
        lea     eax, [ebp + ecx*4]
        sub     edx, ebp
        inc     ecx
    L_6DD2:
        mov     ebx, dword ptr [edx + eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_6DD2
    L_6DDF:
        mov     eax, dword ptr [edi + 0x144]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_6DEE:
        mov     dword ptr [edi + 0x144], ebp
        mov     ebp, dword ptr [esp + 0x14]
        jmp     L_6E13
    L_6DFA:
        mov     ecx, dword ptr [edi + 0x144]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x144], 0x0
    L_6E13:
        mov     dword ptr [edi + 0x148], esi
    L_6E19:
        test    bp, bp
        mov     word ptr [edi + 0x14c], bp
        jbe     L_6E31
        mov     edi, dword ptr [edi + 0x144]
        mov     ecx, esi
        xor     eax, eax
        rep stosd
    L_6E31:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
