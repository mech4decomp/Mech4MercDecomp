/*
 * FUN_006D5E80 (147 B) — __thiscall (1 stack arg, RET 4). Iterates a
 * 2D table (counts at [this+8]/[this+0xC], base at [this+0x124]) and
 * counts entries whose [eax+4] matches the argument.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006D5E80(void)
{
    __asm {
        sub     esp, 0x10
        push    esi
        mov     esi, ecx
        mov     edx, dword ptr [esi + 8]
        push    edi
        xor     edi, edi
        cmp     edx, edi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 8], edi
        jle     loc_6d5f09
        mov     ecx, dword ptr [esp + 0x1c]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], edx
loc_6d5ea9:
        test    ebp, ebp
        jle     loc_6d5ee1
        mov     esi, dword ptr [esi + 0x124]
        add     esi, dword ptr [esp + 0x14]
        mov     ebx, ebp
loc_6d5eb9:
        mov     edi, dword ptr [esi + 4]
        test    edi, edi
        jle     loc_6d5ed3
loc_6d5ec2:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx]
        cmp     ecx, dword ptr [eax + 4]
        jne     loc_6d5ecd
        inc     dword ptr [esp + 0x10]
loc_6d5ecd:
        add     edx, 4
        dec     edi
        /* __emit: MSVC6 miscomputes this backward jne rel8 (off-by-2: 75 ED vs ref 75 EF) */
        __emit 0x75
        __emit 0xEF
loc_6d5ed3:
        add     esi, 8
        dec     ebx
        jne     loc_6d5eb9
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x1c]
loc_6d5ee1:
        mov     edx, dword ptr [esp + 0x14]
        lea     eax, [ebp*8]
        add     edx, eax
        mov     eax, dword ptr [esp + 0x18]
        dec     eax
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], eax
        jne     loc_6d5ea9
        pop     ebp
        pop     ebx
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x10
        ret     4
loc_6d5f09:
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x10
        ret     4
    }
}
