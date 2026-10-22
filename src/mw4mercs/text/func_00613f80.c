/*
 * FUN_00613f80 (176 B) — __thiscall constructor: initializes a container
 * object (vtables 0x78c2c0/0x78c2c4), then iterates over an input
 * collection (virtual method vtable+0x8) allocating 0x24-byte elements
 * (FUN_00613db0) and inserting them via FUN_00416a90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(int);
extern void __cdecl FUN_00416990(int, int);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_00613db0(void *);
extern void __cdecl FUN_00416a90(void *, void *);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00613f80(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        push    0x1
        lea     edi, [esi+0x10]
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esi+0x8], 0x0
        mov     dword ptr [esi+0xc], 0x0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00416990
        mov     ebx, dword ptr [esp+0x10]
        mov     edx, dword ptr [ebx]
        mov     dword ptr [edi], 0x78c2c4
        mov     ecx, ebx
        mov     dword ptr [esi], 0x78c2c0
        call    dword ptr [edx+0x8]
        test    eax, eax
        jbe     lbl_614028
lbl_613fcd:
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      lbl_613fe5
        push    ebx
        mov     ecx, eax
        call    FUN_00613db0
        jmp     lbl_613fe7
lbl_613fe5:
        xor     eax, eax
lbl_613fe7:
        mov     ecx, dword ptr [eax+0x18]
        test    ecx, ecx
        mov     dword ptr [esp+0x10], ecx
        jz      lbl_613ff5
        inc     byte ptr [ecx-1]
lbl_613ff5:
        lea     ecx, [esp+0x10]
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_00416a90
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      lbl_61401d
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_61401d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_61401d:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x8]
        test    eax, eax
        ja      lbl_613fcd
lbl_614028:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
