/*
 * FUN_0048aa60 (396 B) __stdcall (RET 0x14): grows the light-slot array
 * (0x7da7dc) to 2x capacity and appends a light entry; returns index.
 *
 * CFLAGS: /O1
 */

extern int g_007da7d8;
extern int g_007da7d4;
extern int g_007da7dc;
extern int g_007b957c;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0048b910(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0048aa60(void)
{
    __asm {
        mov     ecx, dword ptr [g_007da7d8]
        mov     eax, dword ptr [g_007da7d4]
        sub     esp, 0xc
        cmp     ecx, eax
        jl      loc_48aa7b
        or      eax, 0xffffffff
        add     esp, 0xc
        ret     0x14
loc_48aa7b:
        mov     eax, dword ptr [g_007da7dc]
        push    ebp
        push    esi
        mov     esi, dword ptr [eax+4]
        xor     ebp, ebp
        cmp     ecx, esi
        jl      loc_48ab99
        mov     ecx, dword ptr [g_007b957c]
        push    ebx
        push    edi
        push    ecx
        call    FUN_006f4950
        mov     ebx, dword ptr [g_007da7dc]
        mov     eax, dword ptr [ebx+4]
        lea     edi, [esi+esi*1]
        cmp     edi, eax
        mov     dword ptr [esp+0x18], edi
        mov     dword ptr [esp+0x14], ebx
        jz      loc_48ab8c
        cmp     edi, ebp
        jbe     loc_48ab7a
        mov     edx, edi
        shl     edx, 5
        add     edx, 4
        push    edx
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      loc_48ab16
        lea     esi, [eax+4]
        mov     dword ptr [eax], edi
        lea     eax, [edi-1]
        cmp     eax, ebp
        mov     dword ptr [esp+0x10], esi
        jl      loc_48ab10
        lea     ebx, [eax+1]
loc_48aae9:
        mov     ecx, esi
        call    FUN_004911e0
        mov     dword ptr [esi+0xc], ebp
        mov     dword ptr [esi+0x10], ebp
        mov     dword ptr [esi+0x14], ebp
        mov     dword ptr [esi+0x18], ebp
        mov     dword ptr [esi+0x1c], ebp
        mov     dword ptr [esi+8], ebp
        add     esi, 0x20
        dec     ebx
        jnz     loc_48aae9
        mov     esi, dword ptr [esp+0x10]
        mov     ebx, dword ptr [esp+0x14]
loc_48ab10:
        mov     dword ptr [esp+0x10], esi
        jmp     loc_48ab1c
loc_48ab16:
        mov     dword ptr [esp+0x10], ebp
        mov     esi, ebp
loc_48ab1c:
        mov     edx, dword ptr [ebx]
        cmp     edx, ebp
        jz      loc_48ab76
        mov     ecx, dword ptr [ebx+4]
        cmp     edi, ecx
        jnc     loc_48ab2b
        mov     ecx, edi
loc_48ab2b:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      loc_48ab60
        mov     eax, ecx
        shl     eax, 5
        mov     ebx, edx
        add     eax, esi
        sub     ebx, esi
        lea     edx, [ecx+1]
loc_48ab40:
        lea     esi, [ebx+eax*1]
        mov     edi, eax
        dec     edx
        mov     ecx, 8
        sub     eax, 0x20
        cmp     edx, ebp
        rep     movsd
        ja      loc_48ab40
        mov     edi, dword ptr [esp+0x18]
        mov     esi, dword ptr [esp+0x10]
        mov     ebx, dword ptr [esp+0x14]
loc_48ab60:
        mov     eax, dword ptr [ebx]
        cmp     eax, ebp
        jz      loc_48ab76
        mov     ecx, dword ptr [eax-4]
        add     eax, -4
        push    eax
        dec     ecx
        call    FUN_004084e0
        add     esp, 4
loc_48ab76:
        mov     dword ptr [ebx], esi
        jmp     loc_48ab89
loc_48ab7a:
        mov     ecx, dword ptr [ebx]
        cmp     ecx, ebp
        jz      loc_48ab87
        push    3
        call    FUN_0048b910
loc_48ab87:
        mov     dword ptr [ebx], ebp
loc_48ab89:
        mov     dword ptr [ebx+4], edi
loc_48ab8c:
        call    FUN_006f49a0
        mov     ecx, dword ptr [g_007da7d8]
        pop     edi
        pop     ebx
loc_48ab99:
        mov     edx, dword ptr [g_007da7dc]
        mov     esi, dword ptr [edx]
        mov     edx, dword ptr [esp+0x18]
        mov     eax, ecx
        shl     eax, 5
        add     eax, esi
        mov     dword ptr [eax+0xc], edx
        mov     edx, dword ptr [esp+0x20]
        mov     esi, dword ptr [edx]
        mov     edx, dword ptr [edx+4]
        mov     dword ptr [eax], esi
        mov     dword ptr [eax+4], edx
        mov     edx, dword ptr [esp+0x1c]
        mov     dword ptr [eax+0x10], edx
        mov     edx, dword ptr [esp+0x24]
        mov     edx, dword ptr [edx]
        mov     dword ptr [eax+0x1c], edx
        mov     edx, dword ptr [esp+0x28]
        inc     ecx
        mov     dword ptr [eax+0x14], ebp
        mov     dword ptr [eax+0x18], ebp
        pop     esi
        mov     dword ptr [eax+8], edx
        mov     dword ptr [g_007da7d8], ecx
        lea     eax, [ecx-1]
        pop     ebp
        add     esp, 0xc
        ret     0x14
    }
}
