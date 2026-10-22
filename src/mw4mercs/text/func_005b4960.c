/*
 * FUN_005b4960 (315 B) — __thiscall method, RET 8 (2 stack params).
 *
 * Dispatches on *(*(this+0xe0)+0x14): if ==1, frees param_2 and returns 0.
 * Otherwise tests a bit in this+0x10; if set, frees param_2 and returns 0.
 * If clear, scans an array of entries (param_2) for a matching type; on a
 * match (type 0x12) copies data and returns 1, else stores param_2 and
 * returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern char __stdcall FUN_00415230(void);

__declspec(naked) void __stdcall FUN_005b4960(void)
{
    

extern int DAT_007f2104;
__asm {
sub     esp, 0x10
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x1
        push    esi
        push    edi
        jnz     else_branch
        mov     esi, dword ptr [esp + 0x28]
        test    esi, esi
        jz      ret0
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      cleanup
del_eax:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
cleanup:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     0x8

else_branch:
        mov     ecx, dword ptr [ebp + 0x10]
        shr     ecx, 0x13
        test    cl, 0x1
        jz      bitclear
        mov     esi, dword ptr [esp + 0x28]
        test    esi, esi
        jz      ret0
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      cleanup
        jmp     del_eax

bitclear:
        mov     ebx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [ebx + 0x4]
        xor     edi, edi
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], edi
        jbe     loopexit
        mov     esi, dword ptr [eax + 0x14]
loop_top:
        cmp     esi, 0x9
        jz      loopinc
        cmp     esi, 0x14
        jz      loopinc
        cmp     esi, 0x16
        jz      loopinc
        cmp     esi, 0x15
        jz      loopinc
        mov eax, dword ptr [DAT_007f2104]
        mov     edx, dword ptr [ebx]
        push    eax
        mov     eax, dword ptr [edi + edx*1 + 0x8]
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jnz     loopinc
        cmp     esi, 0x12
        jz      special
loopinc:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ebx + 0x4]
        inc     eax
        add     edi, 0x38
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], eax
        jc      loop_top
loopexit:
        mov     dword ptr [ebp + 0x130], ebx
ret0:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     0x8

special:
        mov     eax, dword ptr [ebp + 0xd8]
        mov     edx, dword ptr [esp + 0x24]
        fld     dword ptr [eax + 0x5c]
        lea     esi, [eax + 0x20]
        mov     edi, edx
        mov     ecx, 0xc
        rep     movsd
        fstp    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [eax + 0x6c]
        mov     eax, dword ptr [eax + 0x7c]
        mov     dword ptr [edx + 0x1c], ecx
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [edx + 0x2c], eax
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x1c], eax
        mov     byte ptr [ebp + 0x53d], 0x1
        mov     byte ptr [ebp + 0x53e], 0x0
        call    dword ptr [edx + 0xd8]
        test    ebx, ebx
        jz      ret1
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      del_ebx
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
del_ebx:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
ret1:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }


}
