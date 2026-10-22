/*
 * FUN_00488640 (169 B) __thiscall destructor: frees the d4/d8 and dc/e0
 * growable arrays plus the 0x10-entry slot array, then calls FUN_0048a8c0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0048a8c0(void);

__declspec(naked) void FUN_00488640(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xe0]
        xor     ebp, ebp
        cmp     eax, ebp
        push    edi
        mov     dword ptr [esi], 0x76fcf8
        jz      loc_488673
        mov     eax, dword ptr [esi+0xdc]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0xdc], ebp
        mov     dword ptr [esi+0xe0], ebp
loc_488673:
        cmp     dword ptr [esi+0xd8], ebp
        jz      loc_488696
        mov     ecx, dword ptr [esi+0xd4]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0xd4], ebp
        mov     dword ptr [esi+0xd8], ebp
loc_488696:
        mov     eax, dword ptr [esi+0xdc]
        cmp     eax, ebp
        jz      loc_4886a9
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_4886a9:
        mov     eax, dword ptr [esi+0xd4]
        cmp     eax, ebp
        jz      loc_4886bc
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_4886bc:
        lea     edi, [esi+0xd4]
        mov     ebx, 0x10
loc_4886c7:
        mov     eax, dword ptr [edi-8]
        sub     edi, 8
        cmp     eax, ebp
        jz      loc_4886da
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_4886da:
        dec     ebx
        jnz     loc_4886c7
        mov     ecx, esi
        call    FUN_0048a8c0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
