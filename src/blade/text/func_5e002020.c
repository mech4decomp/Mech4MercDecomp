/*
 * FUN_5e002020 (253 B) — BeginScene-style method. Guards against nested calls
 * (flag at +0x4874), acquires several sub-objects, then calls a chain of
 * setup helpers; on failure releases the sub-objects.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * Match: target 100%
 */

extern unsigned long g_5e035010;
extern void __cdecl FUN_5e00e120(void);
extern void __cdecl FUN_5e00e160(void);
extern void __cdecl FUN_5e003a80(void);
extern void __cdecl FUN_5e013670(void);
extern void __cdecl FUN_5e013680(void);
extern void __cdecl FUN_5e0136b0(void);
extern void __cdecl FUN_5e0136c0(void);

__declspec(naked) int __stdcall FUN_5e002020(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x4874]
        and     eax, 0x2
        test    al, al
        jz      L1
        push    0x5e0383bc
        call    dword ptr [g_5e035010]
        mov     eax, 0x80004005
        pop     esi
        ret     4
L1:
        push    ebx
        lea     ebx, [esi + 0x427c]
        push    edi
        mov     ecx, ebx
        call    FUN_5e00e120
        mov     edi, eax
        test    edi, edi
        jl      L2
        lea     ecx, [esi + 0x41f4]
        call    FUN_5e00e120
        mov     edi, eax
        test    edi, edi
        jl      L2
        cmp     dword ptr [esi + 0x4384], -0x1
        jnz     L3
        mov     dword ptr [esi + 0x4384], 0x0
        jmp     L4
L3:
        lea     ecx, [esi + 0x4304]
        call    FUN_5e00e120
        mov     edi, eax
        test    edi, edi
        jl      L2
L4:
        mov     ecx, dword ptr [esi + 0x4874]
        or      ecx, 0x2
        mov     dword ptr [esi + 0x4874], ecx
        mov     ecx, esi
        call    FUN_5e003a80
        mov     ecx, dword ptr [esi + 0x4218]
        lea     edi, [esi + 0x400c]
        push    ecx
        mov     ecx, edi
        call    FUN_5e013670
        mov     edx, dword ptr [esi + 0x4204]
        mov     ecx, edi
        push    edx
        call    FUN_5e013680
        mov     eax, dword ptr [esi + 0x42a0]
        mov     ecx, edi
        push    eax
        call    FUN_5e0136b0
        mov     ecx, dword ptr [esi + 0x428c]
        push    ecx
        mov     ecx, edi
        call    FUN_5e0136c0
        xor     edi, edi
        mov     eax, edi
        pop     edi
        pop     ebx
        pop     esi
        ret     4
L2:
        mov     ecx, ebx
        call    FUN_5e00e160
        lea     ecx, [esi + 0x41f4]
        call    FUN_5e00e160
        lea     ecx, [esi + 0x4304]
        call    FUN_5e00e160
        mov     eax, edi
        pop     edi
        pop     ebx
        pop     esi
        ret     4
    }
}
