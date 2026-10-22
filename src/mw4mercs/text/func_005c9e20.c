/*
 * FUN_005c9e20 (1518 B) — Large __thiscall initializer/loader.
 * Reads a global, calls FUN_006f4950, then performs a long series of
 * virtual calls (vtable+0x20) reading fields into this+0x4e0..0x614,
 * with two conditional sub-blocks (0x598/0x59c) and two growable
 * arrays (0x5a4, 0x5c4).
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00661760(void);
extern void __cdecl FUN_005cb670(void);
extern void __cdecl FUN_005cbbe0(void);
extern void __cdecl FUN_005cbe30(void);
extern void __cdecl FUN_005cbc20(void);
extern void __cdecl FUN_005cbc00(void);
extern void __cdecl FUN_005cb6c0(void);
extern void __cdecl FUN_005cbb90(void);
extern void __cdecl FUN_005cb6f0(void);
extern void __cdecl FUN_0065e450(void);
extern void __cdecl FUN_005cbb40(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_005cb540(void);
extern void __cdecl FUN_005ce340(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_005c9e20(void *param)
{
    

extern int DAT_007f2460;
__asm {
mov eax, dword ptr [DAT_007f2460]
        sub     esp, 0x58
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     edi, ecx
        call    FUN_006f4950
        mov     esi, dword ptr [esp + 0x6c]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x15]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     byte ptr [esp + 0x11], 0x1
        jnz     L_9EA0
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x6c]
        push    ecx
        lea     edx, [edi + 0x508]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_00661760
        mov     ebx, eax
        lea     ebp, [edi + 0x4e0]
        add     esp, 0xc
        cmp     ebx, ebp
        jz      L_9E95
        mov     ecx, ebp
        call    FUN_005cb670
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [ebp], ecx
        push    0x0
        mov     ecx, ebx
        call    FUN_005cbbe0
L_9E95:
        lea     ecx, [esp + 0x1c]
        call    FUN_005cb670
        jmp     L_9EE9
L_9EA0:
        mov     eax, dword ptr [edi + 0x4e0]
        mov     edx, eax
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     L_9EDF
        mov     ecx, eax
        and     ecx, 0x2
        cmp     cl, 0x2
        jnz     L_9ECB
        and     eax, 0xfffffffc
        mov     dword ptr [edi + 0x4e0], eax
        jz      L_9EDF
        mov     edx, dword ptr [eax]
        push    0x3
        jmp     L_9EDA
L_9ECB:
        and     eax, 0xfffffffc
        mov     dword ptr [edi + 0x4e0], eax
        jz      L_9EDF
        mov     edx, dword ptr [eax]
        push    0x1
L_9EDA:
        mov     ecx, eax
        call    dword ptr [edx + 0xc]
L_9EDF:
        mov     dword ptr [edi + 0x4e0], 0x0
L_9EE9:
        mov     eax, dword ptr [esi]
        push    0xc
        lea     ecx, [edi + 0x4e4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x4f0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x4fc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x518]
        mov     dword ptr [edi + 0x514], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x51c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x520]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x524]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x528]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x52c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x530]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x534]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x540]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x544]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x545]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x546]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x547]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x549]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x54a]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x54c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x548]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x8
        lea     eax, [edi + 0x550]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x8
        lea     eax, [edi + 0x558]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x560]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x564]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x568]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x56c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x570]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x574]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x578]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x57c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x580]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x584]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x588]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x594]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x16]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     byte ptr [esp + 0x12], 0x1
        jnz     L_CA18D
        mov     edx, dword ptr [esi]
        push    0x30
        lea     eax, [esp + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edi + 0x598]
        lea     ebx, [edi + 0x598]
        mov     dword ptr [esp + 0x6c], ecx
        push    0x0
        mov     ecx, ebx
        call    FUN_005cbe30
        push    0x0
        push    0x1
        lea     edx, [esp + 0x40]
        push    edx
        mov     ecx, ebx
        call    FUN_005cbc20
        lea     eax, [esp + 0x6c]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005cbc00
        lea     ecx, [esp + 0x6c]
        call    FUN_005cb6c0
        lea     ecx, [esp + 0x1c]
        call    FUN_005cb6c0
L_CA18D:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x17]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     byte ptr [esp + 0x13], 0x1
        jnz     L_CA1F9
        mov     edx, dword ptr [esi]
        push    0x30
        lea     eax, [esp + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edi + 0x59c]
        lea     ebx, [edi + 0x59c]
        mov     dword ptr [esp + 0x6c], ecx
        push    0x0
        mov     ecx, ebx
        call    FUN_005cbe30
        push    0x0
        push    0x1
        lea     edx, [esp + 0x40]
        push    edx
        mov     ecx, ebx
        call    FUN_005cbc20
        lea     eax, [esp + 0x6c]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005cbc00
        lea     ecx, [esp + 0x6c]
        call    FUN_005cb6c0
        lea     ecx, [esp + 0x1c]
        call    FUN_005cb6c0
L_CA1F9:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x5a0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edi + 0x5a4]
        mov     eax, dword ptr [edi + 0x5a8]
        lea     ebp, [edi + 0x5a4]
        push    ecx
        push    eax
        push    eax
        call    FUN_005cbb90
        mov     dword ptr [ebp + 0x4], eax
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0xc
        xor     ebx, ebx
        test    eax, eax
        jbe     L_CA285
L_CA241:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp + 0x4]
        cmp     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [esp + 0x6c]
        mov     dword ptr [esp + 0x1c], ecx
        jz      L_CA26D
        test    eax, eax
        jz      L_CA265
        mov     dword ptr [eax], ecx
L_CA265:
        add     eax, 0x4
        mov     dword ptr [ebp + 0x4], eax
        jmp     L_CA27C
L_CA26D:
        push    0x1
        lea     ecx, [esp + 0x20]
        push    ecx
        push    eax
        mov     ecx, ebp
        call    FUN_005cb6f0
L_CA27C:
        mov     eax, dword ptr [esp + 0x14]
        inc     ebx
        cmp     ebx, eax
        jc      L_CA241
L_CA285:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        lea     ecx, [edi + 0x5b0]
        call    FUN_0065e450
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x5bc]
        mov     dword ptr [edi + 0x5b8], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edi + 0x5c4]
        mov     eax, dword ptr [edi + 0x5c8]
        lea     ebp, [edi + 0x5c4]
        push    ecx
        push    eax
        push    eax
        call    FUN_005cbb40
        mov     dword ptr [ebp + 0x4], eax
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0xc
        test    eax, eax
        mov     dword ptr [esp + 0x6c], 0x0
        jbe     L_CA357
L_CA309:
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ebx, dword ptr [ebp + 0x4]
        cmp     ebx, dword ptr [ebp + 0x8]
        jz      L_CA337
        test    ebx, ebx
        jz      L_CA32F
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, ebx
        call    FUN_0040c5d0
L_CA32F:
        add     ebx, 0xc
        mov     dword ptr [ebp + 0x4], ebx
        jmp     L_CA346
L_CA337:
        push    0x1
        lea     edx, [esp + 0x30]
        push    edx
        push    ebx
        mov     ecx, ebp
        call    FUN_005cb540
L_CA346:
        mov     eax, dword ptr [esp + 0x6c]
        mov     ecx, dword ptr [esp + 0x18]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x6c], eax
        jc      L_CA309
L_CA357:
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [edi + 0x5d0]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x5d4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x5e0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x5e4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x5f8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x5fc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x5fd]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x4dc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x5fe]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x614]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        push    esi
        mov     ecx, edi
        call    FUN_005ce340
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x58
        ret     4
    }


}
