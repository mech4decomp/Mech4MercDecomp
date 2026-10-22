/*
 * FUN_004e2aa0 (113 B) — MLR/Adept: iterate a 2D grid region dispatching
 * FUN_004e9d00. __thiscall (ECX = this), no stack args (RET).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e9d00(void);

__declspec(naked) void FUN_004e2aa0(void)
{
    __asm {
        sub     esp, 0xc
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x16b]
        mov     dword ptr [esp + 0x4], ecx
        test    edx, edx
        jle     loc_4e2b0d
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x16a]
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     ebp, ebp
        mov     dword ptr [esp + 0x10], edx
        mov     edi, eax
        shl     eax, 0x5
        add     eax, edi
        lea     eax, [edi + eax*0x4]
        shl     eax, 0x2
        mov     dword ptr [esp + 0x18], eax
loc_4e2ad6:
        test    edi, edi
        jle     loc_4e2afc
        mov     esi, dword ptr [ecx + 0x17c]
        add     esi, ebp
        mov     ebx, edi
loc_4e2ae4:
        mov     ecx, esi
        call    FUN_004e9d00
        add     esi, 0x214
        dec     ebx
        jnz     loc_4e2ae4
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
loc_4e2afc:
        mov     edx, dword ptr [esp + 0x10]
        add     ebp, eax
        dec     edx
        mov     dword ptr [esp + 0x10], edx
        jnz     loc_4e2ad6
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
loc_4e2b0d:
        add     esp, 0xc
        ret
    }
}
