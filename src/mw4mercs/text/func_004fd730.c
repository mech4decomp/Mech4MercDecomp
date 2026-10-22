/*
 * FUN_004FD730 (236 B) — NameTable entry-array setter. If the new count
 * (param_1) differs from this[1], frees the old array (virtual call),
 * allocates a new one sized count*0x1c+4, initializes each entry
 * (vtable 0x76cd9c/0x775ea4, sub-object via FUN_0041fc80), and stores
 * the new array pointer.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0041fc80(void);
extern int g_007b8c10;

__declspec(naked) void __fastcall FUN_004fd730(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 4]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, eax
        mov     dword ptr [esp + 0xc], ebp
        jz      l_d815
        mov     ecx, dword ptr [ebp]
        xor     ebx, ebx
        cmp     edi, ebx
        jbe     l_d808
        cmp     ecx, ebx
        jz      l_d760
        mov     eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax]
    l_d760:
        lea     ecx, [edi*8 + 0]
        sub     ecx, edi
        lea     edx, [ecx*4 + 4]
        push    edx
        mov     dword ptr [ebp + 4], edi
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      l_d7fc
        push    esi
        lea     esi, [eax + 4]
        mov     dword ptr [eax], edi
        lea     eax, [edi - 1]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x18], esi
        jl      l_d7ef
        lea     ebp, [eax + 1]
    l_d794:
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        push    ebx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00412570
        push    8
        mov     dword ptr [esi], 0x775ea4
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebx
        jz      l_d7dc
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        jmp     l_d7de
    l_d7dc:
        xor     edi, edi
    l_d7de:
        mov     dword ptr [esi + 0x14], edi
        add     esi, 0x1c
        dec     ebp
        jnz     l_d794
        mov     esi, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x10]
    l_d7ef:
        mov     eax, esi
        pop     esi
        pop     edi
        mov     dword ptr [ebp], eax
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    l_d7fc:
        xor     eax, eax
        pop     edi
        mov     dword ptr [ebp], eax
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    l_d808:
        cmp     ecx, ebx
        jz      l_d812
        mov     edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
    l_d812:
        mov     dword ptr [ebp], ebx
    l_d815:
        pop     edi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }
}
