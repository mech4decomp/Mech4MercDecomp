/*
 * FUN_005ff890 (639 B) — __thiscall. Weapon/mech rendering buffer manager.
 * Computes capacities, allocates/frees buffers (FUN_004084d0/e0), and
 * orchestrates a chain of ctor/helper calls (FUN_00602c40/c80/c20/f20/f80,
 * FUN_00602fe0, FUN_00603030) plus sibling helpers FUN_005ffb10/820/840/6d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ffb10(void);
extern void __cdecl FUN_00602c80(void);
extern void __cdecl FUN_005ff840(void);
extern void __cdecl FUN_00602c40(void);
extern void __cdecl FUN_00602f20(void);
extern void __cdecl FUN_00602fe0(void);
extern void __cdecl FUN_005ff6d0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00602c20(void);
extern void __cdecl FUN_005ff820(void);
extern void __cdecl FUN_00602f80(void);
extern void __cdecl FUN_00603030(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005ff890(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        mov     ebx, dword ptr [esp+0x38]
        test    ebx, ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        jz      LFB05
        mov     ecx, dword ptr [esi+0x4]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [esi+0x10]
        mov     dword ptr [esp+0x24], ecx
        mov     dword ptr [esp+0x1c], ecx
        lea     edi, [esi+0x8]
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x20], eax
        mov     dword ptr [esp+0x28], edx
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp+0x18], eax
        mov     eax, dword ptr [edi+0x4]
        push    ecx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x30], 0x0
        mov     dword ptr [esp+0x14], edx
        mov     dword ptr [esp+0x18], eax
        call    FUN_005ffb10
        lea     edx, [esp+0x20]
        push    edx
        lea     ecx, [esp+0x2c]
        mov     ebp, eax
        call    FUN_005ffb10
        sub     eax, ebp
        cmp     eax, ebx
        jc      L999
        sub     esp, 0x8
        mov     ebp, esp
        push    ebx
        lea     eax, [esp+0x34]
        push    eax
        mov     ecx, edi
        call    FUN_00602c80
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax+0x4]
        mov     dword ptr [ebp], ecx
        lea     eax, [esp+0x28]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp+0x4], edx
        call    FUN_005ff840
        sub     esp, 0x8
        mov     ecx, esp
        push    eax
        call    FUN_00602c40
        sub     esp, 0x8
        lea     edx, [esp+0x54]
        mov     ecx, esp
        push    edx
        call    FUN_00602c40
        lea     eax, [esp+0x30]
        push    eax
        call    FUN_00602f20
        add     esp, 0x1c
        lea     ecx, [esp+0x48]
        push    ecx
        push    ebx
        lea     edx, [esp+0x30]
        push    edx
        lea     ecx, [esp+0x48]
        call    FUN_00602c80
        sub     esp, 0x8
        mov     ecx, esp
        push    eax
        call    FUN_00602c40
        sub     esp, 0x8
        lea     eax, [esp+0x50]
        mov     ecx, esp
        push    eax
        call    FUN_00602c40
        call    FUN_00602fe0
        add     esp, 0x14
        push    ebx
        mov     ecx, edi
        call    FUN_005ff6d0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x10
L999:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [esi+0x4]
        mov     ebp, dword ptr [edi+0x4]
        sub     eax, ecx
        sar     eax, 0x2
        shl     eax, 0x5
        sub     eax, edx
        add     eax, ebp
        mov     dword ptr [esp+0x18], eax
        mov     edx, ecx
        mov     ecx, dword ptr [edi]
        cmp     eax, ebx
        lea     eax, [esp+0x44]
        jc      L9C3
        lea     eax, [esp+0x18]
L9C3:
        sub     ecx, edx
        mov     dword ptr [esp+0x10], eax
        sar     ecx, 0x2
        shl     ecx, 0x5
        mov     eax, ecx
        sub     eax, dword ptr [esi+0x4]
        mov     ecx, dword ptr [esp+0x10]
        add     eax, dword ptr [ecx]
        add     eax, ebp
        add     eax, 0x1f
        shr     eax, 0x5
        mov     dword ptr [esp+0x18], eax
        jz      L9FE
        lea     edx, [eax*4]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp+0x44], eax
        jmp     LA06
L9FE:
        mov     dword ptr [esp+0x44], 0x0
LA06:
        mov     eax, dword ptr [esp+0x44]
        sub     esp, 0x8
        mov     ebp, esp
        push    0x0
        push    eax
        lea     ecx, [esp+0x38]
        call    FUN_00602c20
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax+0x4]
        sub     esp, 0x8
        mov     dword ptr [ebp], ecx
        lea     eax, [esp+0x4c]
        mov     ecx, esp
        push    eax
        mov     dword ptr [ebp+0x4], edx
        call    FUN_00602c40
        lea     ecx, [esp+0x30]
        push    ecx
        mov     ecx, esi
        call    FUN_005ff820
        sub     esp, 0x8
        mov     ecx, esp
        push    eax
        call    FUN_00602c40
        lea     edx, [esp+0x48]
        push    edx
        call    FUN_00602f80
        mov     ecx, dword ptr [eax]
        add     esp, 0x1c
        mov     dword ptr [esp+0x10], ecx
        mov     edx, dword ptr [eax+0x4]
        lea     eax, [esp+0x48]
        push    eax
        push    ebx
        sub     esp, 0x8
        mov     dword ptr [esp+0x24], edx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00602c40
        lea     eax, [esp+0x40]
        push    eax
        call    FUN_00603030
        add     esp, 0xc
        mov     ebp, esp
        push    ebx
        lea     ecx, [esp+0x3c]
        push    ecx
        lea     ecx, [esp+0x20]
        call    FUN_00602c80
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [eax+0x4]
        lea     ecx, [esp+0x30]
        push    ecx
        mov     dword ptr [ebp], edx
        mov     ecx, esi
        mov     dword ptr [ebp+0x4], eax
        call    FUN_005ff840
        sub     esp, 0x8
        mov     ecx, esp
        push    eax
        call    FUN_00602c40
        sub     esp, 0x8
        lea     edx, [esp+0x54]
        mov     ecx, esp
        push    edx
        call    FUN_00602c40
        lea     eax, [esp+0x38]
        push    eax
        call    FUN_00602f80
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax+0x4]
        mov     eax, dword ptr [esi]
        add     esp, 0x1c
        test    eax, eax
        mov     dword ptr [edi], ecx
        mov     dword ptr [edi+0x4], edx
        jz      LAF0
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LAF0:
        mov     ecx, dword ptr [esp+0x44]
        mov     eax, dword ptr [esp+0x18]
        lea     edx, [ecx+eax*0x4]
        xor     eax, eax
        mov     dword ptr [esi], ecx
        mov     dword ptr [esi+0x10], edx
        mov     dword ptr [esi+0x4], eax
LFB05:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x10
    }
}
