/*
 * FUN_5e002120 (167 B) — EndScene-style method. Guards against being called
 * without BeginScene (flag at +0x4874), releases sub-objects, clears the flag,
 * and on success calls a setup helper with 0xdeadbeef.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * Match: target 100%
 */

extern unsigned long g_5e035010;
extern void __cdecl FUN_5e00e160(void);
extern void __cdecl FUN_5e013670(void);

__declspec(naked) int __stdcall FUN_5e002120(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x4874]
        and     eax, 0x2
        test    al, al
        jnz     L1
        push    0x5e0383e0
        call    dword ptr [g_5e035010]
        mov     eax, 0x80004005
        pop     esi
        ret     4
L1:
        push    edi
        lea     ecx, [esi + 0x427c]
        xor     edi, edi
        call    FUN_5e00e160
        test    eax, eax
        jge     L2
        mov     edi, 0x80004005
L2:
        lea     ecx, [esi + 0x41f4]
        call    FUN_5e00e160
        test    eax, eax
        jge     L3
        mov     edi, 0x80004005
L3:
        mov     eax, dword ptr [esi + 0x4384]
        test    eax, eax
        jnz     L4
        mov     dword ptr [esi + 0x4384], 0xffffffff
        jmp     L5
L4:
        lea     ecx, [esi + 0x4304]
        call    FUN_5e00e160
        test    eax, eax
        jge     L5
        mov     edi, 0x80004005
L5:
        mov     ecx, dword ptr [esi + 0x4874]
        and     ecx, 0xfffffffd
        test    edi, edi
        mov     dword ptr [esi + 0x4874], ecx
        jl      L6
        push    0xdeadbeef
        lea     ecx, [esi + 0x400c]
        call    FUN_5e013670
        xor     edi, edi
L6:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    }
}
