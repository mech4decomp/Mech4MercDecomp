/*
 * FUN_005fca60 (287 B) — __thiscall. Builds a temp object on the stack,
 * then loops calling virtual methods (slot 4) on a sub-object, allocates
 * a 0x48-byte buffer, and processes a string. Tears down the temp object
 * at the end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00507e80(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d2330(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_005fca60(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        sub     esp, 0x90
        push    ebx
        push    0x1
        mov     ebx, ecx
        push    eax
        lea     ecx, [esp+0x1c]
        call    FUN_004d1f80
        mov     ecx, dword ptr [esp+0x24]
        mov     edx, dword ptr [esp+0x28]
        mov     eax, dword ptr [esp+0x30]
        sub     ecx, edx
        add     ecx, eax
        jz      L6
        push    edi
        lea     edi, [ebx+0x28c]
L1:
        mov     eax, dword ptr [esp+0x18]
        push    0xc
        lea     edx, [esp+0x60]
        push    edx
        lea     ecx, [esp+0x20]
        mov     dword ptr [esp+0x10], 0x0
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [esp+0x18]
        push    0xc
        lea     ecx, [esp+0x10]
        push    ecx
        lea     ecx, [esp+0x20]
        call    dword ptr [edx+0x20]
        lea     eax, [esp+0x8]
        push    eax
        lea     ecx, [esp+0x1c]
        push    ecx
        call    FUN_00412a00
        add     esp, 0x8
        lea     edx, [esp+0x5c]
        push    edx
        lea     ecx, [esp+0x6c]
        call    FUN_0041a070
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x14]
        push    0x48
        mov     dword ptr [esp+0x78], eax
        mov     dword ptr [esp+0x88], ecx
        mov     dword ptr [esp+0x98], edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L2
        lea     ecx, [esp+0x8]
        push    ecx
        push    ebx
        lea     edx, [esp+0x70]
        push    edx
        mov     ecx, eax
        call    FUN_00507e80
        jmp     L3
L2:
        xor     eax, eax
L3:
        lea     ecx, [esp+0x8]
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_00416a90
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      L4
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L4:
        mov     edx, dword ptr [esp+0x28]
        mov     ecx, dword ptr [esp+0x2c]
        mov     eax, dword ptr [esp+0x34]
        sub     edx, ecx
        add     edx, eax
        jnz     L1
        pop     edi
L6:
        lea     ecx, [esp+0x14]
        call    FUN_004d2330
        lea     ecx, [esp+0x14]
        call    FUN_004d21c0
        pop     ebx
        add     esp, 0x90
        ret     0x4
    }
}
