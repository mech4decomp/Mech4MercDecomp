/*
 * FUN_0060fe30 (118 B) — __thiscall (ECX=this). Animation-blend subsystem
 * teardown/init: clears a 0xff-entry array of 8-byte records (calling a
 * destructor on each), then clears a 1000-entry pointer array + flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_0060fe30(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     dword ptr [ebp+0xc04], 0
        lea     esi, [ebp+0x808]
        lea     edi, [ebp+0x10]
        mov     ebx, 0xff
    loop1:
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      skip1
        mov     ecx, edi
        call    FUN_0041fcb0
    skip1:
        mov     dword ptr [esi], 0
        add     edi, 0x8
        add     esi, 0x4
        dec     ebx
        jnz     loop1
        xor     ebx, ebx
        xor     edi, edi
        lea     esi, [ebp+0xc08]
    loop2:
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        jz      skip2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi+0xfa0], ebx
        mov     byte ptr [edi+ebp+0x2b48], 0
    skip2:
        inc     edi
        add     esi, 0x4
        cmp     edi, 0x3e8
        jl      loop2
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
