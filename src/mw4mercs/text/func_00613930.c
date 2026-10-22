/*
 * FUN_00613930 (176 B) — __thiscall constructor (1 param). Sets up
 * vtables 0x76cd9c/0x78c284/0x78c288, calls FUN_00415180/FUN_00416990,
 * then loops calling a virtual method on the param object, allocating
 * and building entries via FUN_004084d0/FUN_006137b0/FUN_00416a90 with
 * refcount-decrement frees via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006137b0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00613930(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        push    1
        lea     edi, [esi+0x10]
        push    0
        mov     ecx, edi
        mov     dword ptr [esi+0x08], 0
        mov     dword ptr [esi+0x0c], 0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00416990
        mov     ebx, dword ptr [esp+0x10]
        mov     edx, dword ptr [ebx]
        mov     dword ptr [edi], 0x78c288
        mov     ecx, ebx
        mov     dword ptr [esi], 0x78c284
        call    dword ptr [edx+0x08]
        test    eax, eax
        jbe     done
loop_again:
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      gotnull
        push    ebx
        mov     ecx, eax
        call    FUN_006137b0
        jmp     got
gotnull:
        xor     eax, eax
got:
        mov     ecx, dword ptr [eax+0x18]
        test    ecx, ecx
        mov     dword ptr [esp+0x10], ecx
        jz      skipinc
        inc     byte ptr [ecx-1]
skipinc:
        lea     ecx, [esp+0x10]
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_00416a90
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      L1
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x08]
        test    eax, eax
        ja      loop_again
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
