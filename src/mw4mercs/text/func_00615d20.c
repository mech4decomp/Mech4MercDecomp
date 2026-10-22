/*
 * FUN_00615d20 (284 B) — __thiscall (ECX=this), RET 4. Allocates a
 * 0x34-byte object (vtable 0x78c4fc), initializes it via several
 * vtable[0x20] reads and FUN_00412a00, then registers it through
 * FUN_00416a90. Loops while vtable[8]() returns nonzero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8c10;    /* 0x007b8c10 */

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_00415180(int);
extern void __cdecl FUN_00412a00(void *a, void *b);
extern void __cdecl FUN_00416a90(void *a, void *b);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00615d20(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x8]
        test    eax, eax
        jbe     L5E36
        push    ebx
        add     esi, 0x54
        push    ebp
        mov     dword ptr [esp + 0x10], esi
L5D41:
        push    0x34
        call    FUN_004084d0
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 0x4
        cmp     esi, ebx
        jz      L5DEB
        mov     ecx, dword ptr [g_7b8c10]
        push    ecx
        mov     ecx, esi
        call    FUN_00415180
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi + 0x10], ebx
        lea     ebp, [esi + 0x10]
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xC], ebx
        lea     eax, [esi + 0x18]
        mov     dword ptr [esi + 0x14], 0x0
        lea     ebx, [esi + 0x14]
        push    0x4
        mov     word ptr [eax], 0xFFFF
        mov     word ptr [eax + 0x2], 0x0
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x78c4fc
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        call    FUN_00412a00
        push    ebx
        push    edi
        call    FUN_00412a00
        mov     eax, dword ptr [edi]
        add     esp, 0x10
        push    0x4
        lea     ecx, [esi + 0x20]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x24]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x2C]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x30]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     dword ptr [esi + 0x28], 0x0
        mov     byte ptr [esi + 0x1C], 0x0
        jmp     L5DED
L5DEB:
        xor     esi, esi
L5DED:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jz      L5DFB
        inc     byte ptr [eax - 1]
L5DFB:
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    esi
        call    FUN_00416a90
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L5E25
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L5E25
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L5E25:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x8]
        test    eax, eax
        ja      L5D41
        pop     ebp
        pop     ebx
L5E36:
        pop     edi
        pop     esi
        pop     ecx
        ret     4
    }
}
