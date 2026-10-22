/*
 * FUN_005BFAE0 (528 B) — __thiscall (this in ecx) / __stdcall (RET 0x34,
 * 13 stack params).
 *
 * In-.text data block at 0x5BFAC8. Iterates over an array of objects
 * (this+0x14), for each entry allocates a 0x80-byte buffer (FUN_006F3C80),
 * copies a string from obj+0x14, calls FUN_0050E1B0, and fills a set of
 * output dword arrays (indexed by ebx) with per-object fields/bit flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F4230(void);
extern void __cdecl FUN_006F3C80(void);
extern void __cdecl FUN_0050E1B0(void);

__declspec(naked) void __cdecl FUN_005BFAE0(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 0x24]
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        sub     ecx, ebx
        mov     dword ptr [esp + 8], ecx
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, ebx
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x34]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x38]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [esp + 0x40]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x44]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x48]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    ebp
        xor     edx, edx
        push    esi
        sub     ecx, ebx
        push    edi
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x4c], ecx
L5bfb58:
        test    eax, eax
        je      L5bfcd7
        mov     ebp, dword ptr [eax]
        test    ebp, ebp
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x24], eax
        je      L5bfcd7
        cmp     edx, dword ptr [esp + 0x5c]
        jge     L5bfcc2
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      L5bfb8d
        push    eax
        call    FUN_006F4230
        mov     dword ptr [ebx], 0
L5bfb8d:
        push    0
        push    0x80
        call    FUN_006F3C80
        mov     edi, dword ptr [ebp + 0x14]
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     dword ptr [ebx], edx
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0x3c]
        mov     edx, dword ptr [ecx]
        push    edx
        call    FUN_0050E1B0
        mov     ecx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [ebp + 0x44]
        mov     edx, dword ptr [ebp + 0x48]
        mov     dword ptr [ecx + ebx], eax
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 4
        test    esi, esi
        mov     dword ptr [eax + ebx], edx
        je      L5bfc54
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov     eax, dword ptr [eax + 0x6c]
        mov     ecx, dword ptr [esp + 0x2c]
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x1a0]
        mov     dword ptr [ecx + ebx], eax
        mov     eax, dword ptr [esp + 0x34]
        and     edx, 1
        mov     dword ptr [eax + ebx], edx
        mov     eax, dword ptr [esi + 0x1a0]
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, eax
        shr     ecx, 1
        and     ecx, 1
        mov     dword ptr [edx + ebx], ecx
        mov     edx, dword ptr [esp + 0x38]
        mov     ecx, eax
        shr     ecx, 2
        and     ecx, 1
        mov     dword ptr [edx + ebx], ecx
        mov     edx, dword ptr [esp + 0x40]
        mov     ecx, eax
        shr     ecx, 3
        and     ecx, 1
        mov     dword ptr [edx + ebx], ecx
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x48]
        shr     eax, 4
        and     eax, 1
        mov     dword ptr [ecx + ebx], eax
        mov     dword ptr [edx + ebx], 0
        jmp     L5bfca1
L5bfc54:
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [eax + ebx], 0
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [ecx + ebx], 0
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [edx + ebx], 0
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [eax + ebx], 0
        mov     eax, dword ptr [esp + 0x48]
        mov     dword ptr [ecx + ebx], 0
        mov     dword ptr [edx + ebx], 0
        mov     dword ptr [eax + ebx], 0
L5bfca1:
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [edx + ebx], ecx
        mov     ecx, dword ptr [esp + 0x10]
        inc     ecx
        mov     dword ptr [esp + 0x10], ecx
        add     ebx, 4
        mov     edx, ecx
        jmp     L5bfb58
L5bfcc2:
        mov     ecx, dword ptr [esp + 0x58]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], edx
        mov     eax, 1
        pop     ebx
        add     esp, 0x18
        ret     0x34
L5bfcd7:
        mov     eax, dword ptr [esp + 0x58]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        mov     eax, 1
        pop     ebx
        add     esp, 0x18
        ret     0x34
        nop
        nop
        nop
        nop
    }
}
