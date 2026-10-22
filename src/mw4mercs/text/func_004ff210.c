/*
 * FUN_004ff210 (226 B) — MLR/Adept object constructor. Allocates a 0x90-byte
 * object, allocates a param_4*0xc element array (zeroed), copies three
 * strings into it (offsets 0xc/0x2c/0x4c), stores two dwords + a vtable
 * pointer, then calls an init routine.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b294;                 /* malloc function pointer */
extern void *g_0076b768;                 /* vtable pointer stored at +0x80 */
extern void __cdecl FUN_0050d5d0(void);
extern void __cdecl FUN_005008b0(void);

__declspec(naked) void FUN_004ff210(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [g_0076b294]
        push    0x90
        call    edi
        push    0x5003c0
        mov     ebx, eax
        push    0x40
        push    0x4
        mov     dword ptr [ebx], 0x0
        call    FUN_0050d5d0
        mov     dword ptr [ebx+0x4], eax
        mov     eax, dword ptr [esp+0x2c]
        lea     esi, [eax+eax*2]
        shl     esi, 0x2
        push    esi
        mov     dword ptr [ebx+0x6c], eax
        call    edi
        mov     ecx, esi
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, eax
        mov     dword ptr [ebx+0x8], edi
        xor     eax, eax
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        mov     edi, dword ptr [esp+0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x14
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [ebx+0xc]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp+0x18]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [ebx+0x2c]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp+0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [ebx+0x4c]
        mov     esi, edi
        mov     edi, edx
        mov     edx, dword ptr [esp+0x28]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [esp+0x20]
        mov     dword ptr [ebx+0x78], ecx
        mov     dword ptr [ebx+0x7c], edx
        mov     dword ptr [ebx+0x80], offset g_0076b768
        call    FUN_005008b0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret
    }
}
