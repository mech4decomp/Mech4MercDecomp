/*
 * FUN_005ef840 (145 B) — __thiscall (ECX = this), no stack params, RET.
 *
 * Calls virtual method at [this->78]+4, then FUN_0050E1B0(this->1AC).
 * If result >= 0 and a global flag is clear, computes a clamped delta,
 * calls FUN_0050E1A0, stores into this->1AC, and if the delta was 0
 * calls FUN_005F07C0(this) twice and FUN_00559BE0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0050e1b0(int param);
extern int __cdecl FUN_0050e1a0(int param);
extern void *__stdcall FUN_005f07c0(void);
extern void __stdcall FUN_00559be0(int param);

__declspec(naked) void __stdcall FUN_005ef840(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edi + 0x1AC]
        push    ecx
        mov     ebx, eax
        call    FUN_0050e1b0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jl      l_cd
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xC]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x50]
        mov     eax, dword ptr [edx + 0x50]
        test    eax, eax
        jnz     l_cd
        mov     eax, dword ptr [ebx + 0x4C]
        sub     esi, eax
        cmp     esi, eax
        jl      l_893
        test    esi, esi
        jge     l_895
    l_893:
        xor     esi, esi
    l_895:
        push    esi
        call    FUN_0050e1a0
        add     esp, 0x4
        test    esi, esi
        mov     dword ptr [edi + 0x1AC], eax
        jnz     l_cd
        mov     ecx, edi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3B0]
        test    ecx, ecx
        jz      l_cd
        push    0x1C
        mov     ecx, edi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3B0]
        call    FUN_00559be0
    l_cd:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }


}
