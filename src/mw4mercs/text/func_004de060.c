/*
 * FUN_004de060 (727 B) — MLR/Adept application-core teardown/cleanup.
 * __thiscall (ECX = this). Iterates several linked lists of objects
 * (vtable 0x77392c), releasing each via its vtable[0] method, then
 * tears down a series of member sub-objects (FUN_004de350) and a
 * final list (vtable 0x773928).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dfbb0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_004de340(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004df900(void);
extern void __cdecl FUN_004de350(void);

__declspec(naked) void FUN_004de060(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x20]
        mov     eax, dword ptr [ebx + 0x24]
        push    esi
        push    edi
        push    ecx
        push    eax
        push    eax
        mov     byte ptr [ebx + 0x3b74], 0x0
        mov     byte ptr [ebx + 0x2c], 0x1
        call    FUN_004dfbb0
        mov     ebp, dword ptr [ebx + 0x34]
        add     esp, 0xc
        test    ebp, ebp
        mov     dword ptr [ebx + 0x24], eax
        jz      L1A8
        mov     edi, dword ptr [ebx + 0x38]
        add     edi, 0x10
        mov     dword ptr [esp + 0x10], 0x5
L0A1:
        push    edi
        lea     ecx, [esp + 0x18]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x77392c
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jz      L0E6
L0C2:
        lea     ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        jz      L0D7
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L0D7:
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jnz     L0C2
L0E6:
        mov     eax, dword ptr [esp + 0x10]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L0A1
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jle     L14E
        mov     edi, dword ptr [ebx + 0x3c]
        add     edi, 0x10
        mov     ebp, eax
L103:
        push    edi
        lea     ecx, [esp + 0x18]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x77392c
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jz      L148
L124:
        lea     ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        jz      L139
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
L139:
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jnz     L124
L148:
        add     edi, 0x1c
        dec     ebp
        jnz     L103
L14E:
        mov     eax, dword ptr [ebx + 0x40]
        test    eax, eax
        jz      L1A8
        lea     edi, [eax + 0x10]
        mov     ebp, 0x4
L15D:
        push    edi
        lea     ecx, [esp + 0x18]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x77392c
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jz      L1A2
L17E:
        lea     ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        jz      L193
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L193:
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jnz     L17E
L1A2:
        add     edi, 0x1c
        dec     ebp
        jnz     L15D
L1A8:
        lea     eax, [ebx + 0x54]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004df900
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jz      L1E8
L1C4:
        lea     ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        jz      L1D9
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L1D9:
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jnz     L1C4
L1E8:
        lea     eax, [ebx + 0x70]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004df900
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jz      L228
L204:
        lea     ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        jz      L219
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L219:
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jnz     L204
L228:
        lea     eax, [ebx + 0x8c]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004df900
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jz      L26B
L247:
        lea     ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        jz      L25C
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L25C:
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jnz     L247
L26B:
        lea     eax, [ebx + 0xa8]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004df900
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jz      L2AE
L28A:
        lea     ecx, [esp + 0x14]
        call    FUN_00417ad0
        test    esi, esi
        jz      L29F
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L29F:
        lea     ecx, [esp + 0x14]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jnz     L28A
L2AE:
        lea     ecx, [ebx + 0xb4]
        call    FUN_004de350
        lea     esi, [ebx + 0xd0]
        mov     edi, 0x5
L2C4:
        mov     ecx, esi
        call    FUN_004de350
        add     esi, 0x1c
        dec     edi
        jnz     L2C4
        lea     esi, [ebx + 0x15c]
        mov     edi, 0x212
L2DC:
        mov     ecx, esi
        call    FUN_004de350
        add     esi, 0x1c
        dec     edi
        jnz     L2DC
        lea     eax, [ebx + 0x3b80]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], 0x773928
        call    FUN_004de340
        test    eax, eax
        jz      L324
L30E:
        lea     ecx, [esp + 0x20]
        call    FUN_00417ad0
        lea     ecx, [esp + 0x20]
        call    FUN_004de340
        test    eax, eax
        jnz     L30E
L324:
        lea     ecx, [ebx + 0x3b54]
        call    FUN_004de350
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
