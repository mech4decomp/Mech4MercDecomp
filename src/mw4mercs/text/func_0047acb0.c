/*
 * FUN_0047acb0 (203 B) — MLR PMesh buffer-resize (__thiscall, RET 0xc).
 * Reallocates the 0x58 vertex/material buffer to a new count, copying
 * existing entries, or frees it if the new count is 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0047acb0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp+0x8]
        push    ebx
        mov     ebx, dword ptr [esp+0x10]
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi+0x60], eax
        cmp     byte ptr [esp+0x18], 0x1
        push    edi
        mov     dword ptr [esp+0xc], esi
        mov     dword ptr [esi+0x64], ebx
        jnz     L_47ad74
        mov     edi, dword ptr [esi+0x5c]
        cmp     ebx, edi
        jz      L_47ad74
        push    ebp
        xor     ebp, ebp
        cmp     ebx, ebp
        jbe     L_47ad61
        mov     ecx, ebx
        shl     ecx, 0x4
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_47ad00
        lea     edx, [ebx-1]
        mov     dword ptr [esp+0x20], edx
        mov     ebp, eax
L_47ad00:
        mov     esi, dword ptr [esi+0x58]
        test    esi, esi
        jz      L_47ad4d
        cmp     ebx, edi
        mov     edx, ebx
        jc      L_47ad0f
        mov     edx, edi
L_47ad0f:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_47ad44
L_47ad16:
        mov     ecx, edx
        shl     ecx, 0x4
        lea     eax, [ecx+esi]
        lea     ecx, [ecx+ebp+8]
        inc     edx
L_47ad23:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx-8], edi
        mov     edi, dword ptr [eax+4]
        mov     dword ptr [ecx-4], edi
        mov     edi, dword ptr [eax+8]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax+0xc]
        mov     dword ptr [ecx+4], edi
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_47ad23
L_47ad44:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_47ad4d:
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [ecx+0x58], ebp
        pop     ebp
        mov     esi, ecx
        pop     edi
        mov     dword ptr [esi+0x5c], ebx
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
L_47ad61:
        mov     edx, dword ptr [esi+0x58]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi+0x58], ebp
        mov     dword ptr [esi+0x5c], ebx
        pop     ebp
L_47ad74:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
