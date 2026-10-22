/*
 * FUN_004FD3C0 (352 B) — NameTable entry-array rebuild. Given a source
 * entry array (param_1), reallocates this object's entry array to match
 * its count, initializing each new entry (vtable 0x76cd9c/0x775ea4,
 * sub-object via FUN_0041fc80), then copies the source entries across.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcd0(void);
extern int g_007b8c10;

__declspec(naked) void __fastcall FUN_004fd3c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 4]
        xor     ebp, ebp
        cmp     edi, ebp
        mov     ebx, ecx
        jbe     l_d507
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
        cmp     edi, dword ptr [ebx + 4]
        jz      l_d4aa
        cmp     edi, ebp
        mov     ecx, dword ptr [ebx]
        jbe     l_d49e
        cmp     ecx, ebp
        jz      l_d3fd
        mov     edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
    l_d3fd:
        lea     eax, [edi*8 + 0]
        sub     eax, edi
        lea     ecx, [eax*4 + 4]
        push    ecx
        mov     dword ptr [ebx + 4], edi
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      l_d498
        lea     esi, [eax + 4]
        mov     dword ptr [eax], edi
        lea     eax, [edi - 1]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], esi
        jl      l_d492
        inc     eax
        mov     dword ptr [esp + 0x1c], eax
    l_d432:
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        mov     ecx, esi
        call    FUN_00415180
        push    ebp
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi + 8], ebp
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00412570
        push    8
        mov     dword ptr [esi], 0x775ea4
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebp
        jz      l_d47b
        push    ebp
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        jmp     l_d47d
    l_d47b:
        xor     edi, edi
    l_d47d:
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x14], edi
        add     esi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x1c], eax
        jnz     l_d432
        mov     esi, dword ptr [esp + 0x10]
    l_d492:
        mov     eax, esi
        mov     dword ptr [ebx], eax
        jmp     l_d4aa
    l_d498:
        xor     eax, eax
        mov     dword ptr [ebx], eax
        jmp     l_d4aa
    l_d49e:
        cmp     ecx, ebp
        jz      l_d4a8
        mov     eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax]
    l_d4a8:
        mov     dword ptr [ebx], ebp
    l_d4aa:
        mov     eax, dword ptr [ebx + 4]
        cmp     eax, ebp
        jbe     l_d516
        mov     esi, dword ptr [ebx]
        mov     ecx, dword ptr [esp + 0x14]
        add     esi, 0x14
        lea     edi, [ecx + 0x14]
        mov     ebp, eax
    l_d4bf:
        lea     edx, [edi - 4]
        push    edx
        lea     ecx, [esi - 4]
        call    FUN_00412740
        mov     eax, dword ptr [edi + 4]
        mov     ecx, dword ptr [esi]
        mov     dword ptr [esi + 4], eax
        call    FUN_0041fcb0
        mov     ebx, dword ptr [edi]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      l_d4f4
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [esi]
        push    eax
        call    FUN_0041fcd0
    l_d4f4:
        add     edi, 0x1c
        add     esi, 0x1c
        dec     ebp
        jnz     l_d4bf
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    l_d507:
        mov     ecx, dword ptr [ebx]
        cmp     ecx, ebp
        jz      l_d516
        mov     edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
        mov     dword ptr [ebx + 4], ebp
    l_d516:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }
}
