/*
 * FUN_005ef7f0 (65 B) — __thiscall (ECX = this), returns bool in AL.
 *
 * If FUN_0050E1B0(this->1AC) == -1, returns true. Otherwise calls
 * virtual method at [this->78]+4 and returns
 * [ret+0x4C] <= FUN_0050E1B0(this->1AC).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0050e1b0(int param);

__declspec(naked) int __stdcall FUN_005ef7f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x1AC]
        push    eax
        call    FUN_0050e1b0
        add     esp, 0x4
        cmp     eax, -0x1
        jnz     l_80b
        mov     al, 0x1
        pop     esi
        ret
    l_80b:
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [edx + 0x4]
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x1AC]
        push    eax
        call    FUN_0050e1b0
        mov     ecx, dword ptr [edi + 0x4C]
        add     esp, 0x4
        cmp     eax, ecx
        pop     edi
        setge   al
        pop     esi
        ret
    }
}
