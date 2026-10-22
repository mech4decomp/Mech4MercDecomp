/*
 * FUN_0064cb00 (137 B) — __cdecl (1 stack param), RET.
 * State-machine loop keyed on global DAT_008058ac. For type-3 nodes calls
 * FUN_00649150/FUN_0064d170/FUN_0064c9e0 (and FUN_00562f40 on failure);
 * otherwise polls FUN_006498f0/FUN_00649150 until the global changes.
 * Exits via FUN_0069ae70(0xc,0x1e).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064d170(void);
extern void __cdecl FUN_0064c9e0(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_006498f0(void);
extern void __cdecl FUN_0069ae70(void);

extern int g_008058ac;

__declspec(naked) void __cdecl FUN_0064cb00(void)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ebp, 0xc
l_cb0c:
        cmp     dword ptr [esi + 0x4], 0x3
        jnz     l_cb3e
        mov     edi, dword ptr [esi + 0x14]
        call    FUN_00649150
        call    FUN_0064d170
        push    eax
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        call    FUN_0064c9e0
        add     esp, 0x8
        test    eax, eax
        jnz     l_cb3a
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
l_cb3a:
        mov     esi, edi
        jmp     l_cb6f
l_cb3e:
        push    0x1d
        call    FUN_00562f40
        mov     eax, dword ptr [g_008058ac]
        add     esp, 0x4
        cmp     eax, ebp
        jz      l_cb6f
l_cb51:
        push    0x7b58b4
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     l_cb6f
        call    FUN_00649150
        cmp     dword ptr [g_008058ac], ebp
        jnz     l_cb51
l_cb6f:
        cmp     dword ptr [g_008058ac], 0x11
        jz      l_cb0c
        push    0x1e
        push    ebp
        call    FUN_0069ae70
        add     esp, 0x8
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    }
}
