/*
 * FUN_00416180 (63 B) — __fastcall (ECX=this, one stack arg = source ptr):
 * copies [this+0xc] bytes from the source into the buffer returned by
 * FUN_00415e80, then updates [this+0x2c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415e80(void);

__declspec(naked) void FUN_00416180(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     eax, dword ptr [ebx+0x18]
        mov     ebp, dword ptr [ebx+0x14]
        push    esi
        push    edi
        mov     dword ptr [ebx+0x2c], eax
        call    FUN_00415e80
        mov     ecx, dword ptr [ebx+0xc]
        mov     esi, dword ptr [esp+0x14]
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, eax
        mov     eax, dword ptr [ebx+0x14]
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        cmp     eax, ebp
        rep movsb
        jz      L_ret
        mov     dword ptr [ebx+0x2c], eax
    L_ret:
        mov     eax, dword ptr [ebx+0x2c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
