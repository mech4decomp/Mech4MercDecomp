/*
 * FUN_0047ada0 (148 B) — MLR PMesh update (__thiscall).
 * Iterates over mesh entries, computing per-vertex indices into a
 * material/vertex table and calling FUN_00765f80 for each.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00765f80(void);

__declspec(naked) void FUN_0047ada0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        mov     dword ptr [esp+0xc], ebx
        call    dword ptr [eax+0x8]
        xor     ebp, ebp
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [esp+0x18], eax
        jle     L_47ae2d
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [eax+0x58]
        mov     edx, dword ptr [eax+0x60]
        push    edi
        mov     edi, dword ptr [ebx+0x48]
        mov     ebx, dword ptr [ebx+0x14]
        mov     dword ptr [esp+0x10], ecx
        mov     dword ptr [esp+0x14], edx
L_47add6:
        mov     ecx, dword ptr [esp+0x14]
        xor     eax, eax
        mov     al, byte ptr [ecx+ebp]
        mov     dword ptr [esp+0x18], eax
        xor     eax, eax
        mov     al, byte ptr [edi+esi+2]
        lea     edx, [eax+eax*2]
        lea     eax, [ebx+edx*4]
        push    eax
        xor     eax, eax
        mov     al, byte ptr [edi+esi+1]
        lea     ecx, [eax+eax*2]
        xor     eax, eax
        mov     al, byte ptr [edi+esi]
        lea     edx, [ebx+ecx*4]
        push    edx
        lea     eax, [eax+eax*2]
        lea     ecx, [ebx+eax*4]
        push    ecx
        mov     ecx, dword ptr [esp+0x1c]
        call    FUN_00765f80
        mov     eax, dword ptr [esp+0x18]
        mov     ecx, dword ptr [esp+0x10]
        add     esi, eax
        mov     eax, dword ptr [esp+0x1c]
        inc     ebp
        add     ecx, 0x10
        cmp     ebp, eax
        mov     dword ptr [esp+0x10], ecx
        jl      L_47add6
        pop     edi
L_47ae2d:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }
}
