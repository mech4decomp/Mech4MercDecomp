/*
 * FUN_004a1950 (78 B) — MLR particle/shrapnel: destructor. Sets vtable
 * 0x77029c, refcounts down the object at [this+0x120], frees the buffer at
 * [this+0x128] via FUN_004084e0, then calls FUN_004a35d0. __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004a35d0(void);

__declspec(naked) void FUN_004a1950(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0x120]
        test    ecx, ecx
        mov     dword ptr [esi], 0x77029c
        jz      L1978
        dec     word ptr [ecx+0x10]
        cmp     word ptr [ecx+0x10], 0x0
        jnz     L1978
        test    ecx, ecx
        jz      L1978
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L1978:
        mov     eax, dword ptr [esi+0x128]
        test    eax, eax
        jz      L1995
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1995
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1995:
        mov     ecx, esi
        call    FUN_004a35d0
        pop     esi
        ret
    }
}
