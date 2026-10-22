/*
 * FUN_00416840 (123 B) — DB item/pool lookup helper (__thiscall, one
 * stack arg). Releases the current node via FUN_00416820, then scans
 * the pool array at [this+4]+0xc for a free slot starting at the arg.
 * Allocates a node (FUN_004084c0 + FUN_00416bc0), stores it at
 * [this+0x14], and returns the slot index in [this+0x10] on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007b8810;
extern void __cdecl FUN_00416820(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00416bc0(void);

__declspec(naked) void FUN_00416840(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        call    FUN_00416820
        mov     edi, dword ptr [ebp + 4]
        mov     ebx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0x10]
        add     edi, 0xc
        cmp     ebx, eax
        mov     dword ptr [ebp + 0x10], 0xffffffff
        jnc     done
scan:
        mov     eax, dword ptr [edi]
        mov     esi, dword ptr [eax + ebx*4]
        test    esi, esi
        jz      next
        mov     ecx, dword ptr [g_007b8810]
        push    ecx
        push    0x14
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      zero
        push    esi
        mov     ecx, eax
        call    FUN_00416bc0
        jmp     have
zero:
        xor     eax, eax
have:
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        mov     dword ptr [ebp + 0x14], eax
        call    dword ptr [edx + 0x18]
        test    eax, eax
        jnz     found
        mov     ecx, ebp
        call    FUN_00416820
next:
        mov     eax, dword ptr [edi + 4]
        inc     ebx
        cmp     ebx, eax
        jc      scan
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
found:
        mov     dword ptr [ebp + 0x10], ebx
done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
